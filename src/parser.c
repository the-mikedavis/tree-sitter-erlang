#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  sym_atom = 2,
  anon_sym_SQUOTE = 3,
  anon_sym_DQUOTE = 4,
  sym_escape_sequence = 5,
  sym_quoted_content = 6,
  anon_sym_LT_LT = 7,
  anon_sym_GT_GT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_DOLLAR = 14,
  aux_sym_character_token1 = 15,
  aux_sym_integer_token1 = 16,
  aux_sym_integer_token2 = 17,
  sym_float = 18,
  aux_sym_comment_token1 = 19,
  aux_sym_comment_token2 = 20,
  sym_source = 21,
  sym__expression = 22,
  sym_quoted_atom = 23,
  sym_string = 24,
  sym_bitstring = 25,
  sym_tuple = 26,
  sym_list = 27,
  sym__items = 28,
  sym_character = 29,
  sym_integer = 30,
  sym_comment = 31,
  aux_sym_source_repeat1 = 32,
  aux_sym_string_repeat1 = 33,
  aux_sym__items_repeat1 = 34,
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
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
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
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__items] = "_items",
  [sym_character] = "character",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__items_repeat1] = "_items_repeat1",
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
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym__items] = sym__items,
  [sym_character] = sym_character,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__items_repeat1] = aux_sym__items_repeat1,
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__items] = {
    .visible = false,
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
  [aux_sym__items_repeat1] = {
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(38);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(31);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
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
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(41);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(48);
      END_STATE();
    case 41:
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
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {(TSStateId)(-1)},
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
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(35),
    [sym__expression] = STATE(20),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(23),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym__items] = STATE(32),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(23),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym__items] = STATE(31),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(3),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(23),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym__items] = STATE(30),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(20),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(5),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(20),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_atom] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [aux_sym_integer_token1] = ACTIONS(56),
    [aux_sym_integer_token2] = ACTIONS(59),
    [sym_float] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(27),
    [sym_quoted_atom] = STATE(12),
    [sym_string] = STATE(12),
    [sym_bitstring] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym_character] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [aux_sym_integer_token1] = ACTIONS(21),
    [aux_sym_integer_token2] = ACTIONS(23),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_identifier] = ACTIONS(62),
    [sym_atom] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_LT_LT] = ACTIONS(62),
    [anon_sym_GT_GT] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [aux_sym_integer_token1] = ACTIONS(64),
    [aux_sym_integer_token2] = ACTIONS(62),
    [sym_float] = ACTIONS(62),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_identifier] = ACTIONS(66),
    [sym_atom] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_LT_LT] = ACTIONS(66),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [aux_sym_integer_token1] = ACTIONS(68),
    [aux_sym_integer_token2] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_identifier] = ACTIONS(70),
    [sym_atom] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_integer_token1] = ACTIONS(72),
    [aux_sym_integer_token2] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
    [sym_atom] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [aux_sym_integer_token1] = ACTIONS(76),
    [aux_sym_integer_token2] = ACTIONS(74),
    [sym_float] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_identifier] = ACTIONS(78),
    [sym_atom] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [aux_sym_integer_token1] = ACTIONS(80),
    [aux_sym_integer_token2] = ACTIONS(78),
    [sym_float] = ACTIONS(78),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_identifier] = ACTIONS(82),
    [sym_atom] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LT_LT] = ACTIONS(82),
    [anon_sym_GT_GT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [aux_sym_integer_token1] = ACTIONS(84),
    [aux_sym_integer_token2] = ACTIONS(82),
    [sym_float] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_identifier] = ACTIONS(86),
    [sym_atom] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [aux_sym_integer_token1] = ACTIONS(88),
    [aux_sym_integer_token2] = ACTIONS(86),
    [sym_float] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [sym_atom] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LT_LT] = ACTIONS(90),
    [anon_sym_GT_GT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(90),
    [aux_sym_integer_token1] = ACTIONS(92),
    [aux_sym_integer_token2] = ACTIONS(90),
    [sym_float] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_identifier] = ACTIONS(94),
    [sym_atom] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_LT_LT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [aux_sym_integer_token1] = ACTIONS(96),
    [aux_sym_integer_token2] = ACTIONS(94),
    [sym_float] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [sym_atom] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [aux_sym_integer_token1] = ACTIONS(100),
    [aux_sym_integer_token2] = ACTIONS(98),
    [sym_float] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_identifier] = ACTIONS(102),
    [sym_atom] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_integer_token1] = ACTIONS(104),
    [aux_sym_integer_token2] = ACTIONS(102),
    [sym_float] = ACTIONS(102),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(106),
    [sym_atom] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_integer_token1] = ACTIONS(108),
    [aux_sym_integer_token2] = ACTIONS(106),
    [sym_float] = ACTIONS(106),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      aux_sym_integer_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      sym_identifier,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [23] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__items_repeat1,
    ACTIONS(114), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [41] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__items_repeat1,
    ACTIONS(118), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [57] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym__items_repeat1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [75] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(127), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [92] = 4,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(25), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [107] = 5,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [124] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [137] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [149] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(140), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [160] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
  [170] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_comment,
  [180] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_GT_GT,
    STATE(32), 1,
      sym_comment,
  [190] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
  [200] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_comment,
  [210] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_comment,
  [220] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(154), 1,
      sym_quoted_content,
    STATE(36), 1,
      sym_comment,
  [230] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 23,
  [SMALL_STATE(22)] = 41,
  [SMALL_STATE(23)] = 57,
  [SMALL_STATE(24)] = 75,
  [SMALL_STATE(25)] = 92,
  [SMALL_STATE(26)] = 107,
  [SMALL_STATE(27)] = 124,
  [SMALL_STATE(28)] = 137,
  [SMALL_STATE(29)] = 149,
  [SMALL_STATE(30)] = 160,
  [SMALL_STATE(31)] = 170,
  [SMALL_STATE(32)] = 180,
  [SMALL_STATE(33)] = 190,
  [SMALL_STATE(34)] = 200,
  [SMALL_STATE(35)] = 210,
  [SMALL_STATE(36)] = 220,
  [SMALL_STATE(37)] = 230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2), SHIFT_REPEAT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
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
