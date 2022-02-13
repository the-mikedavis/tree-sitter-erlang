# tree-sitter-erlang

[![CI](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml/badge.svg)](https://github.com/the-mikedavis/tree-sitter-erlang/actions/workflows/ci.yml)

An Erlang grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

See the [docs](./docs/README.md) for design and development information.

<img src="./docs/example.png" width="700"/>

<sup>_Above: an [excerpt](https://github.com/rabbitmq/khepri/blob/9fbf7ec827bbf38c81a5bc69a128eec4bde3cdf9/src/khepri_fun.erl#L1142-L1155) from [rabbitmq/khepri](https://github.com/rabbitmq/khepri) using this grammar in the [Helix](https://github.com/helix-editor/helix) editor._</sup>

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

It's pretty complete despite the above caveat. It has a 99.58% pass rate
against the .erl/.hrl files in the OTP codebase[^1]. Try it out on the online
[playground](https://the-mikedavis.github.io/tree-sitter-erlang/).

[^1]: The remaining files that exhibit errors are either not truly Erlang
      or use preprocessor directives with blatantly invalid syntax. This
      can be measured with
      `tree-sitter parse --quiet --stat path/to/otp/**.{erl,hrl}`.
