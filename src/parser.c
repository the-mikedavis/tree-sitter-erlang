#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym_atom = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_DQUOTE = 3,
  sym_escape_sequence = 4,
  sym_quoted_content = 5,
  anon_sym_DOLLAR = 6,
  aux_sym_character_token1 = 7,
  aux_sym_comment_token1 = 8,
  aux_sym_comment_token2 = 9,
  sym_source = 10,
  sym__expression = 11,
  sym_quoted_atom = 12,
  sym_string = 13,
  sym_character = 14,
  sym_comment = 15,
  aux_sym_source_repeat1 = 16,
  aux_sym_string_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_atom] = "atom",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_quoted_content] = "quoted_content",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_quoted_atom] = "quoted_atom",
  [sym_string] = "string",
  [sym_character] = "character",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_atom] = sym_atom,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_quoted_content] = sym_quoted_content,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_atom);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_quoted_content);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym__expression] = STATE(5),
    [sym_quoted_atom] = STATE(4),
    [sym_string] = STATE(4),
    [sym_character] = STATE(4),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(5),
    [sym_quoted_atom] = STATE(4),
    [sym_string] = STATE(4),
    [sym_character] = STATE(4),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(5),
    [sym_quoted_atom] = STATE(4),
    [sym_string] = STATE(4),
    [sym_character] = STATE(4),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_atom] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [14] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [28] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [42] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [56] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [70] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
  [84] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_string_repeat1,
    ACTIONS(45), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [101] = 5,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(45), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [118] = 4,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(12), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [133] = 3,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [145] = 3,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(58), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [156] = 3,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      aux_sym_comment_token2,
    STATE(15), 1,
      sym_comment,
  [166] = 3,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      sym_quoted_content,
    STATE(16), 1,
      sym_comment,
  [176] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
  [186] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_comment,
  [196] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 145,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
