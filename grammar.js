const WHITE_SPACE = /[\x01-\x20\x80-\xA0]+/;
const UNARY_OPS = ["+", "-", "not", "bnot"];
const MULT_OPS = ["/", "*", "div", "rem", "band", "and"];
const ADD_OPS = ["+", "-", "bor", "bxor", "bsl", "bsr", "or", "xor"];
const LIST_OPS = ["++", "--"];
const COMP_OPS = ["==", "/=", "=<", "<", ">=", ">", "=:=", "=/="];
const DOUBLE_OPS = ["||", "::"];

const PREC = {
  MACRO_ARROW: -3,
  MACRO: -2,
  MACRO_WHEN: -1,
  COMMENT: -1,
  PARENS_EXPR: -1,
  COLON: 100,
  POUND: 95,
  UNARY: 90,
  MULT_OP: 85,
  ADD_OP: 80,
  LIST_OP: 75,
  COMP_OP: 70,
  ANDALSO: 65,
  ORELSE: 60,
  MATCH_SEND: 55,
  MAYBE_MATCH: 53,
  RANGE: 51,
  CATCH: 50,
  BAR: 45,
  DOUBLE_OP: 35,
  ARROW: 30,
};

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  conflicts: ($) => [
    // This interestng case: "macro  •  '.'  …" should prefer function,
    // since function is not allowed under _expresion, so _identifier
    // should match with higher implicit precedence when the state stack
    // has longer-matching candidates.
    [$.function, $._identifier, $._strings],
    // This case "'if'  'fun'  '('  ')'  •  '->'  …" is impossible syntax,
    // but it makes sense to group 'fun' with its arguments at a higher
    // precedence than letting the arguments win.
    [$.function_type, $.arguments],
    // Handles a fight between _identifier and attribute caused by unary
    // operators: "'-'  _atom  •  '-'  …"
    [$.attribute, $._identifier],
    // Handles the case "_identifier  •  '('  …":
    [$._named_stab_clause, $._literal, $._expression],
    // A literal needs to beat an expression so that calls may be recognized
    // in the case of "_parenthesized_expression  •  '('  …".
    [$._literal, $._expression],
    // This case is needed explicitly for macros:
    //     "'-'  'define'  '('  _expression  ','  _identifier  •  '('  …"
    [$._named_stab_clause, $._literal],
    // This case "macro  •  ','  …" pops up because strings can be placed
    // right next to one another to perform concatenation, and macros can
    // contain strings. We prefer _identifier so not every macro looks like
    // a string
    [$._identifier, $._strings],
    // "anonymous_function  •  '('  …" needs to interpreted as a call.
    [$.call, $._expression],
    // This conflict allows us to parse a trailing comma ',' within a
    // macro definition:
    //     '-'  'define'  '('  _expression  ','  _expression  •  ','  …
    [$.body, $._body],
    // same:
    [$._semicolon_separated_expressions, $._body, $.body],
  ],

  rules: {
    source: ($) =>
      repeat(choice($._statement, seq(sep($._expression, ","), $._terminator))),

    _statement: ($) =>
      seq(
        choice(
          $.function,
          alias($._macro_declaration, $.attribute),
          alias($._spec, $.attribute),
          $.attribute
        ),
        "."
      ),

    _terminator: ($) => choice(".", "\n"),

    function: ($) => prec.left(sep(choice($._named_stab_clause, $.macro), ";")),

    _macro_declaration: ($) =>
      seq(
        "-",
        field("name", alias("define", $.atom)),
        alias($._macro_arguments, $.arguments)
      ),

    _macro_arguments: ($) =>
      parens(
        seq(
          $._expression,
          ",",
          // The second argument (the body) of a macro definition is allowed
          // some extra funky syntax. For example with _named_stab_clause,
          // you can use a macro to write functions.
          choice(
            seq($._body, optional(",")),
            alias($._named_stab_clause, $.function),
            alias($._semicolon_separated_expressions, $.body)
          )
        )
      ),

    _semicolon_separated_expressions: ($) =>
      sep1(choice(sep($._expression, ","), $.function), ";"),

    _spec: ($) =>
      seq(
        "-",
        field("name", alias(choice("spec", "callback"), $.atom)),
        optionalParens(
          seq(
            optional(prec(1, seq(field("module", $._identifier), ":"))),
            sep(
              seq(
                $.stab_clause,
                optional(seq("when", alias($._items, $.guard)))
              ),
              ";"
            )
          )
        )
      ),

    attribute: ($) =>
      seq(
        "-",
        // 'if' is used later in a rule, we use a choice here with the
        // literal value to force precedence.
        field("name", choice("if", $._atom)),
        optional(choice($.arguments, alias($._items, $.arguments)))
      ),

    _expression: ($) =>
      choice(
        $._identifier,
        $._strings,
        $.tripledot,
        $.character,
        $._number,
        $.bitstring,
        $.tuple,
        $.list,
        $.map,
        $.record,
        $.unary_operator,
        $.binary_operator,
        $.anonymous_function,
        $.function_capture,
        $.function_type,
        $.call,
        $.block,
        $.if,
        $.case,
        $.receive,
        $.try,
        $.maybe,
        $._parenthesized_expression
      ),

    _parenthesized_expression: ($) =>
      prec(PREC.PARENS_EXPR, parens($._expression)),

    bitstring: ($) => seq("<<", optional($._items), ">>"),
    tuple: ($) => seq("{", optional($._items), "}"),
    list: ($) => seq("[", optional($._items), "]"),

    map: ($) => prec(PREC.POUND, seq("#", $._map_body)),

    _map_body: ($) =>
      prec.right(seq("{", optional(alias($._items, $.map_content)), "}")),

    record: ($) =>
      prec(PREC.POUND, seq(optional($._literal), "#", $._record_body)),

    _record_body: ($) =>
      prec.right(
        seq(
          field("name", $._identifier),
          optional(
            choice(
              seq("{", optional(alias($._items, $.record_content)), "}"),
              field("field", seq(".", $._identifier))
            )
          )
        )
      ),

    unary_operator: ($) =>
      choice(
        unaryOp($, PREC.UNARY, prec, choice(...UNARY_OPS)),
        unaryOp($, PREC.CATCH, prec, "catch"),
        unaryOp($, PREC.MACRO, prec, $.macro)
      ),

    binary_operator: ($) =>
      choice(
        binaryOp($, PREC.COLON, prec.left, ":"),
        binaryOp(
          $,
          PREC.POUND,
          prec.left,
          "#",
          $._expression,
          choice($._record_body, $._map_body)
        ),
        binaryOp($, PREC.MULT_OP, prec.left, choice(...MULT_OPS)),
        binaryOp($, PREC.ADD_OP, prec.left, choice(...ADD_OPS)),
        binaryOp($, PREC.LIST_OP, prec.right, choice(...LIST_OPS)),
        binaryOp($, PREC.COMP_OP, prec.left, choice(...COMP_OPS)),
        binaryOp($, PREC.ANDALSO, prec.left, "andalso"),
        binaryOp($, PREC.ORELSE, prec.left, "orelse"),
        binaryOp($, PREC.MATCH_SEND, prec.right, choice("=", "!")),
        binaryOp($, PREC.MAYBE_MATCH, prec.right, "?="),
        binaryOp(
          $,
          PREC.RANGE,
          prec.left,
          "..",
          choice($.integer, $.character, $._identifier),
          choice($.integer, $.character, $._identifier)
        ),
        binaryOp($, PREC.DOUBLE_OP, prec.right, choice(...DOUBLE_OPS)),
        binaryOp($, PREC.BAR, prec.left, "|"),
        binaryOp($, PREC.ARROW, prec.left, choice("<-", "<=", "=>", ":=")),
        binaryOp($, PREC.MACRO_ARROW, prec.right, "->"),
        binaryOp($, PREC.MACRO_WHEN, prec.left, "when")
      ),

    _literal: ($) =>
      choice($._number, $._identifier, $._parenthesized_expression),

    anonymous_function: ($) => seq("fun", sep($.stab_clause, ";"), "end"),

    stab_clause: ($) => choice($._named_stab_clause, $._anonymous_stab_clause),

    _named_stab_clause: ($) =>
      seq(
        field("name", $._identifier),
        field("pattern", $.arguments),
        optional(field("guard", seq("when", $.guard))),
        "->",
        field("body", $._body)
      ),

    _anonymous_stab_clause: ($) =>
      seq(
        field("pattern", $.arguments),
        optional(field("guard", seq("when", $.guard))),
        "->",
        field("body", $._body)
      ),

    clause: ($) =>
      seq(
        field("pattern", $._items),
        optional(field("guard", seq("when", $.guard))),
        "->",
        field("body", $._body)
      ),

    guard: ($) => sep($._items, ";"),

    arguments: ($) => parens(optional($._items)),

    _body: ($) => choice($._expression, $.body),

    body: ($) => prec.right(sep1($._expression, ",")),

    _items: ($) => sep($._expression, ","),

    call: ($) =>
      seq(
        choice(
          $._qualified_function,
          $._unqualified_function,
          $.anonymous_function,
          $.list,
          $.tuple,
          $.unary_operator,
          $.try
        ),
        $.arguments
      ),

    _qualified_function: ($) =>
      seq(
        field("module", $._literal),
        ":",
        field("function", choice($._literal, $.case, $.if))
      ),

    _unqualified_function: ($) => field("function", $._literal),

    function_capture: ($) =>
      prec.left(
        seq(
          "fun",
          choice($._qualified_function, $._unqualified_function),
          "/",
          field("arity", $._expression)
        )
      ),

    function_type: ($) =>
      seq("fun", parens(optional(seq($.arguments, "->", $._expression)))),

    block: ($) => seq("begin", optional($._items), "end"),

    if: ($) => seq("if", sep(alias($._if_clause, $.clause), ";"), "end"),

    _if_clause: ($) => seq($.guard, "->", $._body),

    case: ($) =>
      seq(
        "case",
        field("subject", $._expression),
        "of",
        sep($.clause, ";"),
        "end"
      ),

    receive: ($) =>
      seq("receive", optional(sep($.clause, ";")), optional($.after), "end"),

    after: ($) => seq("after", $._expression, "->", $._body),
    _body_after: ($) => seq("after", $._body),

    try: ($) =>
      seq(
        "try",
        field("subject", $._body),
        optional(field("of", seq("of", sep($.clause, ";")))),
        optional(field("catch", seq("catch", sep($.clause, ";")))),
        optional(field("after", alias($._body_after, $.after))),
        "end"
      ),

    // EEP49 (OTP25)
    maybe: ($) =>
      seq(
        "maybe",
        $._body,
        optional(field("else", seq("else", sep($.clause, ";")))),
        "end"
      ),

    // an escape sequence, printable ASCII character, or unicode
    character: ($) =>
      seq("$", choice($.escape_sequence, token.immediate(/[^\\]/))),

    _number: ($) => choice($.integer, $.float),

    integer: ($) =>
      choice(
        // regular base-10 integers
        /[+-]?[0-9][0-9_]*/,
        // base#value syntax
        // Note that this is slightly permissive, you can only use up to
        // base 36 in reality.
        /[+-]?[0-3]?[0-9]#[0-9a-zA-Z_]+/
      ),

    float: ($) => /[+-]?[0-9][0-9_]*\.[0-9_]+([eE][+-]?[0-9]+)?/,

    _identifier: ($) => choice($._atom, $.variable, $.macro),

    _atom: ($) => choice($.atom, $.quoted_atom),

    // latin1 diacritics are allowed.
    atom: ($) => token(/[a-zà-öø-ÿ][a-zA-ZÀ-ÿ0-9_@]*/),

    quoted_atom: ($) =>
      seq(
        field("quoted_start", "'"),
        repeat(choice($.quoted_content, $.escape_sequence)),
        field("quoted_end", "'")
      ),

    variable: ($) => /[A-Z_][a-zA-Z0-9_@]*/,

    macro: ($) =>
      prec.right(
        seq(
          "?",
          optional(token.immediate("?")),
          field("name", choice($._atom, $.variable)),
          optional(field("arguments", $.arguments))
        )
      ),

    // One can write multiple strings with optional whitespace in between.
    // The strings are combined:
    //     erl> "hello""world".
    //     "helloworld"
    // Note that we don't combined these strings: each string gets its own
    // node. I believe this will behave more predictably for anyone using
    // tree-sitter for motion (within an editor for example).
    _strings: ($) => prec.right(repeat1(choice($.string, $.macro))),

    string: ($) =>
      seq(
        field("quoted_start", '"'),
        repeat(choice($.escape_sequence, $.quoted_content)),
        field("quoted_end", '"')
      ),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            // hexadecimal
            /x[\da-fA-F]{2}/,
            /x{[\da-fA-F]+}/,
            // octal
            /[0-7]{1,3}/,
            // control sequences,
            /\^[a-zA-Z\[\]\^_\\]/,
            // characters
            /[\x20-\x7f]/
          )
        )
      ),

    quoted_content: ($) => /([^\\\"\']+|[\\\"\'])/,

    // Used in typespecs:
    //     -type t :: [integer(), ...].
    tripledot: ($) => "...",

    comment: ($) =>
      seq(
        prec(PREC.COMMENT, token(repeat1("%"))),
        field("comment_content", /.*/)
      ),
  },
});

function sep(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep1(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

function parens(rule) {
  return seq("(", rule, ")");
}

function optionalParens(rule) {
  return choice(parens(rule), rule);
}

function unaryOp($, precedence, assoc, operator, operand = null) {
  return assoc(
    precedence,
    seq(field("operator", operator), field("operand", operand || $._expression))
  );
}

function binaryOp($, precedence, assoc, operator, left = null, right = null) {
  return assoc(
    precedence,
    seq(
      field("left", left || $._expression),
      field("operator", operator),
      field("right", right || $._expression)
    )
  );
}
