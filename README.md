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

This grammar attempts to parse within `define` attributes with best-effort,
but some macro definitions may produce `(ERROR)` nodes.

## Status

It's somewhat complete so far. I'm currently hunting down bugs by parsing
against well-known Erlang sources like the OTP codebase.

Currently it has a 97% pass rate against the .erl/.hrl files in OTP.
