module.exports = grammar({
  name: "erlang",

  // extras: ($) => [],

  rules: {
    source: ($) => repeat($.expression),

    expression: ($) => choice($.string),

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
            // Escapes for special characters
            /[bdefnrstv\'\"\\]/,
            // hexadecimal
            /x[\da-fA-F]+/,
            // octal
            /[0-7]{1,3}/,
            // control sequences,
            /\^[a-fA-F]/
          )
        )
      ),

    // any non-backslash and non-double-quote start
    quoted_content: ($) => /([^\\\"]+|\\)/,
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
