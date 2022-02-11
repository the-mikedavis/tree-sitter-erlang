#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_atom = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_DQUOTE = 3,
  sym_escape_sequence = 4,
  sym_quoted_content = 5,
  anon_sym_DOLLAR = 6,
  aux_sym_character_token1 = 7,
  aux_sym_integer_token1 = 8,
  aux_sym_integer_token2 = 9,
  aux_sym_comment_token1 = 10,
  aux_sym_comment_token2 = 11,
  sym_source = 12,
  sym__expression = 13,
  sym_quoted_atom = 14,
  sym_string = 15,
  sym_character = 16,
  sym_integer = 17,
  sym_comment = 18,
  aux_sym_source_repeat1 = 19,
  aux_sym_string_repeat1 = 20,
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
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_quoted_atom] = "quoted_atom",
  [sym_string] = "string",
  [sym_character] = "character",
  [sym_integer] = "integer",
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
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [sym_integer] = sym_integer,
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
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
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
  [sym_integer] = {
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
  field_comment_content = 1,
  field_quoted_end = 2,
  field_quoted_start = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment_content] = "comment_content",
  [field_quoted_end] = "quoted_end",
  [field_quoted_start] = "quoted_start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment_content, 1},
  [1] =
    {field_quoted_end, 1},
    {field_quoted_start, 0},
  [3] =
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
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(4);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_atom);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_quoted_content);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {(TSStateId)(-1)},
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
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(18),
    [sym__expression] = STATE(10),
    [sym_quoted_atom] = STATE(6),
    [sym_string] = STATE(6),
    [sym_character] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(10),
    [sym_quoted_atom] = STATE(6),
    [sym_string] = STATE(6),
    [sym_character] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_atom] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(30),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(36),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(10),
    [sym_quoted_atom] = STATE(6),
    [sym_string] = STATE(6),
    [sym_character] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [aux_sym_integer_token1] = ACTIONS(15),
    [aux_sym_integer_token2] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      aux_sym_integer_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [18] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      aux_sym_integer_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [36] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [54] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [72] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [90] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [108] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
  [126] = 5,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(71), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [143] = 5,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_string_repeat1,
    ACTIONS(71), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [160] = 4,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(13), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [175] = 3,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(82), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [187] = 3,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(84), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [198] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_comment,
  [208] = 3,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      aux_sym_comment_token2,
    STATE(17), 1,
      sym_comment,
  [218] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
  [228] = 3,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_quoted_content,
    STATE(19), 1,
      sym_comment,
  [238] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
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
