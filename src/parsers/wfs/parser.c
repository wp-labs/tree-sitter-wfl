#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_window = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_stream = 6,
  anon_sym_stream_tag = 7,
  anon_sym_EQ = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_time = 12,
  anon_sym_over = 13,
  anon_sym_0 = 14,
  anon_sym_fields = 15,
  anon_sym_COLON = 16,
  anon_sym_DOT = 17,
  sym_quoted_identifier = 18,
  anon_sym_array = 19,
  anon_sym_SLASH = 20,
  sym_object_type = 21,
  anon_sym_chars = 22,
  anon_sym_digit = 23,
  anon_sym_float = 24,
  anon_sym_bool = 25,
  anon_sym_ip = 26,
  anon_sym_hex = 27,
  sym_duration = 28,
  sym_string = 29,
  sym_source_file = 30,
  sym_window_declaration = 31,
  sym_window_attribute = 32,
  sym_stream_attribute = 33,
  sym_string_array = 34,
  sym_time_attribute = 35,
  sym_over_attribute = 36,
  sym_fields_block = 37,
  sym_field_declaration = 38,
  sym_field_name = 39,
  sym_dotted_identifier = 40,
  sym_field_type = 41,
  sym_array_type = 42,
  sym_base_type = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_window_declaration_repeat1 = 45,
  aux_sym_string_array_repeat1 = 46,
  aux_sym_fields_block_repeat1 = 47,
  aux_sym_dotted_identifier_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_window] = "window",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_stream] = "stream",
  [anon_sym_stream_tag] = "stream_tag",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_time] = "time",
  [anon_sym_over] = "over",
  [anon_sym_0] = "0",
  [anon_sym_fields] = "fields",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [sym_quoted_identifier] = "quoted_identifier",
  [anon_sym_array] = "array",
  [anon_sym_SLASH] = "/",
  [sym_object_type] = "object_type",
  [anon_sym_chars] = "chars",
  [anon_sym_digit] = "digit",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_ip] = "ip",
  [anon_sym_hex] = "hex",
  [sym_duration] = "duration",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_window_declaration] = "window_declaration",
  [sym_window_attribute] = "window_attribute",
  [sym_stream_attribute] = "stream_attribute",
  [sym_string_array] = "string_array",
  [sym_time_attribute] = "time_attribute",
  [sym_over_attribute] = "over_attribute",
  [sym_fields_block] = "fields_block",
  [sym_field_declaration] = "field_declaration",
  [sym_field_name] = "field_name",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_field_type] = "field_type",
  [sym_array_type] = "array_type",
  [sym_base_type] = "base_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_window_declaration_repeat1] = "window_declaration_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_fields_block_repeat1] = "fields_block_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_window] = anon_sym_window,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_stream_tag] = anon_sym_stream_tag,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_fields] = anon_sym_fields,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_object_type] = sym_object_type,
  [anon_sym_chars] = anon_sym_chars,
  [anon_sym_digit] = anon_sym_digit,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_hex] = anon_sym_hex,
  [sym_duration] = sym_duration,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_window_declaration] = sym_window_declaration,
  [sym_window_attribute] = sym_window_attribute,
  [sym_stream_attribute] = sym_stream_attribute,
  [sym_string_array] = sym_string_array,
  [sym_time_attribute] = sym_time_attribute,
  [sym_over_attribute] = sym_over_attribute,
  [sym_fields_block] = sym_fields_block,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_name] = sym_field_name,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_field_type] = sym_field_type,
  [sym_array_type] = sym_array_type,
  [sym_base_type] = sym_base_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_window_declaration_repeat1] = aux_sym_window_declaration_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_fields_block_repeat1] = aux_sym_fields_block_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_window] = {
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
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fields] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_chars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_window_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_window_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_stream_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_time_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_over_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_type, 2},
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 1,
        ',', 12,
        '.', 16,
        '/', 18,
        '0', 14,
        ':', 15,
        '=', 10,
        '[', 11,
        ']', 13,
        '`', 5,
        '{', 8,
        '}', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '`') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_quoted_identifier);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_duration);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'f', 5,
        'h', 6,
        'i', 7,
        'o', 8,
        's', 9,
        't', 10,
        'w', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 20:
      if (lookahead == 'j') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_chars);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_fields);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_stream);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_window);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_stream_tag);
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
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_window] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_stream_tag] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_fields] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_quoted_identifier] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_chars] = ACTIONS(1),
    [anon_sym_digit] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_window_declaration] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_window] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_array,
    ACTIONS(13), 1,
      sym_object_type,
    STATE(25), 1,
      sym_field_type,
    STATE(26), 2,
      sym_array_type,
      sym_base_type,
    ACTIONS(9), 7,
      anon_sym_time,
      anon_sym_chars,
      anon_sym_digit,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_ip,
      anon_sym_hex,
  [26] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_stream,
    ACTIONS(17), 1,
      anon_sym_stream_tag,
    ACTIONS(19), 1,
      anon_sym_time,
    ACTIONS(21), 1,
      anon_sym_over,
    ACTIONS(23), 1,
      anon_sym_fields,
    STATE(53), 1,
      sym_fields_block,
    STATE(4), 2,
      sym_window_attribute,
      aux_sym_window_declaration_repeat1,
    STATE(13), 3,
      sym_stream_attribute,
      sym_time_attribute,
      sym_over_attribute,
  [57] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_stream,
    ACTIONS(17), 1,
      anon_sym_stream_tag,
    ACTIONS(19), 1,
      anon_sym_time,
    ACTIONS(21), 1,
      anon_sym_over,
    ACTIONS(23), 1,
      anon_sym_fields,
    STATE(49), 1,
      sym_fields_block,
    STATE(5), 2,
      sym_window_attribute,
      aux_sym_window_declaration_repeat1,
    STATE(13), 3,
      sym_stream_attribute,
      sym_time_attribute,
      sym_over_attribute,
  [88] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_stream,
    ACTIONS(28), 1,
      anon_sym_stream_tag,
    ACTIONS(31), 1,
      anon_sym_time,
    ACTIONS(34), 1,
      anon_sym_over,
    ACTIONS(37), 1,
      anon_sym_fields,
    STATE(5), 2,
      sym_window_attribute,
      aux_sym_window_declaration_repeat1,
    STATE(13), 3,
      sym_stream_attribute,
      sym_time_attribute,
      sym_over_attribute,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_base_type,
    ACTIONS(9), 7,
      anon_sym_time,
      anon_sym_chars,
      anon_sym_digit,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_ip,
      anon_sym_hex,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      sym_quoted_identifier,
    STATE(36), 1,
      sym_field_name,
    STATE(43), 1,
      sym_dotted_identifier,
    STATE(7), 2,
      sym_field_declaration,
      aux_sym_fields_block_repeat1,
  [155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_quoted_identifier,
    STATE(36), 1,
      sym_field_name,
    STATE(43), 1,
      sym_dotted_identifier,
    STATE(7), 2,
      sym_field_declaration,
      aux_sym_fields_block_repeat1,
  [178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_quoted_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_field_name,
    STATE(43), 1,
      sym_dotted_identifier,
    STATE(8), 2,
      sym_field_declaration,
      aux_sym_fields_block_repeat1,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_stream,
    ACTIONS(57), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_stream,
    ACTIONS(61), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_stream,
    ACTIONS(65), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_stream,
    ACTIONS(69), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_stream,
    ACTIONS(73), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_stream,
    ACTIONS(77), 4,
      anon_sym_stream_tag,
      anon_sym_time,
      anon_sym_over,
      anon_sym_fields,
  [279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_window,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_window_declaration,
      aux_sym_source_file_repeat1,
  [293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      sym_quoted_identifier,
      sym_identifier,
  [305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_window,
    STATE(18), 2,
      sym_window_declaration,
      aux_sym_source_file_repeat1,
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_string_array_repeat1,
  [332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_string_array_repeat1,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      sym_quoted_identifier,
      sym_identifier,
  [354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_dotted_identifier_repeat1,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COLON,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_dotted_identifier_repeat1,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_string_array_repeat1,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      sym_quoted_identifier,
      sym_identifier,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      sym_quoted_identifier,
      sym_identifier,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      sym_quoted_identifier,
      sym_identifier,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_string,
    STATE(10), 1,
      sym_string_array,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_dotted_identifier_repeat1,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(126), 1,
      anon_sym_DOT,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_window,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_0,
    ACTIONS(132), 1,
      sym_duration,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_window,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_COLON,
      anon_sym_DOT,
  [498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_string,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_EQ,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_EQ,
  [526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_EQ,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COLON,
  [554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_string,
  [582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_identifier,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
  [610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 214,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 253,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 367,
  [SMALL_STATE(24)] = 380,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 433,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 464,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 490,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 505,
  [SMALL_STATE(38)] = 512,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 533,
  [SMALL_STATE(42)] = 540,
  [SMALL_STATE(43)] = 547,
  [SMALL_STATE(44)] = 554,
  [SMALL_STATE(45)] = 561,
  [SMALL_STATE(46)] = 568,
  [SMALL_STATE(47)] = 575,
  [SMALL_STATE(48)] = 582,
  [SMALL_STATE(49)] = 589,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 603,
  [SMALL_STATE(52)] = 610,
  [SMALL_STATE(53)] = 617,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_window_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_declaration_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_block_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stream_attribute, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stream_attribute, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_attribute, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_attribute, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_attribute, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_attribute, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_over_attribute, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_over_attribute, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_declaration, 6, 0, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_declaration, 5, 0, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_block, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_block, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wfs(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
