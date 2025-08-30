package tree_sitter_erlang_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_erlang "git+github.com/the-mikedavis/tree-sitter-erlang.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_erlang.Language())
	if language == nil {
		t.Errorf("Error loading Erlang grammar")
	}
}
