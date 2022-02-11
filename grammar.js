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

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    source: ($) => repeat($._expression),

    _expression: ($) =>
      optionalParens(
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
          $.anonymous_function
        )
      ),

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
        1,
        seq(
          optional($.variable),
          "#{",
          optional(alias($._items, $.map_content)),
          "}"
        )
      ),
    record: ($) =>
      prec.right(
        1,
        seq(
          optional($.variable),
          "#",
          field("name", $._identifier),
          optional(seq("{", optional(alias($._items, $.record_content)), "}"))
        )
      ),

    binary_operator: ($) =>
      choice(
        binaryOperator($, 1, prec.left, choice(...LEFT_ASSOC_BINARY_OPS)),
        binaryOperator($, 0, prec.right, choice(...RIGHT_ASSOC_BINARY_OPS))
      ),

    anonymous_function: ($) => seq("fun", sep1($._function_clause, ";"), "end"),

    _function_clause: ($) =>
      seq(
        optional(field("name", $._identifier)),
        // may want to cut this out to a $._arguments rule
        field("arguments", parens(sep1($._expression, ","))),
        optional(field("guard", seq("when", $._guard))),
        "->",
        field("body", $._expression)
      ),

    _guard: ($) => sep1(sep1($._expression, ","), ";"),

    _items: ($) => sep1($._expression, ","),

    character: ($) => seq("$", choice($.escape_sequence, /[\x20-\x7e]/)),

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
      seq(prec(-1, token(repeat1("%"))), field("comment_content", /.*/)),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function parens(rule) {
  return seq("(", rule, ")");
}

function optionalParens(rule) {
  return choice(rule, parens(rule));
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
