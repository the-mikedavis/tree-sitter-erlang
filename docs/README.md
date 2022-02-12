# Notes

This directory has some notes about the design and development of the
grammar.

## Design

This grammar diverges from prior works and the built-in Erlang parser.

[AbstractMachinesLab](https://github.com/AbstractMachinesLab) has a
[grammar](https://github.com/AbstractMachinesLab/tree-sitter-erlang)
which is stays true to the built-in Erlang parser. It's
not very complete in its current form (about a 8% pass rate[^1]
on the OTP codebase) but it does cover much of the syntax. Working on a
[fork](https://github.com/AbstractMachinesLab/tree-sitter-erlang/compare/AbstractMachinesLab:9d5fd0c...the-mikedavis:78a5aed)
I was able to boost it to 82% but the fixes convinced me that the existing
rules[^2] have some composability problems. Consider:

[^1]: The calculation is "number of files parsed with no error over number of files
      parsed with some error". Note that this metric is very pessimistic and it
      punishes the AbstractMachinesLab grammar for missing common features like
      macro definitions. It's currently the only metric available from
      tree-sitter-cli though.

[^2]: Rules primarily implemented in the Erlang parser (not trying to throw shade :)

```erl
#my_record{a = b}
%% (source_file [0, 0] - [1, 0]
%%   (record [0, 0] - [0, 17]
%%     (atom [0, 1] - [0, 10])
%%     (record_field [0, 11] - [0, 16]
%%       (atom [0, 11] - [0, 12])
%%       (atom [0, 15] - [0, 16]))))
```

And the rule in the tree-sitter version of the grammar:

```js
  record_field: ($) => seq($.term, EQUAL, $.expression),
```

Rules like these that limit which expressions are valid for binary operators
like `=` make sense for the parser within a compiler, which must be rigorous
about what syntax is allowed in which constructs, but this rule is very
concrete (and similar rules exist for maps, bitstrings, guards, etc.) which
makes it hard to reuse later. The result is a grammar that emits nodes with
very concrete meanings, which can be useful, but is not very fault-tolerant
and is very explicit to write. As a rule of thumb, performing syntax validation
is discouraged in tree-sitter grammars.

This grammar attempts to be closer in design to
[tree-sitter-elixir](https://github.com/tree-sitter/tree-sitter-elixir):
expressions are built up from abstract reusable primitives like binary
operators and stab-clauses. This can make the highlight queries less
straight-forward, but is more fault-tolerant overall.

## Development

In order to modify and test the grammar, you'll need `npm` installed.
The tree-sitter CLI can be run through `npx tree-sitter`. There are
three main commands of interest:

- `tree-sitter generate` - generates the parser's C files from
  the grammar in `grammar.js`
- `tree-sitter test` - runs the unit tests under `test/corpus` and
  `test/highlight`
    - The `-u`/`--update` flag fixes any failing tests and performs formatting
      (albeit only when a test case is failing). In general you should not
      explicitly write out the expected S-expression in a test case, you
      should verify the structure of the tree in the playground (see below)
      and then use `-u`/`--update` to fix the test when you're satisfied with
      the result.
- `tree-sitter build-wasm` and `tree-sitter playground` - used to build the
  WASM binding and then launch the interactive playground in a browser. The
  playground is a powerful development tool as it allows you to click through
  the parse tree to see how nodes are grouped. See [an
  example](https://elixir-lang.org/tree-sitter-elixir/) from the Elixir
  grammar.
