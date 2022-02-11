#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 2
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym_variable = 1,
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
  anon_sym_POUND_LBRACE = 13,
  anon_sym_POUND = 14,
  anon_sym_COMMA = 15,
  anon_sym_DOLLAR = 16,
  aux_sym_character_token1 = 17,
  aux_sym_integer_token1 = 18,
  aux_sym_integer_token2 = 19,
  sym_float = 20,
  aux_sym_comment_token1 = 21,
  aux_sym_comment_token2 = 22,
  sym_source = 23,
  sym__expression = 24,
  sym__identifier = 25,
  sym__atom = 26,
  sym_quoted_atom = 27,
  sym_string = 28,
  sym_bitstring = 29,
  sym_tuple = 30,
  sym_list = 31,
  sym_map = 32,
  sym_record = 33,
  sym__items = 34,
  sym_character = 35,
  sym_integer = 36,
  sym_comment = 37,
  aux_sym_source_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
  aux_sym__items_repeat1 = 40,
  alias_sym_map_content = 41,
  alias_sym_record_content = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_variable] = "variable",
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
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_POUND] = "#",
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
  [sym__identifier] = "_identifier",
  [sym__atom] = "_atom",
  [sym_quoted_atom] = "quoted_atom",
  [sym_string] = "string",
  [sym_bitstring] = "bitstring",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_record] = "record",
  [sym__items] = "_items",
  [sym_character] = "character",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__items_repeat1] = "_items_repeat1",
  [alias_sym_map_content] = "map_content",
  [alias_sym_record_content] = "record_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_variable] = sym_variable,
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
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [sym__identifier] = sym__identifier,
  [sym__atom] = sym__atom,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_string] = sym_string,
  [sym_bitstring] = sym_bitstring,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_record] = sym_record,
  [sym__items] = sym__items,
  [sym_character] = sym_character,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__items_repeat1] = aux_sym__items_repeat1,
  [alias_sym_map_content] = alias_sym_map_content,
  [alias_sym_record_content] = alias_sym_record_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
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
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
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
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
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
  [alias_sym_map_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_record_content] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_comment_content = 1,
  field_name = 2,
  field_quoted_end = 3,
  field_quoted_start = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment_content] = "comment_content",
  [field_name] = "name",
  [field_quoted_end] = "quoted_end",
  [field_quoted_start] = "quoted_start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [6] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment_content, 1},
  [1] =
    {field_quoted_end, 1},
    {field_quoted_start, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_quoted_end, 2},
    {field_quoted_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [1] = alias_sym_map_content,
  },
  [6] = {
    [3] = alias_sym_record_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__items, 3,
    sym__items,
    alias_sym_map_content,
    alias_sym_record_content,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(40);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_variable);
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
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(50);
      END_STATE();
    case 43:
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
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
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
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(46),
    [sym__expression] = STATE(29),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(29),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(29),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_variable] = ACTIONS(33),
    [sym_atom] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(54),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(60),
    [aux_sym_integer_token2] = ACTIONS(63),
    [sym_float] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(31),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym__items] = STATE(47),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(4),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(31),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym__items] = STATE(44),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(5),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(31),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym__items] = STATE(43),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(6),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(31),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym__items] = STATE(40),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(7),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(31),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym__items] = STATE(41),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(8),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(35),
    [sym_quoted_atom] = STATE(13),
    [sym_string] = STATE(13),
    [sym_bitstring] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym_map] = STATE(13),
    [sym_record] = STATE(13),
    [sym_character] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_comment] = STATE(9),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_integer_token2] = ACTIONS(27),
    [sym_float] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(76), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [29] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(80), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [58] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(84), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [87] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(88), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [116] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(92), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [145] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(96), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [174] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(100), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [203] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(104), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [232] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(112), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [290] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [321] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [350] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(126), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [379] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [408] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(134), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [437] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(138), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [466] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(142), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [495] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(146), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [524] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(150), 16,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [553] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(154), 12,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_LBRACE,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [578] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym_variable,
    ACTIONS(160), 1,
      sym_atom,
    STATE(20), 1,
      sym__identifier,
    STATE(22), 1,
      sym_quoted_atom,
    STATE(28), 1,
      sym__atom,
    STATE(30), 1,
      sym_comment,
  [603] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym__items_repeat1,
    ACTIONS(162), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [621] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(32), 2,
      sym_comment,
      aux_sym__items_repeat1,
    ACTIONS(166), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [637] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__items_repeat1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [655] = 5,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_string_repeat1,
    ACTIONS(175), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [672] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [685] = 4,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(36), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [700] = 5,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [717] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [729] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(188), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [740] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      sym_comment,
  [750] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
  [760] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(194), 1,
      aux_sym_comment_token2,
    STATE(42), 1,
      sym_comment,
  [770] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
  [780] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      anon_sym_GT_GT,
    STATE(44), 1,
      sym_comment,
  [790] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_comment,
  [800] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
  [810] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
  [820] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      sym_quoted_content,
    STATE(48), 1,
      sym_comment,
  [830] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 29,
  [SMALL_STATE(12)] = 58,
  [SMALL_STATE(13)] = 87,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 145,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 261,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 379,
  [SMALL_STATE(24)] = 408,
  [SMALL_STATE(25)] = 437,
  [SMALL_STATE(26)] = 466,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 524,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 578,
  [SMALL_STATE(31)] = 603,
  [SMALL_STATE(32)] = 621,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 655,
  [SMALL_STATE(35)] = 672,
  [SMALL_STATE(36)] = 685,
  [SMALL_STATE(37)] = 700,
  [SMALL_STATE(38)] = 717,
  [SMALL_STATE(39)] = 729,
  [SMALL_STATE(40)] = 740,
  [SMALL_STATE(41)] = 750,
  [SMALL_STATE(42)] = 760,
  [SMALL_STATE(43)] = 770,
  [SMALL_STATE(44)] = 780,
  [SMALL_STATE(45)] = 790,
  [SMALL_STATE(46)] = 800,
  [SMALL_STATE(47)] = 810,
  [SMALL_STATE(48)] = 820,
  [SMALL_STATE(49)] = 830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2), SHIFT_REPEAT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
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
