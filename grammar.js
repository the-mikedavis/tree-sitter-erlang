const WHITE_SPACE = /[\r\n\t\f\v ]+/;
const BINARY_OPS = ["=", "+", "-", "*", "/", "|", "=>", ":=", ":", "++", "--"];

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  conflicts: ($) => [
    // Maps and records may start with variables when
    // being updated, so they need to take higher precedence
    // than expressions.
    [$.map, $._expression],
    [$.record, $._expression],
  ],

  rules: {
    source: ($) => repeat($._expression),

    _expression: ($) =>
      optionalParens(choice(
        $.atom,
        $.quoted_atom,
        $.string,
        $.character,
        $.integer,
        $.float,
        $.variable,
        $.bitstring,
        $.tuple,
        $.list,
        $.map,
        $.record,
        $.binary_operator
      )),

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
      seq(
        optional($.variable),
        "#{",
        optional(alias($._items, $.map_content)),
        "}"
      ),
    record: ($) =>
      prec.right(
        seq(
          optional($.variable),
          "#",
          field("name", $._identifier),
          optional(seq("{", optional(alias($._items, $.record_content)), "}"))
        )
      ),

    binary_operator: ($) =>
      choice(binaryOperator($, prec.left, choice(...BINARY_OPS))),

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

function binaryOperator($, assoc, operator) {
  return assoc(
    seq(
      field("left", $._expression),
      field("operator", operator),
      field("right", $._expression)
    )
  );
}
