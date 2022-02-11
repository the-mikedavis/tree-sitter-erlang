# tree-sitter-erlang

An Erlang grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Prior work

AbstractMachinesLab has an [erlang
grammar](https://github.com/AbstractMachinesLab/tree-sitter-erlang)
which covers much of the syntax. Working on a
[fork](https://github.com/AbstractMachinesLab/tree-sitter-erlang/compare/AbstractMachinesLab:9d5fd0c...the-mikedavis:78a5aed)
of it, I was able to raise the parsing pass rate against
[erlang/otp](https://github.com/erlang/otp) to ~80%, but the fixes convinced
me that there are composability problems with the existing rules: many
of the rules are prefer concreteness over composability. (For example,
module_export and module_name). I also think it's quite pessimistic: it
validates distinctions like patterns vs. expressions which is technically
correct but performing validation in tree-sitter is generally discouraged.

This grammar attempts to be closer in design to
[tree-sitter-elixir](https://github.com/tree-sitter/tree-sitter-elixir).

## Status

Just starting out - nothing to see here yet.
