#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  sym_atom = 2,
  anon_sym_SQUOTE = 3,
  anon_sym_DQUOTE = 4,
  sym_escape_sequence = 5,
  sym_quoted_content = 6,
  anon_sym_LT_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT_GT = 9,
  anon_sym_DOLLAR = 10,
  aux_sym_character_token1 = 11,
  aux_sym_integer_token1 = 12,
  aux_sym_integer_token2 = 13,
  sym_float = 14,
  aux_sym_comment_token1 = 15,
  aux_sym_comment_token2 = 16,
  sym_source = 17,
  sym__expression = 18,
  sym_quoted_atom = 19,
  sym_string = 20,
  sym_bitstring = 21,
  sym_character = 22,
  sym_integer = 23,
  sym_comment = 24,
  aux_sym_source_repeat1 = 25,
  aux_sym_string_repeat1 = 26,
  aux_sym_bitstring_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_atom] = "atom",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_quoted_content] = "quoted_content",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [sym_float] = "float",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_quoted_atom] = "quoted_atom",
  [sym_string] = "string",
  [sym_bitstring] = "bitstring",
  [sym_character] = "character",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_bitstring_repeat1] = "bitstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_atom] = sym_atom,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_quoted_content] = sym_quoted_content,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [sym_float] = sym_float,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_string] = sym_string,
  [sym_bitstring] = sym_bitstring,
  [sym_character] = sym_character,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_bitstring_repeat1] = aux_sym_bitstring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
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
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym_bitstring] = {
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
  [aux_sym_bitstring_repeat1] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(7);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '^') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 12:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_atom);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_quoted_content);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '^') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '^') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(28),
    [sym__expression] = STATE(15),
    [sym_quoted_atom] = STATE(11),
    [sym_string] = STATE(11),
    [sym_bitstring] = STATE(11),
    [sym_character] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(15),
    [sym_quoted_atom] = STATE(11),
    [sym_string] = STATE(11),
    [sym_bitstring] = STATE(11),
    [sym_character] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_atom] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(32),
    [anon_sym_DOLLAR] = ACTIONS(35),
    [aux_sym_integer_token1] = ACTIONS(38),
    [aux_sym_integer_token2] = ACTIONS(41),
    [sym_float] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(15),
    [sym_quoted_atom] = STATE(11),
    [sym_string] = STATE(11),
    [sym_bitstring] = STATE(11),
    [sym_character] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(20),
    [sym_quoted_atom] = STATE(11),
    [sym_string] = STATE(11),
    [sym_bitstring] = STATE(11),
    [sym_character] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(46),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(23),
    [sym_quoted_atom] = STATE(11),
    [sym_string] = STATE(11),
    [sym_bitstring] = STATE(11),
    [sym_character] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [aux_sym_integer_token1] = ACTIONS(17),
    [aux_sym_integer_token2] = ACTIONS(19),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(48), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [23] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(52), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [46] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(56), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [69] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(60), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [92] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(64), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [115] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(68), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [138] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(72), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [161] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(78), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [184] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(82), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [207] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [228] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(90), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [245] = 5,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(90), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [262] = 4,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(18), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [277] = 3,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [289] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_GT_GT,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_bitstring_repeat1,
  [305] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_GT_GT,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_bitstring_repeat1,
  [321] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_GT_GT,
    STATE(22), 2,
      sym_comment,
      aux_sym_bitstring_repeat1,
  [335] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [346] = 3,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(114), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [357] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
  [367] = 3,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(118), 1,
      aux_sym_comment_token2,
    STATE(26), 1,
      sym_comment,
  [377] = 3,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      sym_quoted_content,
    STATE(27), 1,
      sym_comment,
  [387] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
  [397] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 335,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 377,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(19),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitstring_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitstring_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
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
