# tree-sitter-erlang

[![CI](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml/badge.svg)](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml)

An Erlang grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

See the [docs](./docs/README.md) for design and development information.

## Status

It's somewhat complete so far. I'm currently hunting down bugs by parsing
against well-known Erlang sources like the OTP codebase.

Currently it has a 96% pass rate against the .erl/.hrl files in OTP.
