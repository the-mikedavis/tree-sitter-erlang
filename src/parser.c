#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_DQUOTE = 1,
  sym_escape_sequence = 2,
  sym_quoted_content = 3,
  sym_source = 4,
  sym_expression = 5,
  sym_string = 6,
  aux_sym_source_repeat1 = 7,
  aux_sym_string_repeat1 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_quoted_content] = "quoted_content",
  [sym_source] = "source",
  [sym_expression] = "expression",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_quoted_content] = sym_quoted_content,
  [sym_source] = sym_source,
  [sym_expression] = sym_expression,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_quoted_end = 1,
  field_quoted_start = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_quoted_end] = "quoted_end",
  [field_quoted_start] = "quoted_start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_quoted_end, 1},
    {field_quoted_start, 0},
  [2] =
    {field_quoted_end, 2},
    {field_quoted_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_quoted_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(10),
    [sym_expression] = STATE(2),
    [sym_string] = STATE(7),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
  },
  [2] = {
    [sym_expression] = STATE(3),
    [sym_string] = STATE(7),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(5),
  },
  [3] = {
    [sym_expression] = STATE(3),
    [sym_string] = STATE(7),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(14), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_string_repeat1,
    ACTIONS(16), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [11] = 3,
    ACTIONS(18), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_string_repeat1,
    ACTIONS(20), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [22] = 3,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_string_repeat1,
    ACTIONS(24), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [33] = 1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [38] = 1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [43] = 1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [48] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 48,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_erlang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
