# tree-sitter-erlang

[![CI](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml/badge.svg)](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml)

An Erlang grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

See the [docs](./docs/README.md) for design and development information.

## Caveat

From the
[docs](https://github.com/erlang/otp/blob/9e381125bbd93dfa2f17d4954b54aead749bf012/system/doc/reference_manual/macros.xml#L127-L128)
on macros:

> It is good programming practice, but not mandatory, to ensure
> that a macro definition is a valid Erlang syntactic form.

This grammar attempts to parse within `define` attributes with best-effort
but some macro definitions and their resulting macros may produce `(ERROR)`
nodes.

## Status

It's pretty complete, despite the above caveat. As for stats:

- it has a 99.58% pass rate against the .erl/.hrl files in the OTP codebase[^1].
- it parses an average 2000 line file in ~15ms on good hardware[^2].

[^1]: The remaining files that exhibit errors are either not truly Erlang
      or use preprocessor directives with blatantly invalid syntax. This
      can be measured with
      `tree-sitter parse --quiet --stat path/to/otp/**.{erl,hrl}`.
[^2]: Tree-sitter grammars can be used to parse syntax _incrementally_
      (as you type) which can take less than a millisecond.
