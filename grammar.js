const WHITE_SPACE = /[\r\n\t\f\v ]+/;
const MULT_OPS = ["/", "*", "div", "rem", "band", "and"];
const ADD_OPS = ["+", "-", "bor", "bxor", "bsl", "bsr", "or", "xor"];
const LIST_OPS = ["++", "--"];
const COMP_OPS = ["==", "/=", "=<", "<", ">=", ">", "=:=", "=/="];

const LEFT_ASSOC_BINARY_OPS = ["=>", ":="];

const RIGHT_ASSOC_BINARY_OPS = ["!", "=", "++", "--", "||"];
const UNARY_OPS = ["+", "-", "not", "bnot"];
const PREC = {
  COMMENT: -1,
  PARENS_EXPR: -1,
  COLON: 100,
  POUND: 95,
  PREFIX_OP: 90,
  MULT_OP: 85,
  ADD_OP: 80,
  LIST_OP: 75,
  COMP_OP: 70,
  ANDALSO: 65,
  ORELSE: 60,
  MATCH_SEND: 55,
  CATCH: 50,
  BAR: 45,
  DOUBLE_BAR: 35,
  ARROW: 30,
};

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  conflicts: ($) => [
    // Handles the case "_identifier  •  '('  …":
    [$._named_stab_clause, $._literal, $._expression],
    // A literal needs to beat an expression so that calls may be recognized
    // in the case of "_parenthesized_expression  •  '('  …".
    [$._literal, $._expression],
  ],

  rules: {
    source: ($) => repeat(choice($._statement, $._expression)),

    _statement: ($) =>
      choice($.function, seq(sep($._expression, ","), $._terminator)),

    _terminator: ($) => choice(".", "\n"),

    _expression: ($) =>
      choice(
        $._identifier,
        $._strings,
        $.character,
        $._number,
        $.bitstring,
        $.tuple,
        $.list,
        $.map,
        $.record,
        $.binary_operator,
        $.anonymous_function,
        $.function_capture,
        $.call,
        $.block,
        $._parenthesized_expression
      ),

    _parenthesized_expression: ($) =>
      prec(PREC.PARENS_EXPR, parens($._expression)),

    // macro identifiers go here once implemented:
    _identifier: ($) => choice($._atom, $.variable),

    variable: ($) => /[A-Z_][a-zA-Z0-9_@]*/,

    _atom: ($) => choice($.atom, $.quoted_atom),

    atom: ($) => token(/[a-z][a-zA-Z_@]*/),

    quoted_atom: ($) =>
      seq(
        field("quoted_start", "'"),
        $.quoted_content,
        field("quoted_end", "'")
      ),

    // One can write multiple strings with optional whitespace in between.
    // The strings are combined:
    //     erl> "hello""world".
    //     "helloworld"
    // Note that we don't combined these strings: each string gets its own
    // node. I believe this will behave more predictably for anyone using
    // tree-sitter for motion (within an editor for example).
    _strings: ($) => prec.right(repeat1($.string)),

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
            // escapes for special characters
            /[bdefnrstv\'\"\\]/,
            // hexadecimal
            /x[\da-fA-F]{2}/,
            /x{[\da-fA-F]+}/,
            // octal
            /[0-7]{1,3}/,
            // control sequences,
            /\^[a-fA-F]/
          )
        )
      ),

    quoted_content: ($) => /([^\\\"\']+|\\)/,

    bitstring: ($) => seq("<<", optional($._items), ">>"),
    tuple: ($) => seq("{", optional($._items), "}"),
    list: ($) => seq("[", optional($._items), "]"),
    map: ($) =>
      prec(
        PREC.POUND,
        seq(
          optional($.variable),
          "#{",
          optional(alias($._items, $.map_content)),
          "}"
        )
      ),
    record: ($) =>
      prec.right(
        PREC.POUND,
        seq(
          optional($.variable),
          "#",
          field("name", $._identifier),
          optional(
            choice(
              seq("{", optional(alias($._items, $.record_content)), "}"),
              field("field", seq(".", $._identifier))
            )
          )
        )
      ),

    // todo: unary operators for catch, not, bnot, '-'
    // and figure out what the erlang parser is doing with '#'

    binary_operator: ($) =>
      choice(
        binaryOp($, PREC.COLON, prec, ":", $._expression, $._literal),
        binaryOp($, PREC.MULT_OP, prec.left, choice(...MULT_OPS)),
        binaryOp($, PREC.ADD_OP, prec.left, choice(...ADD_OPS)),
        binaryOp($, PREC.LIST_OP, prec.right, choice(...LIST_OPS)),
        binaryOp($, PREC.COMP_OP, prec.left, choice(...COMP_OPS)),
        binaryOp($, PREC.ANDALSO, prec.left, "andalso"),
        binaryOp($, PREC.ORELSE, prec.left, "orelse"),
        binaryOp($, PREC.MATCH_SEND, prec.right, choice("=", "!")),
        binaryOp($, PREC.DOUBLE_BAR, prec.right, "||"),
        binaryOp($, PREC.BAR, prec.left, "|"),
        binaryOp($, PREC.ARROW, prec.left, choice("<-", "<=", "=>"))
      ),

    _literal: ($) =>
      choice($._number, $._identifier, $._parenthesized_expression),

    anonymous_function: ($) => seq("fun", sep($.stab_clause, ";"), "end"),

    function: ($) => seq(sep($._named_stab_clause, ";"), $._terminator),

    stab_clause: ($) => choice($._named_stab_clause, $._anonymous_stab_clause),

    _named_stab_clause: ($) =>
      prec.left(
        seq(
          field("name", $._identifier),
          $.arguments,
          optional(field("guard", seq("when", $._guard))),
          "->",
          $._body
        )
      ),

    _anonymous_stab_clause: ($) =>
      prec.left(
        seq(
          $.arguments,
          optional(field("guard", seq("when", $._guard))),
          "->",
          $._body
        )
      ),

    _guard: ($) => sep($._items, ";"),

    arguments: ($) => parens(optional($._items)),

    _body: ($) =>
      choice($._expression, alias(sep1($._expression, ","), $.body)),

    _items: ($) => sep($._expression, ","),

    call: ($) =>
      seq(choice($._qualified_function, $._unqualified_function), $.arguments),

    _qualified_function: ($) =>
      seq(field("module", $._literal), ":", field("function", $._literal)),

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

    block: ($) => seq("begin", optional($._items), "end"),

    // either an escape sequence or a printable ASCII character
    character: ($) => seq("$", choice($.escape_sequence, /[\x20-\x7f]/)),

    _number: ($) => choice($.integer, $.float),

    integer: ($) =>
      choice(
        // regular base-10 integers
        /[0-9][0-9_]*/,
        // base#value syntax
        // Note that this is slightly permissive, you can only use up to
        // base 36 in reality.
        /[1-3]?[0-9]#[0-9a-zA-Z_]+/
      ),

    float: ($) => /[0-9][0-9_]*\.[0-9_]+(e-?[0-9]+)?/,

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
