const WHITE_SPACE = /[\r\n\t\f\v ]+/;

module.exports = grammar({
  name: "erlang",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    source: ($) => repeat($._expression),

    _expression: ($) =>
      choice(
        $.atom,
        $.quoted_atom,
        $.string,
        $.character,
        $.integer,
        $.float,
        $.identifier,
        $.bitstring,
        $.tuple,
        $.list
      ),

    identifier: ($) => /[A-Z_][a-zA-Z0-9_@]*/,

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
