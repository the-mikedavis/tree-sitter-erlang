const WHITE_SPACE = /[\r\n\t\f\v ]+/;
const LEFT_ASSOC_BINARY_OPS = [
  "+",
  "-",
  "*",
  "/",
  "|",
  "=>",
  ":=",
  "==",
  ">=",
  "<=",
  ">",
  "<",
  "=:=",
  "=/=",
  ":",
  "++",
  "--",
  ".",
  "andalso",
  "orelse",
  "div",
  "rem",
  "band",
  "and",
  "bor",
  "bxor",
  "bsl",
  "bsr",
  "or",
  "xor",
];
const RIGHT_ASSOC_BINARY_OPS = ["!", "=", "++", "--"];
const UNARY_OPS = ["+", "-", "not", "bnot"];
const PREC = {
  COMMENT: -1,
  RIGHT_BINARY_OP: 0,
  RECORD: 1,
  MAP: 1,
  LEFT_BINARY_OP: 1,
  FUNCTION_CLAUSE: 1,
  CALL: 2,
};

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    source: ($) => repeat($._expression),

    // _statement: ($) =>
    //   seq(sep1($._expression, ","), "."),

    _expression: ($) =>
      choice(
        $._identifier,
        $._strings,
        $.character,
        $.integer,
        $.float,
        $.bitstring,
        $.tuple,
        $.list,
        $.map,
        $.record,
        $.binary_operator,
        $.anonymous_function,
        $.function_capture,
        $.call,
        $._parenthesized_expression
      ),

    _parenthesized_expression: ($) => parens($._expression),

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
        PREC.MAP,
        seq(
          optional($.variable),
          "#{",
          optional(alias($._items, $.map_content)),
          "}"
        )
      ),
    record: ($) =>
      prec.right(
        PREC.RECORD,
        seq(
          optional($.variable),
          "#",
          field("name", $._identifier),
          optional(seq("{", optional(alias($._items, $.record_content)), "}"))
        )
      ),

    binary_operator: ($) =>
      choice(
        binaryOperator(
          $,
          PREC.LEFT_BINARY_OP,
          prec.left,
          choice(...LEFT_ASSOC_BINARY_OPS)
        ),
        binaryOperator(
          $,
          PREC.RIGHT_BINARY_OP,
          prec.right,
          choice(...RIGHT_ASSOC_BINARY_OPS)
        )
      ),

    anonymous_function: ($) => seq("fun", sep1($._function_clause, ";"), "end"),

    _function_clause: ($) =>
      prec(
        PREC.FUNCTION_CLAUSE,
        seq(
          optional(field("name", $._identifier)),
          field("arguments", $._arguments),
          optional(field("guard", seq("when", $._guard))),
          "->",
          field("body", $._expression)
        )
      ),

    _arguments: ($) => parens(sep1($._expression, ",")),

    _guard: ($) => sep1(sep1($._expression, ","), ";"),

    call: ($) =>
      seq(
        choice($._qualified_function, $._unqualified_function),
        field("arguments", $._arguments)
      ),

    _qualified_function: ($) =>
      seq(
        field("module", $._expression),
        ":",
        field("function", $._expression)
      ),

    _unqualified_function: ($) =>
      prec(PREC.CALL, field("function", $._expression)),

    function_capture: ($) =>
      prec.left(
        seq(
          "fun",
          choice($._qualified_function, $._unqualified_function),
          "/",
          field("arity", $._expression)
        )
      ),

    _items: ($) => sep1($._expression, ","),

    character: ($) => seq("$", choice($.escape_sequence, /[\x20-\x7f]/)),

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

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function parens(rule) {
  return seq("(", rule, ")");
}

function binaryOperator($, precedence, assoc, operator) {
  return assoc(
    precedence,
    seq(
      field("left", $._expression),
      field("operator", operator),
      field("right", $._expression)
    )
  );
}
