#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 2
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_EQ = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_SLASH = 18,
  anon_sym_PIPE = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_COLON_EQ = 21,
  anon_sym_COMMA = 22,
  anon_sym_DOLLAR = 23,
  aux_sym_character_token1 = 24,
  aux_sym_integer_token1 = 25,
  aux_sym_integer_token2 = 26,
  sym_float = 27,
  aux_sym_comment_token1 = 28,
  aux_sym_comment_token2 = 29,
  sym_source = 30,
  sym__expression = 31,
  sym__identifier = 32,
  sym__atom = 33,
  sym_quoted_atom = 34,
  sym_string = 35,
  sym_bitstring = 36,
  sym_tuple = 37,
  sym_list = 38,
  sym_map = 39,
  sym_record = 40,
  sym_binary_operator = 41,
  sym__items = 42,
  sym_character = 43,
  sym_integer = 44,
  sym_comment = 45,
  aux_sym_source_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
  aux_sym__items_repeat1 = 48,
  alias_sym_map_content = 49,
  alias_sym_record_content = 50,
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
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_EQ] = ":=",
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
  [sym_binary_operator] = "binary_operator",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
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
  [sym_binary_operator] = sym_binary_operator,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
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
  [sym_binary_operator] = {
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
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_quoted_end = 5,
  field_quoted_start = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment_content] = "comment_content",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_quoted_end] = "quoted_end",
  [field_quoted_start] = "quoted_start",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
  [9] = {.index = 3, .length = 1},
  [10] = {.index = 4, .length = 1},
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
    {field_name, 2},
  [5] =
    {field_quoted_end, 2},
    {field_quoted_start, 0},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = alias_sym_map_content,
  },
  [8] = {
    [2] = alias_sym_map_content,
  },
  [9] = {
    [3] = alias_sym_record_content,
  },
  [10] = {
    [4] = alias_sym_record_content,
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
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 13:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_atom);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_quoted_content);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(51);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '%') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {(TSStateId)(-1)},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(61),
    [sym__expression] = STATE(39),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(63),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(2),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(60),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(3),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(58),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(4),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(39),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [sym_atom] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_POUND_LBRACE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [aux_sym_integer_token1] = ACTIONS(71),
    [aux_sym_integer_token2] = ACTIONS(74),
    [sym_float] = ACTIONS(44),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(39),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(6),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(56),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(7),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(57),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(8),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(59),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(9),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym__expression] = STATE(42),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym__items] = STATE(62),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(10),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_variable] = ACTIONS(87),
    [sym_atom] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_POUND_LBRACE] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_COLON_EQ] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [aux_sym_integer_token1] = ACTIONS(89),
    [aux_sym_integer_token2] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_variable] = ACTIONS(91),
    [sym_atom] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_GT_GT] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_COLON_EQ] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [aux_sym_integer_token1] = ACTIONS(93),
    [aux_sym_integer_token2] = ACTIONS(91),
    [sym_float] = ACTIONS(91),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_variable] = ACTIONS(95),
    [sym_atom] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_POUND_LBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_COLON_EQ] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(95),
    [aux_sym_integer_token1] = ACTIONS(97),
    [aux_sym_integer_token2] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_variable] = ACTIONS(99),
    [sym_atom] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_POUND_LBRACE] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [aux_sym_integer_token1] = ACTIONS(101),
    [aux_sym_integer_token2] = ACTIONS(99),
    [sym_float] = ACTIONS(99),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_variable] = ACTIONS(103),
    [sym_atom] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_POUND_LBRACE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_COLON_EQ] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [aux_sym_integer_token1] = ACTIONS(105),
    [aux_sym_integer_token2] = ACTIONS(103),
    [sym_float] = ACTIONS(103),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_variable] = ACTIONS(107),
    [sym_atom] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_POUND_LBRACE] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_COLON_EQ] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [aux_sym_integer_token1] = ACTIONS(109),
    [aux_sym_integer_token2] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_variable] = ACTIONS(111),
    [sym_atom] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_POUND_LBRACE] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_EQ_GT] = ACTIONS(111),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [aux_sym_integer_token1] = ACTIONS(113),
    [aux_sym_integer_token2] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_variable] = ACTIONS(115),
    [sym_atom] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_POUND_LBRACE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_EQ_GT] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [aux_sym_integer_token1] = ACTIONS(117),
    [aux_sym_integer_token2] = ACTIONS(115),
    [sym_float] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_variable] = ACTIONS(119),
    [sym_atom] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_POUND_LBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_EQ_GT] = ACTIONS(119),
    [anon_sym_COLON_EQ] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(119),
    [aux_sym_integer_token1] = ACTIONS(121),
    [aux_sym_integer_token2] = ACTIONS(119),
    [sym_float] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_variable] = ACTIONS(123),
    [sym_atom] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_EQ_GT] = ACTIONS(123),
    [anon_sym_COLON_EQ] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_integer_token1] = ACTIONS(125),
    [aux_sym_integer_token2] = ACTIONS(123),
    [sym_float] = ACTIONS(123),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_variable] = ACTIONS(127),
    [sym_atom] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_COLON_EQ] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [aux_sym_integer_token1] = ACTIONS(129),
    [aux_sym_integer_token2] = ACTIONS(127),
    [sym_float] = ACTIONS(127),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_variable] = ACTIONS(131),
    [sym_atom] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_POUND_LBRACE] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_EQ_GT] = ACTIONS(131),
    [anon_sym_COLON_EQ] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_integer_token1] = ACTIONS(133),
    [aux_sym_integer_token2] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_variable] = ACTIONS(135),
    [sym_atom] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_POUND_LBRACE] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_EQ_GT] = ACTIONS(135),
    [anon_sym_COLON_EQ] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_integer_token1] = ACTIONS(137),
    [aux_sym_integer_token2] = ACTIONS(135),
    [sym_float] = ACTIONS(135),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_variable] = ACTIONS(139),
    [sym_atom] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_POUND_LBRACE] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_EQ_GT] = ACTIONS(139),
    [anon_sym_COLON_EQ] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_integer_token1] = ACTIONS(141),
    [aux_sym_integer_token2] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_variable] = ACTIONS(143),
    [sym_atom] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_EQ_GT] = ACTIONS(143),
    [anon_sym_COLON_EQ] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [aux_sym_integer_token1] = ACTIONS(145),
    [aux_sym_integer_token2] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [sym_atom] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_POUND_LBRACE] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_COLON_EQ] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [aux_sym_integer_token1] = ACTIONS(149),
    [aux_sym_integer_token2] = ACTIONS(147),
    [sym_float] = ACTIONS(147),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_variable] = ACTIONS(151),
    [sym_atom] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_POUND_LBRACE] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_COLON_EQ] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [aux_sym_integer_token1] = ACTIONS(153),
    [aux_sym_integer_token2] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_variable] = ACTIONS(155),
    [sym_atom] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_POUND_LBRACE] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_EQ_GT] = ACTIONS(155),
    [anon_sym_COLON_EQ] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_integer_token1] = ACTIONS(157),
    [aux_sym_integer_token2] = ACTIONS(155),
    [sym_float] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_variable] = ACTIONS(159),
    [sym_atom] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_POUND_LBRACE] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_EQ_GT] = ACTIONS(159),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_integer_token1] = ACTIONS(161),
    [aux_sym_integer_token2] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_variable] = ACTIONS(163),
    [sym_atom] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_POUND_LBRACE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_EQ_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_integer_token1] = ACTIONS(167),
    [aux_sym_integer_token2] = ACTIONS(163),
    [sym_float] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_variable] = ACTIONS(169),
    [sym_atom] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_GT_GT] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_EQ_GT] = ACTIONS(169),
    [anon_sym_COLON_EQ] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [aux_sym_integer_token1] = ACTIONS(171),
    [aux_sym_integer_token2] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_variable] = ACTIONS(173),
    [sym_atom] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_GT_GT] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_POUND_LBRACE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_integer_token1] = ACTIONS(175),
    [aux_sym_integer_token2] = ACTIONS(173),
    [sym_float] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_variable] = ACTIONS(177),
    [sym_atom] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(177),
    [anon_sym_GT_GT] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_POUND_LBRACE] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [aux_sym_integer_token1] = ACTIONS(179),
    [aux_sym_integer_token2] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_comment] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_variable] = ACTIONS(181),
    [sym_atom] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_POUND_LBRACE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_integer_token1] = ACTIONS(183),
    [aux_sym_integer_token2] = ACTIONS(181),
    [sym_float] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_variable] = ACTIONS(185),
    [sym_atom] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_LT_LT] = ACTIONS(185),
    [anon_sym_GT_GT] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_EQ_GT] = ACTIONS(185),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(189),
    [aux_sym_integer_token2] = ACTIONS(185),
    [sym_float] = ACTIONS(185),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym__expression] = STATE(19),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(36),
    [sym_variable] = ACTIONS(7),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym__expression] = STATE(19),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(37),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym__expression] = STATE(43),
    [sym_quoted_atom] = STATE(20),
    [sym_string] = STATE(20),
    [sym_bitstring] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_record] = STATE(20),
    [sym_binary_operator] = STATE(20),
    [sym_character] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_comment] = STATE(38),
    [sym_variable] = ACTIONS(31),
    [sym_atom] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT_LT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_POUND_LBRACE] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [aux_sym_integer_token1] = ACTIONS(27),
    [aux_sym_integer_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_POUND,
      aux_sym_integer_token1,
    ACTIONS(197), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ,
    ACTIONS(191), 12,
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
  [36] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(199), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(202), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_EQ,
      aux_sym_integer_token1,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      sym_variable,
      sym_atom,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ,
      anon_sym_DOLLAR,
      aux_sym_integer_token2,
      sym_float,
  [72] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(205), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(123), 10,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
  [100] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__items_repeat1,
    ACTIONS(209), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(213), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ,
  [129] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(213), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ,
  [153] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_variable,
    ACTIONS(221), 1,
      sym_atom,
    STATE(33), 1,
      sym__atom,
    STATE(34), 1,
      sym_quoted_atom,
    STATE(35), 1,
      sym__identifier,
    STATE(44), 1,
      sym_comment,
  [178] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_variable,
    ACTIONS(221), 1,
      sym_atom,
    STATE(30), 1,
      sym__identifier,
    STATE(33), 1,
      sym__atom,
    STATE(34), 1,
      sym_quoted_atom,
    STATE(45), 1,
      sym_comment,
  [203] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(46), 2,
      sym_comment,
      aux_sym__items_repeat1,
    ACTIONS(217), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [219] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__items_repeat1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_GT_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [237] = 5,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(230), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [254] = 4,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 2,
      sym_escape_sequence,
      sym_quoted_content,
    STATE(49), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [269] = 5,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_escape_sequence,
      sym_quoted_content,
  [286] = 3,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_quoted_content,
  [298] = 3,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym_escape_sequence,
      aux_sym_character_token1,
  [309] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_comment,
  [319] = 3,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
  [329] = 3,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    ACTIONS(249), 1,
      sym_quoted_content,
    STATE(55), 1,
      sym_comment,
  [339] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(251), 1,
      anon_sym_GT_GT,
    STATE(56), 1,
      sym_comment,
  [349] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
  [359] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_comment,
  [369] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_comment,
  [379] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
  [389] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_comment,
  [399] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
  [409] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
  [419] = 1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 36,
  [SMALL_STATE(41)] = 72,
  [SMALL_STATE(42)] = 100,
  [SMALL_STATE(43)] = 129,
  [SMALL_STATE(44)] = 153,
  [SMALL_STATE(45)] = 178,
  [SMALL_STATE(46)] = 203,
  [SMALL_STATE(47)] = 219,
  [SMALL_STATE(48)] = 237,
  [SMALL_STATE(49)] = 254,
  [SMALL_STATE(50)] = 269,
  [SMALL_STATE(51)] = 286,
  [SMALL_STATE(52)] = 298,
  [SMALL_STATE(53)] = 309,
  [SMALL_STATE(54)] = 319,
  [SMALL_STATE(55)] = 329,
  [SMALL_STATE(56)] = 339,
  [SMALL_STATE(57)] = 349,
  [SMALL_STATE(58)] = 359,
  [SMALL_STATE(59)] = 369,
  [SMALL_STATE(60)] = 379,
  [SMALL_STATE(61)] = 389,
  [SMALL_STATE(62)] = 399,
  [SMALL_STATE(63)] = 409,
  [SMALL_STATE(64)] = 419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 10),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6, .production_id = 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitstring, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitstring, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__items_repeat1, 2), SHIFT_REPEAT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__items, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
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
