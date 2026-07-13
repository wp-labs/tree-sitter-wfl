#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 18
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_use = 3,
  anon_sym_POUND_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_scenario = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_EQ = 12,
  anon_sym_traffic = 13,
  anon_sym_stream = 14,
  anon_sym_gen = 15,
  sym_rate_constant = 16,
  anon_sym_wave = 17,
  anon_sym_LPAREN = 18,
  anon_sym_base = 19,
  anon_sym_amp = 20,
  anon_sym_period = 21,
  anon_sym_shape = 22,
  anon_sym_RPAREN = 23,
  anon_sym_sine = 24,
  anon_sym_triangle = 25,
  anon_sym_square = 26,
  anon_sym_burst = 27,
  anon_sym_peak = 28,
  anon_sym_every = 29,
  anon_sym_hold = 30,
  anon_sym_timeline = 31,
  anon_sym_DOT_DOT = 32,
  anon_sym_injection = 33,
  anon_sym_for = 34,
  anon_sym_hit = 35,
  anon_sym_near_miss = 36,
  anon_sym_miss = 37,
  anon_sym_seq = 38,
  anon_sym_then = 39,
  anon_sym_with = 40,
  anon_sym_not = 41,
  anon_sym_within = 42,
  anon_sym_expect = 43,
  anon_sym_precision = 44,
  anon_sym_recall = 45,
  anon_sym_fpr = 46,
  anon_sym_latency_p95 = 47,
  sym_comparison_operator = 48,
  sym_percent = 49,
  sym_duration = 50,
  sym_number = 51,
  sym_string = 52,
  anon_sym_true = 53,
  anon_sym_false = 54,
  sym_source_file = 55,
  sym_use_declaration = 56,
  sym_scenario_attributes = 57,
  sym_scenario_declaration = 58,
  sym_annotation_list = 59,
  sym_annotation_item = 60,
  sym_traffic_block = 61,
  sym_stream_statement = 62,
  sym_rate_expression = 63,
  sym_wave_expression = 64,
  sym_wave_shape = 65,
  sym_burst_expression = 66,
  sym_timeline_expression = 67,
  sym_timeline_segment = 68,
  sym_injection_block = 69,
  sym_injection_case = 70,
  sym_mode_keyword = 71,
  sym_sequence_block = 72,
  sym_use_statement = 73,
  sym_not_statement = 74,
  sym_predicate_list = 75,
  sym_predicate = 76,
  sym_expect_block = 77,
  sym_expect_statement = 78,
  sym_expect_function = 79,
  sym_value = 80,
  sym_literal = 81,
  sym_boolean = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_annotation_list_repeat1 = 84,
  aux_sym_traffic_block_repeat1 = 85,
  aux_sym_timeline_expression_repeat1 = 86,
  aux_sym_injection_block_repeat1 = 87,
  aux_sym_sequence_block_repeat1 = 88,
  aux_sym_predicate_list_repeat1 = 89,
  aux_sym_expect_block_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_scenario] = "scenario",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_traffic] = "traffic",
  [anon_sym_stream] = "stream",
  [anon_sym_gen] = "gen",
  [sym_rate_constant] = "rate_constant",
  [anon_sym_wave] = "wave",
  [anon_sym_LPAREN] = "(",
  [anon_sym_base] = "base",
  [anon_sym_amp] = "amp",
  [anon_sym_period] = "period",
  [anon_sym_shape] = "shape",
  [anon_sym_RPAREN] = ")",
  [anon_sym_sine] = "sine",
  [anon_sym_triangle] = "triangle",
  [anon_sym_square] = "square",
  [anon_sym_burst] = "burst",
  [anon_sym_peak] = "peak",
  [anon_sym_every] = "every",
  [anon_sym_hold] = "hold",
  [anon_sym_timeline] = "timeline",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_injection] = "injection",
  [anon_sym_for] = "for",
  [anon_sym_hit] = "hit",
  [anon_sym_near_miss] = "near_miss",
  [anon_sym_miss] = "miss",
  [anon_sym_seq] = "seq",
  [anon_sym_then] = "then",
  [anon_sym_with] = "with",
  [anon_sym_not] = "not",
  [anon_sym_within] = "within",
  [anon_sym_expect] = "expect",
  [anon_sym_precision] = "precision",
  [anon_sym_recall] = "recall",
  [anon_sym_fpr] = "fpr",
  [anon_sym_latency_p95] = "latency_p95",
  [sym_comparison_operator] = "comparison_operator",
  [sym_percent] = "percent",
  [sym_duration] = "duration",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_use_declaration] = "use_declaration",
  [sym_scenario_attributes] = "scenario_attributes",
  [sym_scenario_declaration] = "scenario_declaration",
  [sym_annotation_list] = "annotation_list",
  [sym_annotation_item] = "annotation_item",
  [sym_traffic_block] = "traffic_block",
  [sym_stream_statement] = "stream_statement",
  [sym_rate_expression] = "rate_expression",
  [sym_wave_expression] = "wave_expression",
  [sym_wave_shape] = "wave_shape",
  [sym_burst_expression] = "burst_expression",
  [sym_timeline_expression] = "timeline_expression",
  [sym_timeline_segment] = "timeline_segment",
  [sym_injection_block] = "injection_block",
  [sym_injection_case] = "injection_case",
  [sym_mode_keyword] = "mode_keyword",
  [sym_sequence_block] = "sequence_block",
  [sym_use_statement] = "use_statement",
  [sym_not_statement] = "not_statement",
  [sym_predicate_list] = "predicate_list",
  [sym_predicate] = "predicate",
  [sym_expect_block] = "expect_block",
  [sym_expect_statement] = "expect_statement",
  [sym_expect_function] = "expect_function",
  [sym_value] = "value",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_annotation_list_repeat1] = "annotation_list_repeat1",
  [aux_sym_traffic_block_repeat1] = "traffic_block_repeat1",
  [aux_sym_timeline_expression_repeat1] = "timeline_expression_repeat1",
  [aux_sym_injection_block_repeat1] = "injection_block_repeat1",
  [aux_sym_sequence_block_repeat1] = "sequence_block_repeat1",
  [aux_sym_predicate_list_repeat1] = "predicate_list_repeat1",
  [aux_sym_expect_block_repeat1] = "expect_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_scenario] = anon_sym_scenario,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_traffic] = anon_sym_traffic,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_gen] = anon_sym_gen,
  [sym_rate_constant] = sym_rate_constant,
  [anon_sym_wave] = anon_sym_wave,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_amp] = anon_sym_amp,
  [anon_sym_period] = anon_sym_period,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_sine] = anon_sym_sine,
  [anon_sym_triangle] = anon_sym_triangle,
  [anon_sym_square] = anon_sym_square,
  [anon_sym_burst] = anon_sym_burst,
  [anon_sym_peak] = anon_sym_peak,
  [anon_sym_every] = anon_sym_every,
  [anon_sym_hold] = anon_sym_hold,
  [anon_sym_timeline] = anon_sym_timeline,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_injection] = anon_sym_injection,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_hit] = anon_sym_hit,
  [anon_sym_near_miss] = anon_sym_near_miss,
  [anon_sym_miss] = anon_sym_miss,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_expect] = anon_sym_expect,
  [anon_sym_precision] = anon_sym_precision,
  [anon_sym_recall] = anon_sym_recall,
  [anon_sym_fpr] = anon_sym_fpr,
  [anon_sym_latency_p95] = anon_sym_latency_p95,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_percent] = sym_percent,
  [sym_duration] = sym_duration,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_use_declaration] = sym_use_declaration,
  [sym_scenario_attributes] = sym_scenario_attributes,
  [sym_scenario_declaration] = sym_scenario_declaration,
  [sym_annotation_list] = sym_annotation_list,
  [sym_annotation_item] = sym_annotation_item,
  [sym_traffic_block] = sym_traffic_block,
  [sym_stream_statement] = sym_stream_statement,
  [sym_rate_expression] = sym_rate_expression,
  [sym_wave_expression] = sym_wave_expression,
  [sym_wave_shape] = sym_wave_shape,
  [sym_burst_expression] = sym_burst_expression,
  [sym_timeline_expression] = sym_timeline_expression,
  [sym_timeline_segment] = sym_timeline_segment,
  [sym_injection_block] = sym_injection_block,
  [sym_injection_case] = sym_injection_case,
  [sym_mode_keyword] = sym_mode_keyword,
  [sym_sequence_block] = sym_sequence_block,
  [sym_use_statement] = sym_use_statement,
  [sym_not_statement] = sym_not_statement,
  [sym_predicate_list] = sym_predicate_list,
  [sym_predicate] = sym_predicate,
  [sym_expect_block] = sym_expect_block,
  [sym_expect_statement] = sym_expect_statement,
  [sym_expect_function] = sym_expect_function,
  [sym_value] = sym_value,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_annotation_list_repeat1] = aux_sym_annotation_list_repeat1,
  [aux_sym_traffic_block_repeat1] = aux_sym_traffic_block_repeat1,
  [aux_sym_timeline_expression_repeat1] = aux_sym_timeline_expression_repeat1,
  [aux_sym_injection_block_repeat1] = aux_sym_injection_block_repeat1,
  [aux_sym_sequence_block_repeat1] = aux_sym_sequence_block_repeat1,
  [aux_sym_predicate_list_repeat1] = aux_sym_predicate_list_repeat1,
  [aux_sym_expect_block_repeat1] = aux_sym_expect_block_repeat1,
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scenario] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_traffic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gen] = {
    .visible = true,
    .named = false,
  },
  [sym_rate_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_amp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_period] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_square] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_every] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_injection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_near_miss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fpr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_latency_p95] = {
    .visible = true,
    .named = false,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_percent] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_use_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_item] = {
    .visible = true,
    .named = true,
  },
  [sym_traffic_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stream_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rate_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_wave_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_wave_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_burst_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_timeline_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_timeline_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_injection_block] = {
    .visible = true,
    .named = true,
  },
  [sym_injection_case] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_block] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_not_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_list] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_expect_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expect_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expect_function] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_traffic_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timeline_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_injection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_predicate_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expect_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_amp = 1,
  field_base = 2,
  field_count = 3,
  field_end = 4,
  field_entity = 5,
  field_every = 6,
  field_hold = 7,
  field_key = 8,
  field_metric = 9,
  field_mode = 10,
  field_name = 11,
  field_operator = 12,
  field_params = 13,
  field_path = 14,
  field_peak = 15,
  field_percent = 16,
  field_period = 17,
  field_predicates = 18,
  field_rate = 19,
  field_rule = 20,
  field_shape = 21,
  field_start = 22,
  field_stream = 23,
  field_threshold = 24,
  field_value = 25,
  field_window = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amp] = "amp",
  [field_base] = "base",
  [field_count] = "count",
  [field_end] = "end",
  [field_entity] = "entity",
  [field_every] = "every",
  [field_hold] = "hold",
  [field_key] = "key",
  [field_metric] = "metric",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_params] = "params",
  [field_path] = "path",
  [field_peak] = "peak",
  [field_percent] = "percent",
  [field_period] = "period",
  [field_predicates] = "predicates",
  [field_rate] = "rate",
  [field_rule] = "rule",
  [field_shape] = "shape",
  [field_start] = "start",
  [field_stream] = "stream",
  [field_threshold] = "threshold",
  [field_value] = "value",
  [field_window] = "window",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 4},
  [10] = {.index = 22, .length = 1},
  [11] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 1},
  [13] = {.index = 27, .length = 2},
  [14] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
  [18] = {.index = 36, .length = 3},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 4},
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 1},
    {field_params, 3},
  [6] =
    {field_rate, 3},
    {field_stream, 1},
  [8] =
    {field_metric, 0},
    {field_operator, 4},
    {field_rule, 2},
    {field_threshold, 5},
  [12] =
    {field_mode, 0},
    {field_percent, 2},
    {field_stream, 4},
  [15] =
    {field_end, 2},
    {field_rate, 4},
    {field_start, 0},
  [18] =
    {field_mode, 0},
    {field_percent, 2},
    {field_rule, 5},
    {field_stream, 6},
  [22] =
    {field_entity, 0},
  [23] =
    {field_amp, 8},
    {field_base, 4},
    {field_period, 12},
  [26] =
    {field_count, 5},
  [27] =
    {field_count, 6},
    {field_predicates, 2},
  [29] =
    {field_count, 6},
  [30] =
    {field_predicates, 2},
    {field_window, 6},
  [32] =
    {field_count, 5},
    {field_window, 7},
  [34] =
    {field_count, 7},
    {field_predicates, 3},
  [36] =
    {field_count, 6},
    {field_predicates, 2},
    {field_window, 8},
  [39] =
    {field_count, 6},
    {field_window, 8},
  [41] =
    {field_amp, 8},
    {field_base, 4},
    {field_period, 12},
    {field_shape, 16},
  [45] =
    {field_base, 4},
    {field_every, 12},
    {field_hold, 16},
    {field_peak, 8},
  [49] =
    {field_count, 7},
    {field_predicates, 3},
    {field_window, 9},
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 2,
        '#', 9,
        '(', 29,
        ')', 30,
        ',', 25,
        '.', 4,
        '/', 6,
        '<', 20,
        '=', 27,
        '>', 22,
        ']', 18,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ')', 30,
        ',', 25,
        '/', 6,
        '<', 19,
        '=', 26,
        '>', 21,
        ']', 18,
        '{', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_rate_constant);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comparison_operator);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comparison_operator);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_percent);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_duration);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
        'e', 3,
        'f', 4,
        'g', 5,
        'h', 6,
        'i', 7,
        'l', 8,
        'm', 9,
        'n', 10,
        'p', 11,
        'r', 12,
        's', 13,
        't', 14,
        'u', 15,
        'w', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'j') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_amp);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fpr);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_hit);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_hold);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_miss);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_peak);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_sine);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_wave);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_burst);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_expect);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_period);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_square);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_traffic);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_scenario);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_timeline);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_triangle);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_injection);
      END_STATE();
    case 156:
      if (lookahead == '9') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_near_miss);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 159:
      if (lookahead == '5') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_latency_p95);
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
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
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
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_scenario] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_traffic] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_wave] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_amp] = ACTIONS(1),
    [anon_sym_period] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_sine] = ACTIONS(1),
    [anon_sym_triangle] = ACTIONS(1),
    [anon_sym_square] = ACTIONS(1),
    [anon_sym_burst] = ACTIONS(1),
    [anon_sym_peak] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [anon_sym_hold] = ACTIONS(1),
    [anon_sym_timeline] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_injection] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_hit] = ACTIONS(1),
    [anon_sym_near_miss] = ACTIONS(1),
    [anon_sym_miss] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_expect] = ACTIONS(1),
    [anon_sym_precision] = ACTIONS(1),
    [anon_sym_recall] = ACTIONS(1),
    [anon_sym_fpr] = ACTIONS(1),
    [anon_sym_latency_p95] = ACTIONS(1),
    [sym_comparison_operator] = ACTIONS(1),
    [sym_percent] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(202),
    [sym_use_declaration] = STATE(12),
    [sym_scenario_attributes] = STATE(82),
    [sym_scenario_declaration] = STATE(201),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_POUND_LBRACK] = ACTIONS(7),
    [anon_sym_scenario] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_expect_function,
    STATE(4), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
    ACTIONS(13), 7,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
      anon_sym_precision,
      anon_sym_recall,
      anon_sym_fpr,
      anon_sym_latency_p95,
  [23] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_expect_function,
    STATE(2), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
    ACTIONS(13), 7,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
      anon_sym_precision,
      anon_sym_recall,
      anon_sym_fpr,
      anon_sym_latency_p95,
  [46] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_expect_function,
    STATE(4), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
    ACTIONS(19), 7,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
      anon_sym_precision,
      anon_sym_recall,
      anon_sym_fpr,
      anon_sym_latency_p95,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 8,
      anon_sym_RBRACE,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
      anon_sym_precision,
      anon_sym_recall,
      anon_sym_fpr,
      anon_sym_latency_p95,
  [83] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_rate_constant,
    ACTIONS(26), 1,
      anon_sym_wave,
    ACTIONS(28), 1,
      anon_sym_burst,
    ACTIONS(30), 1,
      anon_sym_timeline,
    STATE(77), 1,
      sym_rate_expression,
    STATE(61), 3,
      sym_wave_expression,
      sym_burst_expression,
      sym_timeline_expression,
  [107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_duration,
    ACTIONS(34), 1,
      sym_number,
    ACTIONS(36), 1,
      sym_string,
    STATE(25), 1,
      sym_boolean,
    STATE(52), 1,
      sym_literal,
    STATE(53), 1,
      sym_value,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
  [133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_then,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(13), 3,
      sym_use_statement,
      sym_not_statement,
      aux_sym_sequence_block_repeat1,
  [154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_mode_keyword,
    STATE(10), 2,
      sym_injection_case,
      aux_sym_injection_block_repeat1,
    ACTIONS(50), 3,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
  [173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_mode_keyword,
    STATE(14), 2,
      sym_injection_case,
      aux_sym_injection_block_repeat1,
    ACTIONS(50), 3,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
  [192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_use,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_then,
    ACTIONS(62), 1,
      anon_sym_not,
    STATE(11), 3,
      sym_use_statement,
      sym_not_statement,
      aux_sym_sequence_block_repeat1,
  [213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_scenario,
    STATE(75), 1,
      sym_scenario_attributes,
    STATE(194), 1,
      sym_scenario_declaration,
    STATE(19), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
  [236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(44), 1,
      anon_sym_then,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym_use_statement,
      sym_not_statement,
      aux_sym_sequence_block_repeat1,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_mode_keyword,
    STATE(14), 2,
      sym_injection_case,
      aux_sym_injection_block_repeat1,
    ACTIONS(69), 3,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_boolean,
    STATE(69), 1,
      sym_literal,
    ACTIONS(36), 2,
      sym_number,
      sym_string,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_injection,
    ACTIONS(76), 1,
      anon_sym_expect,
    STATE(58), 1,
      sym_injection_block,
    STATE(138), 1,
      sym_expect_block,
  [313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_injection,
    ACTIONS(76), 1,
      anon_sym_expect,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_injection_block,
    STATE(174), 1,
      sym_expect_block,
  [332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(44), 1,
      anon_sym_then,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(8), 2,
      sym_use_statement,
      sym_not_statement,
  [349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_use,
    ACTIONS(83), 2,
      anon_sym_POUND_LBRACK,
      anon_sym_scenario,
    STATE(19), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_annotation_list_repeat1,
    ACTIONS(89), 2,
      anon_sym_RBRACK,
      anon_sym_GT,
  [398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_predicate,
    STATE(137), 1,
      sym_predicate_list,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(196), 1,
      sym_wave_shape,
    ACTIONS(105), 3,
      anon_sym_sine,
      anon_sym_triangle,
      anon_sym_square,
  [466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_annotation_list_repeat1,
    ACTIONS(107), 2,
      anon_sym_RBRACK,
      anon_sym_GT,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      anon_sym_RBRACE,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_RBRACE,
      anon_sym_hit,
      anon_sym_near_miss,
      anon_sym_miss,
  [520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_stream,
    STATE(43), 2,
      sym_stream_statement,
      aux_sym_traffic_block_repeat1,
  [534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_predicate,
    STATE(151), 1,
      sym_predicate_list,
  [550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_annotation_list_repeat1,
    ACTIONS(126), 2,
      anon_sym_RBRACK,
      anon_sym_GT,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_not,
  [594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      sym_duration,
    STATE(42), 2,
      sym_timeline_segment,
      aux_sym_timeline_expression_repeat1,
  [608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_stream,
    STATE(41), 2,
      sym_stream_statement,
      aux_sym_traffic_block_repeat1,
  [622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym_duration,
    STATE(42), 2,
      sym_timeline_segment,
      aux_sym_timeline_expression_repeat1,
  [636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_stream,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_stream_statement,
      aux_sym_traffic_block_repeat1,
  [650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_duration,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_timeline_segment,
      aux_sym_timeline_expression_repeat1,
  [664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(36), 1,
      sym_annotation_item,
    STATE(187), 1,
      sym_annotation_list,
  [677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(57), 1,
      sym_predicate,
    STATE(140), 1,
      sym_predicate_list,
  [690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_predicate_list_repeat1,
  [703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(36), 1,
      sym_annotation_item,
    STATE(198), 1,
      sym_annotation_list,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_number,
    ACTIONS(159), 2,
      sym_percent,
      sym_duration,
  [727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_RBRACE,
      anon_sym_injection,
      anon_sym_expect,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_use,
      anon_sym_POUND_LBRACK,
      anon_sym_scenario,
  [745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_COMMA,
  [754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_COMMA,
  [763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_predicate_list_repeat1,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_RBRACE,
      anon_sym_injection,
      anon_sym_expect,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_COMMA,
  [794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_predicate_list_repeat1,
  [807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_expect,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_expect_block,
  [820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_expect,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_expect_block,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_expect,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(67), 1,
      sym_predicate,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_traffic,
    STATE(17), 1,
      sym_traffic_block,
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(107), 1,
      sym_sequence_block,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(56), 1,
      sym_annotation_item,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_traffic,
    STATE(16), 1,
      sym_traffic_block,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_RBRACE,
      sym_duration,
  [971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_scenario,
    STATE(188), 1,
      sym_scenario_declaration,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(117), 1,
      sym_sequence_block,
  [991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [1007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      anon_sym_expect,
  [1025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_scenario,
    STATE(194), 1,
      sym_scenario_declaration,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_for,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_RBRACE,
      anon_sym_stream,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_base,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_base,
  [1121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_comparison_operator,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_EQ,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DOT_DOT,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_rate_constant,
  [1170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_rate_constant,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_duration,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_identifier,
  [1191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_EQ,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_seq,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_amp,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_peak,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_rate_constant,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_string,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_rate_constant,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_rate_constant,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_use,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COMMA,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_identifier,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_percent,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_period,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_every,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_with,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_EQ,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_GT,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_with,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_with,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_within,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_duration,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_duration,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_number,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LT,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LT,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_gen,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_with,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_number,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_number,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_duration,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_shape,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_hold,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_duration,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_number,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_duration,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_duration,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_GT,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_duration,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_scenario,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_duration,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [1856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [1877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 364,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 408,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 490,
  [SMALL_STATE(32)] = 500,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 534,
  [SMALL_STATE(36)] = 550,
  [SMALL_STATE(37)] = 564,
  [SMALL_STATE(38)] = 574,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 594,
  [SMALL_STATE(41)] = 608,
  [SMALL_STATE(42)] = 622,
  [SMALL_STATE(43)] = 636,
  [SMALL_STATE(44)] = 650,
  [SMALL_STATE(45)] = 664,
  [SMALL_STATE(46)] = 677,
  [SMALL_STATE(47)] = 690,
  [SMALL_STATE(48)] = 703,
  [SMALL_STATE(49)] = 716,
  [SMALL_STATE(50)] = 727,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 745,
  [SMALL_STATE(53)] = 754,
  [SMALL_STATE(54)] = 763,
  [SMALL_STATE(55)] = 776,
  [SMALL_STATE(56)] = 785,
  [SMALL_STATE(57)] = 794,
  [SMALL_STATE(58)] = 807,
  [SMALL_STATE(59)] = 820,
  [SMALL_STATE(60)] = 833,
  [SMALL_STATE(61)] = 841,
  [SMALL_STATE(62)] = 849,
  [SMALL_STATE(63)] = 857,
  [SMALL_STATE(64)] = 867,
  [SMALL_STATE(65)] = 877,
  [SMALL_STATE(66)] = 887,
  [SMALL_STATE(67)] = 897,
  [SMALL_STATE(68)] = 905,
  [SMALL_STATE(69)] = 915,
  [SMALL_STATE(70)] = 923,
  [SMALL_STATE(71)] = 933,
  [SMALL_STATE(72)] = 943,
  [SMALL_STATE(73)] = 953,
  [SMALL_STATE(74)] = 963,
  [SMALL_STATE(75)] = 971,
  [SMALL_STATE(76)] = 981,
  [SMALL_STATE(77)] = 991,
  [SMALL_STATE(78)] = 999,
  [SMALL_STATE(79)] = 1007,
  [SMALL_STATE(80)] = 1017,
  [SMALL_STATE(81)] = 1025,
  [SMALL_STATE(82)] = 1033,
  [SMALL_STATE(83)] = 1043,
  [SMALL_STATE(84)] = 1051,
  [SMALL_STATE(85)] = 1061,
  [SMALL_STATE(86)] = 1071,
  [SMALL_STATE(87)] = 1079,
  [SMALL_STATE(88)] = 1086,
  [SMALL_STATE(89)] = 1093,
  [SMALL_STATE(90)] = 1100,
  [SMALL_STATE(91)] = 1107,
  [SMALL_STATE(92)] = 1114,
  [SMALL_STATE(93)] = 1121,
  [SMALL_STATE(94)] = 1128,
  [SMALL_STATE(95)] = 1135,
  [SMALL_STATE(96)] = 1142,
  [SMALL_STATE(97)] = 1149,
  [SMALL_STATE(98)] = 1156,
  [SMALL_STATE(99)] = 1163,
  [SMALL_STATE(100)] = 1170,
  [SMALL_STATE(101)] = 1177,
  [SMALL_STATE(102)] = 1184,
  [SMALL_STATE(103)] = 1191,
  [SMALL_STATE(104)] = 1198,
  [SMALL_STATE(105)] = 1205,
  [SMALL_STATE(106)] = 1212,
  [SMALL_STATE(107)] = 1219,
  [SMALL_STATE(108)] = 1226,
  [SMALL_STATE(109)] = 1233,
  [SMALL_STATE(110)] = 1240,
  [SMALL_STATE(111)] = 1247,
  [SMALL_STATE(112)] = 1254,
  [SMALL_STATE(113)] = 1261,
  [SMALL_STATE(114)] = 1268,
  [SMALL_STATE(115)] = 1275,
  [SMALL_STATE(116)] = 1282,
  [SMALL_STATE(117)] = 1289,
  [SMALL_STATE(118)] = 1296,
  [SMALL_STATE(119)] = 1303,
  [SMALL_STATE(120)] = 1310,
  [SMALL_STATE(121)] = 1317,
  [SMALL_STATE(122)] = 1324,
  [SMALL_STATE(123)] = 1331,
  [SMALL_STATE(124)] = 1338,
  [SMALL_STATE(125)] = 1345,
  [SMALL_STATE(126)] = 1352,
  [SMALL_STATE(127)] = 1359,
  [SMALL_STATE(128)] = 1366,
  [SMALL_STATE(129)] = 1373,
  [SMALL_STATE(130)] = 1380,
  [SMALL_STATE(131)] = 1387,
  [SMALL_STATE(132)] = 1394,
  [SMALL_STATE(133)] = 1401,
  [SMALL_STATE(134)] = 1408,
  [SMALL_STATE(135)] = 1415,
  [SMALL_STATE(136)] = 1422,
  [SMALL_STATE(137)] = 1429,
  [SMALL_STATE(138)] = 1436,
  [SMALL_STATE(139)] = 1443,
  [SMALL_STATE(140)] = 1450,
  [SMALL_STATE(141)] = 1457,
  [SMALL_STATE(142)] = 1464,
  [SMALL_STATE(143)] = 1471,
  [SMALL_STATE(144)] = 1478,
  [SMALL_STATE(145)] = 1485,
  [SMALL_STATE(146)] = 1492,
  [SMALL_STATE(147)] = 1499,
  [SMALL_STATE(148)] = 1506,
  [SMALL_STATE(149)] = 1513,
  [SMALL_STATE(150)] = 1520,
  [SMALL_STATE(151)] = 1527,
  [SMALL_STATE(152)] = 1534,
  [SMALL_STATE(153)] = 1541,
  [SMALL_STATE(154)] = 1548,
  [SMALL_STATE(155)] = 1555,
  [SMALL_STATE(156)] = 1562,
  [SMALL_STATE(157)] = 1569,
  [SMALL_STATE(158)] = 1576,
  [SMALL_STATE(159)] = 1583,
  [SMALL_STATE(160)] = 1590,
  [SMALL_STATE(161)] = 1597,
  [SMALL_STATE(162)] = 1604,
  [SMALL_STATE(163)] = 1611,
  [SMALL_STATE(164)] = 1618,
  [SMALL_STATE(165)] = 1625,
  [SMALL_STATE(166)] = 1632,
  [SMALL_STATE(167)] = 1639,
  [SMALL_STATE(168)] = 1646,
  [SMALL_STATE(169)] = 1653,
  [SMALL_STATE(170)] = 1660,
  [SMALL_STATE(171)] = 1667,
  [SMALL_STATE(172)] = 1674,
  [SMALL_STATE(173)] = 1681,
  [SMALL_STATE(174)] = 1688,
  [SMALL_STATE(175)] = 1695,
  [SMALL_STATE(176)] = 1702,
  [SMALL_STATE(177)] = 1709,
  [SMALL_STATE(178)] = 1716,
  [SMALL_STATE(179)] = 1723,
  [SMALL_STATE(180)] = 1730,
  [SMALL_STATE(181)] = 1737,
  [SMALL_STATE(182)] = 1744,
  [SMALL_STATE(183)] = 1751,
  [SMALL_STATE(184)] = 1758,
  [SMALL_STATE(185)] = 1765,
  [SMALL_STATE(186)] = 1772,
  [SMALL_STATE(187)] = 1779,
  [SMALL_STATE(188)] = 1786,
  [SMALL_STATE(189)] = 1793,
  [SMALL_STATE(190)] = 1800,
  [SMALL_STATE(191)] = 1807,
  [SMALL_STATE(192)] = 1814,
  [SMALL_STATE(193)] = 1821,
  [SMALL_STATE(194)] = 1828,
  [SMALL_STATE(195)] = 1835,
  [SMALL_STATE(196)] = 1842,
  [SMALL_STATE(197)] = 1849,
  [SMALL_STATE(198)] = 1856,
  [SMALL_STATE(199)] = 1863,
  [SMALL_STATE(200)] = 1870,
  [SMALL_STATE(201)] = 1877,
  [SMALL_STATE(202)] = 1884,
  [SMALL_STATE(203)] = 1891,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_statement, 6, 0, 6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_block_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_injection_block_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_injection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 9, 0, 17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_list, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_statement, 8, 0, 15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 11, 0, 22),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_list_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_list_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 9, 0, 16),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 8, 0, 14),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection_case, 8, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection_case, 10, 0, 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_list, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7, 0, 12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 10, 0, 18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 10, 0, 19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_traffic_block_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_traffic_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeline_expression_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeline_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_list_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_predicate_list_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traffic_block, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 2, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_item, 3, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_list, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traffic_block, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_list, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection_block, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate_expression, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wave_expression, 14, 0, 11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeline_segment, 5, 0, 8),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stream_statement, 4, 0, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeline_expression, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection_block, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeline_expression, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wave_expression, 18, 0, 20),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_burst_expression, 18, 0, 21),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 10, 0, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 9, 0, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 5, 0, 10),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 8, 0, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 6, 0, 10),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 7, 0, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_function, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_keyword, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 6, 0, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_declaration, 5, 0, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_attributes, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wave_shape, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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

TS_PUBLIC const TSLanguage *tree_sitter_wfg(void) {
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
