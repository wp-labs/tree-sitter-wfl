#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 523
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_use = 3,
  anon_sym_rule = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_meta = 7,
  anon_sym_EQ = 8,
  anon_sym_events = 9,
  anon_sym_COLON = 10,
  anon_sym_AMP_AMP = 11,
  anon_sym_PIPE_GT = 12,
  anon_sym_match = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_COMMA = 17,
  anon_sym_fixed = 18,
  anon_sym_session = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_key = 22,
  anon_sym_SEMI = 23,
  anon_sym_on = 24,
  anon_sym_event = 25,
  anon_sym_close = 26,
  anon_sym_and = 27,
  anon_sym_derive = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_DOT = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_PIPE = 33,
  anon_sym_distinct = 34,
  anon_sym_count = 35,
  anon_sym_sum = 36,
  anon_sym_avg = 37,
  anon_sym_min = 38,
  anon_sym_max = 39,
  anon_sym_score = 40,
  anon_sym_AT = 41,
  anon_sym_join = 42,
  anon_sym_snapshot = 43,
  anon_sym_asof = 44,
  anon_sym_within = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_entity = 47,
  anon_sym_yield = 48,
  sym_version_tag = 49,
  sym_quoted_ident = 50,
  anon_sym_conv = 51,
  anon_sym_sort = 52,
  anon_sym_top = 53,
  anon_sym_dedup = 54,
  anon_sym_where = 55,
  anon_sym_limits = 56,
  anon_sym_max_memory = 57,
  anon_sym_max_instances = 58,
  anon_sym_max_throttle = 59,
  anon_sym_on_exceed = 60,
  anon_sym_test = 61,
  anon_sym_for = 62,
  anon_sym_input = 63,
  anon_sym_row = 64,
  anon_sym_tick = 65,
  anon_sym_expect = 66,
  anon_sym_hits = 67,
  anon_sym_hit = 68,
  anon_sym_close_reason = 69,
  anon_sym_origin = 70,
  anon_sym_entity_type = 71,
  anon_sym_entity_id = 72,
  anon_sym_field = 73,
  anon_sym_options = 74,
  anon_sym_PLUS = 75,
  anon_sym_DASH = 76,
  anon_sym_STAR = 77,
  anon_sym_SLASH = 78,
  anon_sym_PERCENT = 79,
  anon_sym_if = 80,
  anon_sym_then = 81,
  anon_sym_else = 82,
  anon_sym_in = 83,
  anon_sym_not = 84,
  sym_derive_reference = 85,
  sym_variable = 86,
  anon_sym_BANG_EQ = 87,
  anon_sym_LT_EQ = 88,
  anon_sym_GT_EQ = 89,
  sym_number = 90,
  sym_string = 91,
  anon_sym_true = 92,
  anon_sym_false = 93,
  sym_duration = 94,
  sym_source_file = 95,
  sym_use_declaration = 96,
  sym_rule_declaration = 97,
  sym_meta_block = 98,
  sym_meta_entry = 99,
  sym_events_block = 100,
  sym_event_declaration = 101,
  sym_stage_chain = 102,
  sym_stage = 103,
  sym_match_clause = 104,
  sym_match_params = 105,
  sym_window_spec = 106,
  sym_key_block = 107,
  sym_key_item = 108,
  sym_on_event_block = 109,
  sym_on_close_block = 110,
  sym_and_close_block = 111,
  sym_derive_block = 112,
  sym_derive_item = 113,
  sym_match_step = 114,
  sym_step_branch = 115,
  sym_source_expression = 116,
  sym_pipe_chain = 117,
  sym_transform = 118,
  sym_measure = 119,
  sym_score_output = 120,
  sym_score_call = 121,
  sym_score_block = 122,
  sym_score_item = 123,
  sym_join_clause = 124,
  sym_join_mode = 125,
  sym_join_condition = 126,
  sym_entity_clause = 127,
  sym_yield_clause = 128,
  sym_yield_target = 129,
  sym_named_argument = 130,
  sym_yield_field = 131,
  sym_conv_clause = 132,
  sym_conv_chain = 133,
  sym_conv_step = 134,
  sym_limits_clause = 135,
  sym_limit_item = 136,
  sym_test_block = 137,
  sym_input_block = 138,
  sym_input_statement = 139,
  sym_field_assignment = 140,
  sym_expect_block = 141,
  sym_expect_statement = 142,
  sym_hit_assertion = 143,
  sym_options_block = 144,
  sym_option_entry = 145,
  sym_expression = 146,
  sym_binary_expression = 147,
  sym_unary_expression = 148,
  sym_if_expression = 149,
  sym_in_expression = 150,
  sym_not_in_expression = 151,
  sym_primary = 152,
  sym_parenthesized_expression = 153,
  sym_field_reference = 154,
  sym_function_call = 155,
  sym_aggregate_pipe_expression = 156,
  sym_close_reason_ref = 157,
  sym_comparison_operator = 158,
  sym_boolean = 159,
  aux_sym_source_file_repeat1 = 160,
  aux_sym_source_file_repeat2 = 161,
  aux_sym_meta_block_repeat1 = 162,
  aux_sym_events_block_repeat1 = 163,
  aux_sym_stage_chain_repeat1 = 164,
  aux_sym_stage_repeat1 = 165,
  aux_sym_match_params_repeat1 = 166,
  aux_sym_key_block_repeat1 = 167,
  aux_sym_on_event_block_repeat1 = 168,
  aux_sym_derive_block_repeat1 = 169,
  aux_sym_match_step_repeat1 = 170,
  aux_sym_pipe_chain_repeat1 = 171,
  aux_sym_score_block_repeat1 = 172,
  aux_sym_join_clause_repeat1 = 173,
  aux_sym_yield_clause_repeat1 = 174,
  aux_sym_yield_field_repeat1 = 175,
  aux_sym_conv_clause_repeat1 = 176,
  aux_sym_conv_chain_repeat1 = 177,
  aux_sym_conv_step_repeat1 = 178,
  aux_sym_limits_clause_repeat1 = 179,
  aux_sym_input_block_repeat1 = 180,
  aux_sym_input_statement_repeat1 = 181,
  aux_sym_expect_block_repeat1 = 182,
  aux_sym_options_block_repeat1 = 183,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_rule] = "rule",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_meta] = "meta",
  [anon_sym_EQ] = "=",
  [anon_sym_events] = "events",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_match] = "match",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_fixed] = "fixed",
  [anon_sym_session] = "session",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_key] = "key",
  [anon_sym_SEMI] = ";",
  [anon_sym_on] = "on",
  [anon_sym_event] = "event",
  [anon_sym_close] = "close",
  [anon_sym_and] = "and",
  [anon_sym_derive] = "derive",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_distinct] = "distinct",
  [anon_sym_count] = "count",
  [anon_sym_sum] = "sum",
  [anon_sym_avg] = "avg",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_score] = "score",
  [anon_sym_AT] = "@",
  [anon_sym_join] = "join",
  [anon_sym_snapshot] = "snapshot",
  [anon_sym_asof] = "asof",
  [anon_sym_within] = "within",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_entity] = "entity",
  [anon_sym_yield] = "yield",
  [sym_version_tag] = "version_tag",
  [sym_quoted_ident] = "quoted_ident",
  [anon_sym_conv] = "conv",
  [anon_sym_sort] = "sort",
  [anon_sym_top] = "top",
  [anon_sym_dedup] = "dedup",
  [anon_sym_where] = "where",
  [anon_sym_limits] = "limits",
  [anon_sym_max_memory] = "max_memory",
  [anon_sym_max_instances] = "max_instances",
  [anon_sym_max_throttle] = "max_throttle",
  [anon_sym_on_exceed] = "on_exceed",
  [anon_sym_test] = "test",
  [anon_sym_for] = "for",
  [anon_sym_input] = "input",
  [anon_sym_row] = "row",
  [anon_sym_tick] = "tick",
  [anon_sym_expect] = "expect",
  [anon_sym_hits] = "hits",
  [anon_sym_hit] = "hit",
  [anon_sym_close_reason] = "close_reason",
  [anon_sym_origin] = "origin",
  [anon_sym_entity_type] = "entity_type",
  [anon_sym_entity_id] = "entity_id",
  [anon_sym_field] = "field",
  [anon_sym_options] = "options",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [sym_derive_reference] = "derive_reference",
  [sym_variable] = "variable",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_duration] = "duration",
  [sym_source_file] = "source_file",
  [sym_use_declaration] = "use_declaration",
  [sym_rule_declaration] = "rule_declaration",
  [sym_meta_block] = "meta_block",
  [sym_meta_entry] = "meta_entry",
  [sym_events_block] = "events_block",
  [sym_event_declaration] = "event_declaration",
  [sym_stage_chain] = "stage_chain",
  [sym_stage] = "stage",
  [sym_match_clause] = "match_clause",
  [sym_match_params] = "match_params",
  [sym_window_spec] = "window_spec",
  [sym_key_block] = "key_block",
  [sym_key_item] = "key_item",
  [sym_on_event_block] = "on_event_block",
  [sym_on_close_block] = "on_close_block",
  [sym_and_close_block] = "and_close_block",
  [sym_derive_block] = "derive_block",
  [sym_derive_item] = "derive_item",
  [sym_match_step] = "match_step",
  [sym_step_branch] = "step_branch",
  [sym_source_expression] = "source_expression",
  [sym_pipe_chain] = "pipe_chain",
  [sym_transform] = "transform",
  [sym_measure] = "measure",
  [sym_score_output] = "score_output",
  [sym_score_call] = "score_call",
  [sym_score_block] = "score_block",
  [sym_score_item] = "score_item",
  [sym_join_clause] = "join_clause",
  [sym_join_mode] = "join_mode",
  [sym_join_condition] = "join_condition",
  [sym_entity_clause] = "entity_clause",
  [sym_yield_clause] = "yield_clause",
  [sym_yield_target] = "yield_target",
  [sym_named_argument] = "named_argument",
  [sym_yield_field] = "yield_field",
  [sym_conv_clause] = "conv_clause",
  [sym_conv_chain] = "conv_chain",
  [sym_conv_step] = "conv_step",
  [sym_limits_clause] = "limits_clause",
  [sym_limit_item] = "limit_item",
  [sym_test_block] = "test_block",
  [sym_input_block] = "input_block",
  [sym_input_statement] = "input_statement",
  [sym_field_assignment] = "field_assignment",
  [sym_expect_block] = "expect_block",
  [sym_expect_statement] = "expect_statement",
  [sym_hit_assertion] = "hit_assertion",
  [sym_options_block] = "options_block",
  [sym_option_entry] = "option_entry",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_if_expression] = "if_expression",
  [sym_in_expression] = "in_expression",
  [sym_not_in_expression] = "not_in_expression",
  [sym_primary] = "primary",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field_reference] = "field_reference",
  [sym_function_call] = "function_call",
  [sym_aggregate_pipe_expression] = "aggregate_pipe_expression",
  [sym_close_reason_ref] = "close_reason_ref",
  [sym_comparison_operator] = "comparison_operator",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_meta_block_repeat1] = "meta_block_repeat1",
  [aux_sym_events_block_repeat1] = "events_block_repeat1",
  [aux_sym_stage_chain_repeat1] = "stage_chain_repeat1",
  [aux_sym_stage_repeat1] = "stage_repeat1",
  [aux_sym_match_params_repeat1] = "match_params_repeat1",
  [aux_sym_key_block_repeat1] = "key_block_repeat1",
  [aux_sym_on_event_block_repeat1] = "on_event_block_repeat1",
  [aux_sym_derive_block_repeat1] = "derive_block_repeat1",
  [aux_sym_match_step_repeat1] = "match_step_repeat1",
  [aux_sym_pipe_chain_repeat1] = "pipe_chain_repeat1",
  [aux_sym_score_block_repeat1] = "score_block_repeat1",
  [aux_sym_join_clause_repeat1] = "join_clause_repeat1",
  [aux_sym_yield_clause_repeat1] = "yield_clause_repeat1",
  [aux_sym_yield_field_repeat1] = "yield_field_repeat1",
  [aux_sym_conv_clause_repeat1] = "conv_clause_repeat1",
  [aux_sym_conv_chain_repeat1] = "conv_chain_repeat1",
  [aux_sym_conv_step_repeat1] = "conv_step_repeat1",
  [aux_sym_limits_clause_repeat1] = "limits_clause_repeat1",
  [aux_sym_input_block_repeat1] = "input_block_repeat1",
  [aux_sym_input_statement_repeat1] = "input_statement_repeat1",
  [aux_sym_expect_block_repeat1] = "expect_block_repeat1",
  [aux_sym_options_block_repeat1] = "options_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_events] = anon_sym_events,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_derive] = anon_sym_derive,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_distinct] = anon_sym_distinct,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_avg] = anon_sym_avg,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_score] = anon_sym_score,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_snapshot] = anon_sym_snapshot,
  [anon_sym_asof] = anon_sym_asof,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_yield] = anon_sym_yield,
  [sym_version_tag] = sym_version_tag,
  [sym_quoted_ident] = sym_quoted_ident,
  [anon_sym_conv] = anon_sym_conv,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_dedup] = anon_sym_dedup,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_limits] = anon_sym_limits,
  [anon_sym_max_memory] = anon_sym_max_memory,
  [anon_sym_max_instances] = anon_sym_max_instances,
  [anon_sym_max_throttle] = anon_sym_max_throttle,
  [anon_sym_on_exceed] = anon_sym_on_exceed,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_row] = anon_sym_row,
  [anon_sym_tick] = anon_sym_tick,
  [anon_sym_expect] = anon_sym_expect,
  [anon_sym_hits] = anon_sym_hits,
  [anon_sym_hit] = anon_sym_hit,
  [anon_sym_close_reason] = anon_sym_close_reason,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_entity_type] = anon_sym_entity_type,
  [anon_sym_entity_id] = anon_sym_entity_id,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [sym_derive_reference] = sym_derive_reference,
  [sym_variable] = sym_variable,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_duration] = sym_duration,
  [sym_source_file] = sym_source_file,
  [sym_use_declaration] = sym_use_declaration,
  [sym_rule_declaration] = sym_rule_declaration,
  [sym_meta_block] = sym_meta_block,
  [sym_meta_entry] = sym_meta_entry,
  [sym_events_block] = sym_events_block,
  [sym_event_declaration] = sym_event_declaration,
  [sym_stage_chain] = sym_stage_chain,
  [sym_stage] = sym_stage,
  [sym_match_clause] = sym_match_clause,
  [sym_match_params] = sym_match_params,
  [sym_window_spec] = sym_window_spec,
  [sym_key_block] = sym_key_block,
  [sym_key_item] = sym_key_item,
  [sym_on_event_block] = sym_on_event_block,
  [sym_on_close_block] = sym_on_close_block,
  [sym_and_close_block] = sym_and_close_block,
  [sym_derive_block] = sym_derive_block,
  [sym_derive_item] = sym_derive_item,
  [sym_match_step] = sym_match_step,
  [sym_step_branch] = sym_step_branch,
  [sym_source_expression] = sym_source_expression,
  [sym_pipe_chain] = sym_pipe_chain,
  [sym_transform] = sym_transform,
  [sym_measure] = sym_measure,
  [sym_score_output] = sym_score_output,
  [sym_score_call] = sym_score_call,
  [sym_score_block] = sym_score_block,
  [sym_score_item] = sym_score_item,
  [sym_join_clause] = sym_join_clause,
  [sym_join_mode] = sym_join_mode,
  [sym_join_condition] = sym_join_condition,
  [sym_entity_clause] = sym_entity_clause,
  [sym_yield_clause] = sym_yield_clause,
  [sym_yield_target] = sym_yield_target,
  [sym_named_argument] = sym_named_argument,
  [sym_yield_field] = sym_yield_field,
  [sym_conv_clause] = sym_conv_clause,
  [sym_conv_chain] = sym_conv_chain,
  [sym_conv_step] = sym_conv_step,
  [sym_limits_clause] = sym_limits_clause,
  [sym_limit_item] = sym_limit_item,
  [sym_test_block] = sym_test_block,
  [sym_input_block] = sym_input_block,
  [sym_input_statement] = sym_input_statement,
  [sym_field_assignment] = sym_field_assignment,
  [sym_expect_block] = sym_expect_block,
  [sym_expect_statement] = sym_expect_statement,
  [sym_hit_assertion] = sym_hit_assertion,
  [sym_options_block] = sym_options_block,
  [sym_option_entry] = sym_option_entry,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_in_expression] = sym_in_expression,
  [sym_not_in_expression] = sym_not_in_expression,
  [sym_primary] = sym_primary,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_field_reference] = sym_field_reference,
  [sym_function_call] = sym_function_call,
  [sym_aggregate_pipe_expression] = sym_aggregate_pipe_expression,
  [sym_close_reason_ref] = sym_close_reason_ref,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_meta_block_repeat1] = aux_sym_meta_block_repeat1,
  [aux_sym_events_block_repeat1] = aux_sym_events_block_repeat1,
  [aux_sym_stage_chain_repeat1] = aux_sym_stage_chain_repeat1,
  [aux_sym_stage_repeat1] = aux_sym_stage_repeat1,
  [aux_sym_match_params_repeat1] = aux_sym_match_params_repeat1,
  [aux_sym_key_block_repeat1] = aux_sym_key_block_repeat1,
  [aux_sym_on_event_block_repeat1] = aux_sym_on_event_block_repeat1,
  [aux_sym_derive_block_repeat1] = aux_sym_derive_block_repeat1,
  [aux_sym_match_step_repeat1] = aux_sym_match_step_repeat1,
  [aux_sym_pipe_chain_repeat1] = aux_sym_pipe_chain_repeat1,
  [aux_sym_score_block_repeat1] = aux_sym_score_block_repeat1,
  [aux_sym_join_clause_repeat1] = aux_sym_join_clause_repeat1,
  [aux_sym_yield_clause_repeat1] = aux_sym_yield_clause_repeat1,
  [aux_sym_yield_field_repeat1] = aux_sym_yield_field_repeat1,
  [aux_sym_conv_clause_repeat1] = aux_sym_conv_clause_repeat1,
  [aux_sym_conv_chain_repeat1] = aux_sym_conv_chain_repeat1,
  [aux_sym_conv_step_repeat1] = aux_sym_conv_step_repeat1,
  [aux_sym_limits_clause_repeat1] = aux_sym_limits_clause_repeat1,
  [aux_sym_input_block_repeat1] = aux_sym_input_block_repeat1,
  [aux_sym_input_statement_repeat1] = aux_sym_input_statement_repeat1,
  [aux_sym_expect_block_repeat1] = aux_sym_expect_block_repeat1,
  [aux_sym_options_block_repeat1] = aux_sym_options_block_repeat1,
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
  [anon_sym_rule] = {
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
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_derive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distinct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_avg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snapshot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [sym_version_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_conv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dedup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_memory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_instances] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_throttle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_exceed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_row] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close_reason] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_derive_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_use_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_block] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_events_block] = {
    .visible = true,
    .named = true,
  },
  [sym_event_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_stage_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_stage] = {
    .visible = true,
    .named = true,
  },
  [sym_match_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_match_params] = {
    .visible = true,
    .named = true,
  },
  [sym_window_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_key_block] = {
    .visible = true,
    .named = true,
  },
  [sym_key_item] = {
    .visible = true,
    .named = true,
  },
  [sym_on_event_block] = {
    .visible = true,
    .named = true,
  },
  [sym_on_close_block] = {
    .visible = true,
    .named = true,
  },
  [sym_and_close_block] = {
    .visible = true,
    .named = true,
  },
  [sym_derive_block] = {
    .visible = true,
    .named = true,
  },
  [sym_derive_item] = {
    .visible = true,
    .named = true,
  },
  [sym_match_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_source_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_transform] = {
    .visible = true,
    .named = true,
  },
  [sym_measure] = {
    .visible = true,
    .named = true,
  },
  [sym_score_output] = {
    .visible = true,
    .named = true,
  },
  [sym_score_call] = {
    .visible = true,
    .named = true,
  },
  [sym_score_block] = {
    .visible = true,
    .named = true,
  },
  [sym_score_item] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_join_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_join_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_target] = {
    .visible = true,
    .named = true,
  },
  [sym_named_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_field] = {
    .visible = true,
    .named = true,
  },
  [sym_conv_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_conv_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_conv_step] = {
    .visible = true,
    .named = true,
  },
  [sym_limits_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_item] = {
    .visible = true,
    .named = true,
  },
  [sym_test_block] = {
    .visible = true,
    .named = true,
  },
  [sym_input_block] = {
    .visible = true,
    .named = true,
  },
  [sym_input_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_field_assignment] = {
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
  [sym_hit_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_options_block] = {
    .visible = true,
    .named = true,
  },
  [sym_option_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_pipe_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_close_reason_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
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
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_events_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stage_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_on_event_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_derive_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipe_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_score_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_join_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yield_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yield_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conv_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conv_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conv_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limits_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expect_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_field = 2,
  field_function = 3,
  field_id = 4,
  field_key = 5,
  field_label = 6,
  field_left = 7,
  field_logical = 8,
  field_method = 9,
  field_name = 10,
  field_object = 11,
  field_op = 12,
  field_operator = 13,
  field_right = 14,
  field_rule = 15,
  field_source = 16,
  field_type = 17,
  field_value = 18,
  field_version = 19,
  field_weight = 20,
  field_window = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_field] = "field",
  [field_function] = "function",
  [field_id] = "id",
  [field_key] = "key",
  [field_label] = "label",
  [field_left] = "left",
  [field_logical] = "logical",
  [field_method] = "method",
  [field_name] = "name",
  [field_object] = "object",
  [field_op] = "op",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_rule] = "rule",
  [field_source] = "source",
  [field_type] = "type",
  [field_value] = "value",
  [field_version] = "version",
  [field_weight] = "weight",
  [field_window] = "window",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 1},
  [22] = {.index = 34, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_alias, 0},
    {field_window, 2},
  [5] =
    {field_window, 0},
  [6] =
    {field_name, 1},
    {field_rule, 3},
  [8] =
    {field_field, 2},
    {field_object, 0},
  [10] =
    {field_object, 0},
  [11] =
    {field_version, 2},
    {field_window, 0},
  [13] =
    {field_window, 1},
  [14] =
    {field_id, 4},
    {field_type, 2},
  [16] =
    {field_name, 0},
    {field_value, 2},
  [18] =
    {field_function, 0},
  [19] =
    {field_source, 0},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_op, 0},
  [24] =
    {field_method, 2},
    {field_object, 0},
  [26] =
    {field_field, 2},
    {field_source, 0},
  [28] =
    {field_field, 0},
    {field_value, 2},
  [30] =
    {field_alias, 2},
  [31] =
    {field_logical, 0},
    {field_source, 2},
  [33] =
    {field_label, 0},
  [34] =
    {field_name, 0},
    {field_value, 2},
    {field_weight, 4},
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
  [6] = 3,
  [7] = 5,
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
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 12,
  [29] = 18,
  [30] = 19,
  [31] = 17,
  [32] = 21,
  [33] = 33,
  [34] = 22,
  [35] = 35,
  [36] = 23,
  [37] = 18,
  [38] = 11,
  [39] = 39,
  [40] = 17,
  [41] = 9,
  [42] = 12,
  [43] = 43,
  [44] = 19,
  [45] = 21,
  [46] = 22,
  [47] = 26,
  [48] = 48,
  [49] = 16,
  [50] = 23,
  [51] = 39,
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
  [71] = 4,
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
  [84] = 52,
  [85] = 4,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 87,
  [96] = 86,
  [97] = 53,
  [98] = 52,
  [99] = 99,
  [100] = 64,
  [101] = 67,
  [102] = 65,
  [103] = 66,
  [104] = 104,
  [105] = 105,
  [106] = 70,
  [107] = 68,
  [108] = 73,
  [109] = 109,
  [110] = 78,
  [111] = 64,
  [112] = 66,
  [113] = 68,
  [114] = 114,
  [115] = 57,
  [116] = 116,
  [117] = 117,
  [118] = 61,
  [119] = 119,
  [120] = 69,
  [121] = 65,
  [122] = 60,
  [123] = 123,
  [124] = 114,
  [125] = 125,
  [126] = 116,
  [127] = 53,
  [128] = 59,
  [129] = 129,
  [130] = 130,
  [131] = 72,
  [132] = 74,
  [133] = 83,
  [134] = 75,
  [135] = 58,
  [136] = 77,
  [137] = 82,
  [138] = 70,
  [139] = 54,
  [140] = 119,
  [141] = 56,
  [142] = 79,
  [143] = 143,
  [144] = 62,
  [145] = 63,
  [146] = 55,
  [147] = 147,
  [148] = 73,
  [149] = 119,
  [150] = 76,
  [151] = 114,
  [152] = 81,
  [153] = 80,
  [154] = 67,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 159,
  [170] = 170,
  [171] = 168,
  [172] = 172,
  [173] = 173,
  [174] = 167,
  [175] = 173,
  [176] = 176,
  [177] = 163,
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
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 277,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 286,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 288,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 287,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 339,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 375,
  [376] = 337,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 155,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 462,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 479,
  [491] = 462,
  [492] = 479,
  [493] = 493,
  [494] = 463,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 463,
  [513] = 513,
  [514] = 514,
  [515] = 465,
  [516] = 506,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 466,
  [522] = 522,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_identifier);
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        'a', 415,
        'c', 406,
        'd', 359,
        'e', 409,
        'f', 386,
        'h', 390,
        'i', 416,
        'j', 433,
        'k', 360,
        'l', 387,
        'm', 343,
        'o', 417,
        'r', 431,
        's', 349,
        't', 376,
        'u', 454,
        'v', 488,
        'w', 383,
        'y', 394,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '&', 3,
        ',', 221,
        '-', 8,
        '.', 242,
        '/', 5,
        ':', 213,
        ';', 230,
        '=', 7,
        '[', 243,
        'c', 93,
        'e', 117,
        'i', 109,
        'j', 125,
        'm', 16,
        'o', 108,
        '|', 9,
        '}', 207,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(220);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(298);
      END_STATE();
    case 188:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 189:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 195:
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '!', 6,
        '"', 2,
        '%', 324,
        '&', 3,
        '(', 226,
        ')', 227,
        '*', 322,
        '+', 320,
        ',', 221,
        '-', 321,
        '.', 242,
        '/', 323,
        ':', 213,
        ';', 230,
        '<', 218,
        '=', 7,
        '>', 219,
        '@', 260,
        '[', 243,
        ']', 244,
        'a', 97,
        'c', 88,
        'd', 34,
        'e', 92,
        'f', 69,
        'h', 72,
        'i', 98,
        'k', 35,
        'l', 70,
        'm', 14,
        'n', 121,
        'o', 99,
        'r', 118,
        's', 22,
        't', 57,
        'u', 148,
        'v', 196,
        'w', 65,
        'y', 75,
        '{', 206,
        '|', 245,
        '}', 207,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_events);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_session);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_event);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '_') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_derive);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(241);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_distinct);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_score);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_snapshot);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_snapshot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_asof);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_asof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_within);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_entity);
      if (lookahead == '_') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_yield);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_version_tag);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_version_tag);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_conv);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_conv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_dedup);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_dedup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_limits);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_limits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_max_memory);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_max_instances);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_max_throttle);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_on_exceed);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_row);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_row);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_tick);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_tick);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_expect);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_expect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_hits);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_hits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_hit);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_hit);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_close_reason);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_close_reason);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_entity_type);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_entity_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_entity_id);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_entity_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_then);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'p') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_duration);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == 't') ADVANCE(446);
      if (('u' <= lookahead && lookahead <= 'y')) ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == 't') ADVANCE(447);
      if (('u' <= lookahead && lookahead <= 'y')) ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'x') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'u') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'u') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == 'v') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 'u') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 's') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
  [2] = {.lex_state = 350},
  [3] = {.lex_state = 350},
  [4] = {.lex_state = 199},
  [5] = {.lex_state = 350},
  [6] = {.lex_state = 350},
  [7] = {.lex_state = 350},
  [8] = {.lex_state = 350},
  [9] = {.lex_state = 350},
  [10] = {.lex_state = 350},
  [11] = {.lex_state = 350},
  [12] = {.lex_state = 350},
  [13] = {.lex_state = 350},
  [14] = {.lex_state = 350},
  [15] = {.lex_state = 350},
  [16] = {.lex_state = 350},
  [17] = {.lex_state = 350},
  [18] = {.lex_state = 350},
  [19] = {.lex_state = 350},
  [20] = {.lex_state = 350},
  [21] = {.lex_state = 350},
  [22] = {.lex_state = 350},
  [23] = {.lex_state = 350},
  [24] = {.lex_state = 350},
  [25] = {.lex_state = 350},
  [26] = {.lex_state = 350},
  [27] = {.lex_state = 350},
  [28] = {.lex_state = 350},
  [29] = {.lex_state = 350},
  [30] = {.lex_state = 350},
  [31] = {.lex_state = 350},
  [32] = {.lex_state = 350},
  [33] = {.lex_state = 350},
  [34] = {.lex_state = 350},
  [35] = {.lex_state = 350},
  [36] = {.lex_state = 350},
  [37] = {.lex_state = 350},
  [38] = {.lex_state = 350},
  [39] = {.lex_state = 350},
  [40] = {.lex_state = 350},
  [41] = {.lex_state = 350},
  [42] = {.lex_state = 350},
  [43] = {.lex_state = 350},
  [44] = {.lex_state = 350},
  [45] = {.lex_state = 350},
  [46] = {.lex_state = 350},
  [47] = {.lex_state = 350},
  [48] = {.lex_state = 350},
  [49] = {.lex_state = 350},
  [50] = {.lex_state = 350},
  [51] = {.lex_state = 350},
  [52] = {.lex_state = 199},
  [53] = {.lex_state = 199},
  [54] = {.lex_state = 199},
  [55] = {.lex_state = 199},
  [56] = {.lex_state = 199},
  [57] = {.lex_state = 199},
  [58] = {.lex_state = 199},
  [59] = {.lex_state = 199},
  [60] = {.lex_state = 199},
  [61] = {.lex_state = 199},
  [62] = {.lex_state = 199},
  [63] = {.lex_state = 199},
  [64] = {.lex_state = 199},
  [65] = {.lex_state = 199},
  [66] = {.lex_state = 199},
  [67] = {.lex_state = 199},
  [68] = {.lex_state = 199},
  [69] = {.lex_state = 199},
  [70] = {.lex_state = 199},
  [71] = {.lex_state = 400},
  [72] = {.lex_state = 199},
  [73] = {.lex_state = 199},
  [74] = {.lex_state = 199},
  [75] = {.lex_state = 199},
  [76] = {.lex_state = 199},
  [77] = {.lex_state = 199},
  [78] = {.lex_state = 199},
  [79] = {.lex_state = 199},
  [80] = {.lex_state = 199},
  [81] = {.lex_state = 199},
  [82] = {.lex_state = 199},
  [83] = {.lex_state = 199},
  [84] = {.lex_state = 400},
  [85] = {.lex_state = 199},
  [86] = {.lex_state = 199},
  [87] = {.lex_state = 199},
  [88] = {.lex_state = 199},
  [89] = {.lex_state = 199},
  [90] = {.lex_state = 199},
  [91] = {.lex_state = 199},
  [92] = {.lex_state = 199},
  [93] = {.lex_state = 199},
  [94] = {.lex_state = 199},
  [95] = {.lex_state = 199},
  [96] = {.lex_state = 199},
  [97] = {.lex_state = 400},
  [98] = {.lex_state = 199},
  [99] = {.lex_state = 400},
  [100] = {.lex_state = 400},
  [101] = {.lex_state = 400},
  [102] = {.lex_state = 400},
  [103] = {.lex_state = 400},
  [104] = {.lex_state = 199},
  [105] = {.lex_state = 199},
  [106] = {.lex_state = 400},
  [107] = {.lex_state = 400},
  [108] = {.lex_state = 400},
  [109] = {.lex_state = 199},
  [110] = {.lex_state = 400},
  [111] = {.lex_state = 199},
  [112] = {.lex_state = 199},
  [113] = {.lex_state = 199},
  [114] = {.lex_state = 199},
  [115] = {.lex_state = 400},
  [116] = {.lex_state = 199},
  [117] = {.lex_state = 199},
  [118] = {.lex_state = 400},
  [119] = {.lex_state = 199},
  [120] = {.lex_state = 400},
  [121] = {.lex_state = 199},
  [122] = {.lex_state = 400},
  [123] = {.lex_state = 199},
  [124] = {.lex_state = 199},
  [125] = {.lex_state = 350},
  [126] = {.lex_state = 199},
  [127] = {.lex_state = 199},
  [128] = {.lex_state = 400},
  [129] = {.lex_state = 350},
  [130] = {.lex_state = 199},
  [131] = {.lex_state = 400},
  [132] = {.lex_state = 400},
  [133] = {.lex_state = 400},
  [134] = {.lex_state = 400},
  [135] = {.lex_state = 400},
  [136] = {.lex_state = 400},
  [137] = {.lex_state = 400},
  [138] = {.lex_state = 199},
  [139] = {.lex_state = 400},
  [140] = {.lex_state = 199},
  [141] = {.lex_state = 400},
  [142] = {.lex_state = 400},
  [143] = {.lex_state = 199},
  [144] = {.lex_state = 400},
  [145] = {.lex_state = 400},
  [146] = {.lex_state = 400},
  [147] = {.lex_state = 199},
  [148] = {.lex_state = 199},
  [149] = {.lex_state = 199},
  [150] = {.lex_state = 400},
  [151] = {.lex_state = 199},
  [152] = {.lex_state = 400},
  [153] = {.lex_state = 400},
  [154] = {.lex_state = 199},
  [155] = {.lex_state = 350},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 199},
  [158] = {.lex_state = 199},
  [159] = {.lex_state = 199},
  [160] = {.lex_state = 199},
  [161] = {.lex_state = 199},
  [162] = {.lex_state = 199},
  [163] = {.lex_state = 199},
  [164] = {.lex_state = 199},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 199},
  [167] = {.lex_state = 199},
  [168] = {.lex_state = 199},
  [169] = {.lex_state = 199},
  [170] = {.lex_state = 199},
  [171] = {.lex_state = 199},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 199},
  [174] = {.lex_state = 199},
  [175] = {.lex_state = 199},
  [176] = {.lex_state = 199},
  [177] = {.lex_state = 199},
  [178] = {.lex_state = 199},
  [179] = {.lex_state = 199},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 199},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 199},
  [184] = {.lex_state = 199},
  [185] = {.lex_state = 199},
  [186] = {.lex_state = 199},
  [187] = {.lex_state = 199},
  [188] = {.lex_state = 199},
  [189] = {.lex_state = 411},
  [190] = {.lex_state = 199},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 199},
  [193] = {.lex_state = 199},
  [194] = {.lex_state = 411},
  [195] = {.lex_state = 411},
  [196] = {.lex_state = 411},
  [197] = {.lex_state = 199},
  [198] = {.lex_state = 199},
  [199] = {.lex_state = 199},
  [200] = {.lex_state = 411},
  [201] = {.lex_state = 411},
  [202] = {.lex_state = 411},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 199},
  [205] = {.lex_state = 199},
  [206] = {.lex_state = 199},
  [207] = {.lex_state = 199},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 199},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 199},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 199},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 199},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 411},
  [219] = {.lex_state = 199},
  [220] = {.lex_state = 199},
  [221] = {.lex_state = 411},
  [222] = {.lex_state = 411},
  [223] = {.lex_state = 411},
  [224] = {.lex_state = 199},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 199},
  [227] = {.lex_state = 199},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 411},
  [230] = {.lex_state = 411},
  [231] = {.lex_state = 199},
  [232] = {.lex_state = 411},
  [233] = {.lex_state = 199},
  [234] = {.lex_state = 411},
  [235] = {.lex_state = 199},
  [236] = {.lex_state = 199},
  [237] = {.lex_state = 411},
  [238] = {.lex_state = 411},
  [239] = {.lex_state = 199},
  [240] = {.lex_state = 411},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 411},
  [243] = {.lex_state = 199},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 411},
  [248] = {.lex_state = 199},
  [249] = {.lex_state = 411},
  [250] = {.lex_state = 199},
  [251] = {.lex_state = 411},
  [252] = {.lex_state = 199},
  [253] = {.lex_state = 411},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 199},
  [257] = {.lex_state = 411},
  [258] = {.lex_state = 411},
  [259] = {.lex_state = 199},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 199},
  [262] = {.lex_state = 411},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 199},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 199},
  [267] = {.lex_state = 411},
  [268] = {.lex_state = 199},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 199},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 199},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 199},
  [275] = {.lex_state = 199},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 199},
  [278] = {.lex_state = 199},
  [279] = {.lex_state = 199},
  [280] = {.lex_state = 199},
  [281] = {.lex_state = 199},
  [282] = {.lex_state = 199},
  [283] = {.lex_state = 199},
  [284] = {.lex_state = 411},
  [285] = {.lex_state = 199},
  [286] = {.lex_state = 199},
  [287] = {.lex_state = 199},
  [288] = {.lex_state = 199},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 199},
  [291] = {.lex_state = 199},
  [292] = {.lex_state = 199},
  [293] = {.lex_state = 199},
  [294] = {.lex_state = 199},
  [295] = {.lex_state = 411},
  [296] = {.lex_state = 199},
  [297] = {.lex_state = 411},
  [298] = {.lex_state = 199},
  [299] = {.lex_state = 199},
  [300] = {.lex_state = 199},
  [301] = {.lex_state = 199},
  [302] = {.lex_state = 199},
  [303] = {.lex_state = 199},
  [304] = {.lex_state = 199},
  [305] = {.lex_state = 199},
  [306] = {.lex_state = 199},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 199},
  [309] = {.lex_state = 199},
  [310] = {.lex_state = 199},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 199},
  [313] = {.lex_state = 199},
  [314] = {.lex_state = 199},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 199},
  [318] = {.lex_state = 199},
  [319] = {.lex_state = 411},
  [320] = {.lex_state = 411},
  [321] = {.lex_state = 199},
  [322] = {.lex_state = 199},
  [323] = {.lex_state = 199},
  [324] = {.lex_state = 411},
  [325] = {.lex_state = 411},
  [326] = {.lex_state = 199},
  [327] = {.lex_state = 411},
  [328] = {.lex_state = 199},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 199},
  [331] = {.lex_state = 199},
  [332] = {.lex_state = 411},
  [333] = {.lex_state = 199},
  [334] = {.lex_state = 199},
  [335] = {.lex_state = 199},
  [336] = {.lex_state = 411},
  [337] = {.lex_state = 199},
  [338] = {.lex_state = 199},
  [339] = {.lex_state = 199},
  [340] = {.lex_state = 199},
  [341] = {.lex_state = 411},
  [342] = {.lex_state = 411},
  [343] = {.lex_state = 199},
  [344] = {.lex_state = 199},
  [345] = {.lex_state = 411},
  [346] = {.lex_state = 199},
  [347] = {.lex_state = 411},
  [348] = {.lex_state = 199},
  [349] = {.lex_state = 199},
  [350] = {.lex_state = 199},
  [351] = {.lex_state = 199},
  [352] = {.lex_state = 411},
  [353] = {.lex_state = 199},
  [354] = {.lex_state = 199},
  [355] = {.lex_state = 199},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 199},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 199},
  [361] = {.lex_state = 199},
  [362] = {.lex_state = 199},
  [363] = {.lex_state = 199},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 199},
  [366] = {.lex_state = 411},
  [367] = {.lex_state = 411},
  [368] = {.lex_state = 199},
  [369] = {.lex_state = 199},
  [370] = {.lex_state = 411},
  [371] = {.lex_state = 199},
  [372] = {.lex_state = 199},
  [373] = {.lex_state = 199},
  [374] = {.lex_state = 199},
  [375] = {.lex_state = 199},
  [376] = {.lex_state = 199},
  [377] = {.lex_state = 411},
  [378] = {.lex_state = 199},
  [379] = {.lex_state = 199},
  [380] = {.lex_state = 199},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 199},
  [383] = {.lex_state = 411},
  [384] = {.lex_state = 199},
  [385] = {.lex_state = 199},
  [386] = {.lex_state = 199},
  [387] = {.lex_state = 199},
  [388] = {.lex_state = 411},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 411},
  [391] = {.lex_state = 199},
  [392] = {.lex_state = 199},
  [393] = {.lex_state = 199},
  [394] = {.lex_state = 199},
  [395] = {.lex_state = 199},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 199},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 199},
  [400] = {.lex_state = 199},
  [401] = {.lex_state = 199},
  [402] = {.lex_state = 199},
  [403] = {.lex_state = 199},
  [404] = {.lex_state = 199},
  [405] = {.lex_state = 199},
  [406] = {.lex_state = 411},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 199},
  [410] = {.lex_state = 199},
  [411] = {.lex_state = 199},
  [412] = {.lex_state = 199},
  [413] = {.lex_state = 199},
  [414] = {.lex_state = 199},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 199},
  [417] = {.lex_state = 411},
  [418] = {.lex_state = 199},
  [419] = {.lex_state = 4},
  [420] = {.lex_state = 199},
  [421] = {.lex_state = 199},
  [422] = {.lex_state = 199},
  [423] = {.lex_state = 199},
  [424] = {.lex_state = 199},
  [425] = {.lex_state = 199},
  [426] = {.lex_state = 4},
  [427] = {.lex_state = 199},
  [428] = {.lex_state = 199},
  [429] = {.lex_state = 199},
  [430] = {.lex_state = 199},
  [431] = {.lex_state = 199},
  [432] = {.lex_state = 199},
  [433] = {.lex_state = 199},
  [434] = {.lex_state = 199},
  [435] = {.lex_state = 199},
  [436] = {.lex_state = 199},
  [437] = {.lex_state = 199},
  [438] = {.lex_state = 199},
  [439] = {.lex_state = 199},
  [440] = {.lex_state = 199},
  [441] = {.lex_state = 199},
  [442] = {.lex_state = 199},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 199},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 199},
  [447] = {.lex_state = 199},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 199},
  [450] = {.lex_state = 4},
  [451] = {.lex_state = 199},
  [452] = {.lex_state = 411},
  [453] = {.lex_state = 199},
  [454] = {.lex_state = 199},
  [455] = {.lex_state = 199},
  [456] = {.lex_state = 411},
  [457] = {.lex_state = 199},
  [458] = {.lex_state = 199},
  [459] = {.lex_state = 199},
  [460] = {.lex_state = 4},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 411},
  [463] = {.lex_state = 199},
  [464] = {.lex_state = 199},
  [465] = {.lex_state = 199},
  [466] = {.lex_state = 199},
  [467] = {.lex_state = 199},
  [468] = {.lex_state = 199},
  [469] = {.lex_state = 199},
  [470] = {.lex_state = 199},
  [471] = {.lex_state = 199},
  [472] = {.lex_state = 199},
  [473] = {.lex_state = 199},
  [474] = {.lex_state = 199},
  [475] = {.lex_state = 411},
  [476] = {.lex_state = 199},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 199},
  [479] = {.lex_state = 199},
  [480] = {.lex_state = 411},
  [481] = {.lex_state = 199},
  [482] = {.lex_state = 199},
  [483] = {.lex_state = 199},
  [484] = {.lex_state = 199},
  [485] = {.lex_state = 199},
  [486] = {.lex_state = 199},
  [487] = {.lex_state = 199},
  [488] = {.lex_state = 199},
  [489] = {.lex_state = 199},
  [490] = {.lex_state = 199},
  [491] = {.lex_state = 411},
  [492] = {.lex_state = 199},
  [493] = {.lex_state = 411},
  [494] = {.lex_state = 199},
  [495] = {.lex_state = 199},
  [496] = {.lex_state = 199},
  [497] = {.lex_state = 199},
  [498] = {.lex_state = 199},
  [499] = {.lex_state = 199},
  [500] = {.lex_state = 199},
  [501] = {.lex_state = 4},
  [502] = {.lex_state = 199},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 199},
  [505] = {.lex_state = 199},
  [506] = {.lex_state = 199},
  [507] = {.lex_state = 199},
  [508] = {.lex_state = 411},
  [509] = {.lex_state = 199},
  [510] = {.lex_state = 199},
  [511] = {.lex_state = 199},
  [512] = {.lex_state = 199},
  [513] = {.lex_state = 199},
  [514] = {.lex_state = 411},
  [515] = {.lex_state = 199},
  [516] = {.lex_state = 199},
  [517] = {.lex_state = 199},
  [518] = {.lex_state = 199},
  [519] = {.lex_state = 199},
  [520] = {.lex_state = 411},
  [521] = {.lex_state = 199},
  [522] = {.lex_state = 411},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_derive] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_distinct] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_avg] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_score] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_snapshot] = ACTIONS(1),
    [anon_sym_asof] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [sym_version_tag] = ACTIONS(1),
    [sym_quoted_ident] = ACTIONS(1),
    [anon_sym_conv] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_dedup] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_limits] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_row] = ACTIONS(1),
    [anon_sym_tick] = ACTIONS(1),
    [anon_sym_expect] = ACTIONS(1),
    [anon_sym_hits] = ACTIONS(1),
    [anon_sym_hit] = ACTIONS(1),
    [anon_sym_close_reason] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_entity_type] = ACTIONS(1),
    [anon_sym_entity_id] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(519),
    [sym_use_declaration] = STATE(158),
    [sym_rule_declaration] = STATE(190),
    [sym_test_block] = STATE(190),
    [aux_sym_source_file_repeat1] = STATE(158),
    [aux_sym_source_file_repeat2] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_rule] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(90), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [52] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [104] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    STATE(361), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(33), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [148] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [200] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [304] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(130), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(116), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(105), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [451] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(91), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(113), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [549] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(143), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(117), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [647] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(109), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [696] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(101), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [745] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(151), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [794] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(108), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [843] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(106), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [892] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(154), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [941] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(103), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [990] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(102), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [1039] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(100), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [1088] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(93), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1137] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(104), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1186] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(149), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1235] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(119), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1284] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(107), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [1333] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(148), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1382] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(138), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(124), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1480] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(112), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1529] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(123), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1578] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(121), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1627] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(147), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1676] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(111), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(73), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1774] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(89), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(95), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1872] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(114), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1921] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(126), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1970] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(68), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2019] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_if,
    STATE(88), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2068] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(70), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2117] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(66), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2166] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2215] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(140), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2264] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_close_reason,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(99), 1,
      sym_expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(144), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(146), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [2313] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(67), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2362] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(64), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2411] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2460] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(372), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(71), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2498] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    STATE(376), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(79), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2533] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(85), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2563] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(89), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2593] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(93), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2623] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(97), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2653] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(101), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2683] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(105), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2713] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(109), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2743] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(113), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2773] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(117), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2803] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(121), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2833] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 8,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
  [2877] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
  [2923] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 16,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2959] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
  [3007] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(149), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3039] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(153), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3069] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(125), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3101] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    STATE(339), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(35), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [3139] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(165), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3169] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 14,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3207] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(169), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3237] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(173), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3267] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(177), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3297] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(181), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3327] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(185), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3357] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(189), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3387] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(193), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3417] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(197), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3447] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(201), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3477] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(205), 18,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    STATE(374), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(73), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [3539] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(361), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(33), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3577] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(288), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3626] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(333), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3675] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(223), 1,
      anon_sym_AMP_AMP,
    ACTIONS(225), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    STATE(351), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(369), 1,
      sym_pipe_chain,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3724] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(285), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3773] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(318), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3822] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(277), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3871] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(286), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3920] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(223), 1,
      anon_sym_AMP_AMP,
    ACTIONS(225), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    STATE(351), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(379), 1,
      sym_pipe_chain,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3969] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(292), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4018] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(287), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4067] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    STATE(308), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(337), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(81), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4145] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(372), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(71), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 4,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_identifier,
    ACTIONS(127), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(265), 2,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4291] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 14,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4357] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4401] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(143), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(151), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4497] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 12,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4527] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4594] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(125), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4635] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(125), 10,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4666] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(151), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(149), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4693] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_else,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4759] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4802] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4868] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(279), 1,
      anon_sym_then,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [4934] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(223), 1,
      anon_sym_AMP_AMP,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5000] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5043] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(283), 1,
      anon_sym_else,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5086] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    STATE(368), 1,
      sym_primary,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [5121] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5164] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(376), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(79), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5214] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    STATE(371), 1,
      sym_primary,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 5,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      sym_duration,
    STATE(62), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [5249] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5453] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(125), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5503] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(289), 1,
      anon_sym_then,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5592] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5704] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5747] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(125), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5780] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_then,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5846] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(141), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_else,
    STATE(37), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 17,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5935] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_in,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(223), 1,
      anon_sym_AMP_AMP,
    ACTIONS(225), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 12,
      anon_sym_LPAREN,
      anon_sym_close_reason,
      anon_sym_DASH,
      anon_sym_if,
      sym_derive_reference,
      sym_variable,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_duration,
      sym_identifier,
  [5996] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 8,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_join,
      anon_sym_EQ_EQ,
      anon_sym_entity,
  [6016] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      anon_sym_key,
    ACTIONS(309), 1,
      anon_sym_on,
    ACTIONS(311), 1,
      anon_sym_and,
    ACTIONS(313), 1,
      anon_sym_derive,
    STATE(160), 1,
      sym_key_block,
    STATE(187), 1,
      sym_on_event_block,
    STATE(410), 1,
      sym_derive_block,
    STATE(274), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6048] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(192), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
    STATE(193), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6073] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(82), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6093] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_on,
    ACTIONS(311), 1,
      anon_sym_and,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_on_event_block,
    STATE(476), 1,
      sym_derive_block,
    STATE(313), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6119] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(184), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6139] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(74), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6159] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(120), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6179] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(132), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6199] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_join,
      anon_sym_EQ_EQ,
      anon_sym_entity,
  [6213] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_conv_step,
    STATE(166), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(327), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6233] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(118), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6253] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(54), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6273] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(137), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6293] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_conv_step,
    STATE(166), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(332), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6313] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(139), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6333] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 8,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_join,
      anon_sym_EQ_EQ,
      anon_sym_entity,
  [6347] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(142), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(323), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6367] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(61), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6387] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(79), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6407] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(178), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6427] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(69), 1,
      sym_measure,
    STATE(505), 1,
      sym_transform,
    ACTIONS(319), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6447] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(129), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6464] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_and,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym_on,
    STATE(510), 1,
      sym_derive_block,
    STATE(266), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6487] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(180), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(340), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6504] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(33), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6521] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(180), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(345), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6538] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(306), 1,
      sym_conv_step,
    STATE(170), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(332), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6555] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(125), 1,
      sym_comparison_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6572] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(445), 1,
      sym_comparison_operator,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6589] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(398), 1,
      sym_comparison_operator,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6606] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_and,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym_on,
    STATE(476), 1,
      sym_derive_block,
    STATE(313), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6629] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_score,
    ACTIONS(355), 1,
      anon_sym_field,
    STATE(422), 1,
      sym_hit_assertion,
    ACTIONS(353), 4,
      anon_sym_close_reason,
      anon_sym_origin,
      anon_sym_entity_type,
      anon_sym_entity_id,
  [6648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(189), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6668] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(197), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6686] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(182), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(345), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6700] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_use,
    STATE(192), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [6716] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    STATE(197), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(189), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(189), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(189), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6794] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 1,
      anon_sym_rule,
    ACTIONS(382), 1,
      anon_sym_test,
    STATE(197), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6812] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6823] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(391), 1,
      sym_conv_step,
    ACTIONS(332), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(196), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(195), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6870] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(239), 1,
      sym_source_expression,
    STATE(303), 1,
      sym_step_branch,
    STATE(194), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6887] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_join,
    ACTIONS(387), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(209), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [6902] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_RBRACE,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6913] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      anon_sym_row,
    ACTIONS(397), 1,
      anon_sym_tick,
    STATE(210), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [6930] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_hits,
    ACTIONS(403), 1,
      anon_sym_hit,
    STATE(214), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [6947] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_row,
    ACTIONS(397), 1,
      anon_sym_tick,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(205), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [6964] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_AMP_AMP,
    STATE(208), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(410), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [6979] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_join,
    ACTIONS(412), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(209), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [6994] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_row,
    ACTIONS(422), 1,
      anon_sym_tick,
    STATE(210), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [7011] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(425), 5,
      anon_sym_RBRACE,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [7022] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(429), 1,
      anon_sym_hits,
    ACTIONS(432), 1,
      anon_sym_hit,
    STATE(212), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [7039] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_AMP_AMP,
    STATE(215), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(437), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7054] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_hits,
    ACTIONS(403), 1,
      anon_sym_hit,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(212), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [7071] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_AMP_AMP,
    STATE(208), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(441), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7086] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [7103] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_join,
    ACTIONS(451), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(203), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(229), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7132] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_and,
      anon_sym_derive,
  [7142] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_conv,
    STATE(348), 1,
      sym_conv_clause,
    ACTIONS(459), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [7156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(221), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [7170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(314), 1,
      sym_field_reference,
    STATE(472), 1,
      sym_match_params,
  [7186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(253), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [7200] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_and,
      anon_sym_derive,
  [7210] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DASH_GT,
    ACTIONS(478), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7222] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    STATE(351), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(385), 1,
      sym_pipe_chain,
  [7238] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_score,
    STATE(271), 1,
      sym_score_output,
    STATE(265), 2,
      sym_score_call,
      sym_score_block,
  [7252] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DASH_GT,
    ACTIONS(488), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(249), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(242), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7292] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(498), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_rule,
      anon_sym_test,
  [7302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7316] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_match,
    STATE(217), 1,
      sym_match_clause,
    STATE(260), 1,
      sym_stage,
    STATE(268), 1,
      sym_stage_chain,
  [7332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7346] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_score,
    STATE(289), 1,
      sym_score_output,
    STATE(265), 2,
      sym_score_call,
      sym_score_block,
  [7360] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_match,
    STATE(217), 1,
      sym_match_clause,
    STATE(260), 1,
      sym_stage,
    STATE(278), 1,
      sym_stage_chain,
  [7376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(363), 1,
      sym_named_argument,
    STATE(419), 1,
      sym_yield_field,
  [7392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [7406] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    ACTIONS(520), 1,
      anon_sym_AMP_AMP,
    STATE(350), 1,
      sym_pipe_chain,
    STATE(351), 1,
      aux_sym_pipe_chain_repeat1,
  [7422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(293), 1,
      sym_named_argument,
    STATE(419), 1,
      sym_yield_field,
  [7438] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(522), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7462] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_score,
    STATE(315), 1,
      sym_score_output,
    STATE(265), 2,
      sym_score_call,
      sym_score_block,
  [7476] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DASH_GT,
    ACTIONS(526), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7488] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DASH_GT,
    ACTIONS(530), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7500] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7524] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_meta,
    ACTIONS(541), 1,
      anon_sym_events,
    STATE(233), 1,
      sym_events_block,
    STATE(343), 1,
      sym_meta_block,
  [7540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(249), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7554] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_conv,
    STATE(375), 1,
      sym_conv_clause,
    ACTIONS(548), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [7568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(296), 1,
      sym_named_argument,
    STATE(419), 1,
      sym_yield_field,
  [7584] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(253), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [7612] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_PIPE_GT,
    ACTIONS(557), 1,
      anon_sym_entity,
    STATE(329), 1,
      aux_sym_stage_chain_repeat1,
    STATE(346), 1,
      sym_entity_clause,
  [7628] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DASH_GT,
    ACTIONS(559), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7640] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_score,
    STATE(311), 1,
      sym_score_output,
    STATE(265), 2,
      sym_score_call,
      sym_score_block,
  [7654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [7668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(221), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [7682] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_score,
    STATE(263), 1,
      sym_score_output,
    STATE(265), 2,
      sym_score_call,
      sym_score_block,
  [7696] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_PIPE_GT,
    ACTIONS(557), 1,
      anon_sym_entity,
    STATE(254), 1,
      aux_sym_stage_chain_repeat1,
    STATE(378), 1,
      sym_entity_clause,
  [7712] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      anon_sym_PIPE_PIPE,
    STATE(261), 1,
      aux_sym_match_step_repeat1,
  [7725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(246), 1,
      sym_join_condition,
    STATE(430), 1,
      sym_field_reference,
  [7738] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7747] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(576), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [7756] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(578), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7765] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      sym_derive_block,
  [7778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(232), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7789] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      anon_sym_limits,
    STATE(498), 1,
      sym_limits_clause,
  [7802] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
    ACTIONS(588), 1,
      anon_sym_DOT,
    STATE(316), 1,
      aux_sym_yield_field_repeat1,
  [7815] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(590), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [7824] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(592), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7833] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(594), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [7842] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(596), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7851] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      sym_derive_block,
  [7864] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(275), 1,
      aux_sym_conv_chain_repeat1,
  [7877] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(603), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7886] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [7899] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_limits,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(474), 1,
      sym_limits_clause,
  [7912] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(609), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [7921] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_input_statement_repeat1,
  [7934] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(615), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [7943] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_hit,
    ACTIONS(617), 2,
      anon_sym_RBRACE,
      anon_sym_hits,
  [7954] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_match,
    STATE(217), 1,
      sym_match_clause,
    STATE(356), 1,
      sym_stage,
  [7967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(213), 1,
      sym_join_condition,
    STATE(430), 1,
      sym_field_reference,
  [7980] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [7993] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8006] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8019] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8032] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8041] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [8050] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_yield_clause_repeat1,
  [8063] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8076] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_yield_clause_repeat1,
  [8089] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_hit,
    ACTIONS(639), 2,
      anon_sym_RBRACE,
      anon_sym_hits,
  [8100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(645), 1,
      sym_string,
    STATE(280), 1,
      sym_field_assignment,
  [8113] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_yield_clause_repeat1,
  [8126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(223), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [8137] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_session,
    ACTIONS(651), 1,
      sym_duration,
    STATE(432), 1,
      sym_window_spec,
  [8150] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_input_statement_repeat1,
  [8163] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(658), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [8172] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    STATE(275), 1,
      aux_sym_conv_chain_repeat1,
  [8185] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_yield_clause_repeat1,
  [8198] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_PIPE_PIPE,
    STATE(323), 1,
      aux_sym_match_step_repeat1,
  [8211] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_yield_clause_repeat1,
  [8224] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(675), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [8233] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    STATE(301), 1,
      aux_sym_conv_chain_repeat1,
  [8246] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(679), 1,
      anon_sym_EQ,
    STATE(269), 1,
      aux_sym_yield_field_repeat1,
  [8259] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8272] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COLON,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_match_params_repeat1,
  [8285] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(688), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8294] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(530), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8303] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_session,
    ACTIONS(651), 1,
      sym_duration,
    STATE(457), 1,
      sym_window_spec,
  [8316] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_derive,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(510), 1,
      sym_derive_block,
  [8329] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_match_params_repeat1,
  [8342] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8351] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_EQ,
    ACTIONS(696), 1,
      anon_sym_DOT,
    STATE(316), 1,
      aux_sym_yield_field_repeat1,
  [8364] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_session,
    ACTIONS(651), 1,
      sym_duration,
    STATE(412), 1,
      sym_window_spec,
  [8377] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(257), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [8401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(645), 1,
      sym_string,
    STATE(362), 1,
      sym_field_assignment,
  [8414] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(701), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8423] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_input_statement_repeat1,
  [8436] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      aux_sym_match_step_repeat1,
  [8449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(239), 1,
      sym_source_expression,
    STATE(387), 1,
      sym_step_branch,
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(447), 1,
      sym_yield_target,
  [8475] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_COLON,
    STATE(309), 1,
      aux_sym_match_params_repeat1,
  [8488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(258), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [8499] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8512] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_PIPE_GT,
    ACTIONS(719), 1,
      anon_sym_entity,
    STATE(329), 1,
      aux_sym_stage_chain_repeat1,
  [8525] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_snapshot,
    ACTIONS(723), 1,
      anon_sym_asof,
    STATE(442), 1,
      sym_join_mode,
  [8538] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_options,
    STATE(436), 1,
      sym_options_block,
  [8551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_AMP_AMP,
  [8564] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
  [8577] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(737), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8586] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_distinct,
    STATE(505), 1,
      sym_transform,
  [8596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
  [8606] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8616] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(747), 1,
      anon_sym_GT,
  [8626] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8636] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_RBRACE,
      anon_sym_options,
  [8644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(353), 1,
      sym_field_reference,
  [8654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(226), 1,
      sym_source_expression,
  [8664] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_events,
    STATE(236), 1,
      sym_events_block,
  [8674] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_AT,
  [8684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
  [8694] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_yield,
    STATE(250), 1,
      sym_yield_clause,
  [8704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [8714] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8722] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_on,
    ACTIONS(771), 1,
      anon_sym_within,
  [8732] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8740] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
    ACTIONS(779), 1,
      sym_string,
  [8760] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [8768] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_RBRACE,
      anon_sym_derive,
  [8776] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(783), 2,
      anon_sym_RBRACE,
      anon_sym_derive,
  [8784] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
  [8792] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8800] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [8808] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(787), 2,
      sym_number,
      sym_string,
  [8816] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8824] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8834] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8842] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8850] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_EQ,
    ACTIONS(795), 1,
      anon_sym_DOT,
  [8860] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
  [8878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(453), 1,
      sym_field_reference,
  [8888] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8896] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(241), 1,
      sym_field_reference,
  [8914] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8922] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8932] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_expect,
    STATE(331), 1,
      sym_expect_block,
  [8942] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8952] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(815), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8960] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [8970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_identifier,
    ACTIONS(821), 1,
      sym_string,
  [8980] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_yield,
    STATE(220), 1,
      sym_yield_clause,
  [8990] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8998] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_pipe_chain_repeat1,
  [9008] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_input,
    STATE(373), 1,
      sym_input_block,
  [9018] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
  [9028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [9038] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [9046] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(840), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9054] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [9062] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
  [9080] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_event,
    ACTIONS(850), 1,
      anon_sym_close,
  [9090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [9100] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9108] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_RBRACE,
      anon_sym_options,
  [9116] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9124] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_GT,
  [9131] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
  [9138] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_EQ,
  [9145] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
  [9152] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym_number,
  [9159] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym_string,
  [9166] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_string,
  [9173] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
  [9180] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACK,
  [9187] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_string,
  [9194] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_expect,
  [9201] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_duration,
  [9208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [9215] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_EQ,
  [9222] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_close,
  [9229] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
  [9236] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
  [9243] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_duration,
  [9250] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_GT,
  [9257] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
  [9264] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
  [9271] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_number,
  [9278] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
  [9285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
  [9292] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_version_tag,
  [9299] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_EQ,
  [9306] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_SEMI,
  [9313] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_LPAREN,
  [9320] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
  [9327] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
  [9334] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_EQ_EQ,
  [9341] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
  [9348] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_EQ,
  [9355] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [9362] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_SEMI,
  [9369] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_on,
  [9376] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_EQ_EQ,
  [9383] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
  [9390] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_GT,
  [9397] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
  [9404] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_fixed,
  [9411] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_duration,
  [9418] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [9425] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
  [9432] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
  [9439] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
  [9446] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
  [9453] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_expect,
  [9460] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_on,
  [9467] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_number,
  [9474] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_on,
  [9481] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_number,
  [9488] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
  [9495] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
  [9502] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_number,
  [9509] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_COMMA,
  [9516] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_EQ,
  [9523] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_string,
  [9530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_identifier,
  [9537] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_SEMI,
  [9544] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
  [9551] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_string,
  [9558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_identifier,
  [9565] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_GT,
  [9572] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
  [9579] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LPAREN,
  [9586] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_EQ,
  [9593] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_EQ,
  [9600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_identifier,
  [9607] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_string,
  [9614] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LBRACE,
  [9621] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LPAREN,
  [9628] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_in,
  [9635] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_GT,
  [9642] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
  [9649] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
  [9656] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
  [9663] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
  [9670] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_GT,
  [9677] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
  [9684] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [9691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_identifier,
  [9698] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [9705] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_close,
  [9712] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_match,
  [9719] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
  [9726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_identifier,
  [9733] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [9740] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_events,
  [9747] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_yield,
  [9754] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_string,
  [9761] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
  [9768] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
  [9775] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
  [9782] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
  [9789] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
  [9796] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
  [9803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_identifier,
  [9810] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
  [9817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_identifier,
  [9824] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym_string,
  [9831] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_PIPE,
  [9838] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
  [9845] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
  [9852] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
  [9859] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LBRACE,
  [9866] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_DOT,
  [9873] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_EQ,
  [9880] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_COLON,
  [9887] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_EQ,
  [9894] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_events,
  [9901] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_PIPE,
  [9908] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [9915] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LT,
  [9922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_identifier,
  [9929] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LBRACE,
  [9936] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [9943] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_LBRACE,
  [9950] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_string,
  [9957] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_LBRACE,
  [9964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
  [9971] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
  [9978] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
  [9985] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_for,
  [9992] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LBRACE,
  [9999] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1094), 1,
      ts_builtin_sym_end,
  [10006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_identifier,
  [10013] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_in,
  [10020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 500,
  [SMALL_STATE(13)] = 549,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 647,
  [SMALL_STATE(16)] = 696,
  [SMALL_STATE(17)] = 745,
  [SMALL_STATE(18)] = 794,
  [SMALL_STATE(19)] = 843,
  [SMALL_STATE(20)] = 892,
  [SMALL_STATE(21)] = 941,
  [SMALL_STATE(22)] = 990,
  [SMALL_STATE(23)] = 1039,
  [SMALL_STATE(24)] = 1088,
  [SMALL_STATE(25)] = 1137,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1235,
  [SMALL_STATE(28)] = 1284,
  [SMALL_STATE(29)] = 1333,
  [SMALL_STATE(30)] = 1382,
  [SMALL_STATE(31)] = 1431,
  [SMALL_STATE(32)] = 1480,
  [SMALL_STATE(33)] = 1529,
  [SMALL_STATE(34)] = 1578,
  [SMALL_STATE(35)] = 1627,
  [SMALL_STATE(36)] = 1676,
  [SMALL_STATE(37)] = 1725,
  [SMALL_STATE(38)] = 1774,
  [SMALL_STATE(39)] = 1823,
  [SMALL_STATE(40)] = 1872,
  [SMALL_STATE(41)] = 1921,
  [SMALL_STATE(42)] = 1970,
  [SMALL_STATE(43)] = 2019,
  [SMALL_STATE(44)] = 2068,
  [SMALL_STATE(45)] = 2117,
  [SMALL_STATE(46)] = 2166,
  [SMALL_STATE(47)] = 2215,
  [SMALL_STATE(48)] = 2264,
  [SMALL_STATE(49)] = 2313,
  [SMALL_STATE(50)] = 2362,
  [SMALL_STATE(51)] = 2411,
  [SMALL_STATE(52)] = 2460,
  [SMALL_STATE(53)] = 2498,
  [SMALL_STATE(54)] = 2533,
  [SMALL_STATE(55)] = 2563,
  [SMALL_STATE(56)] = 2593,
  [SMALL_STATE(57)] = 2623,
  [SMALL_STATE(58)] = 2653,
  [SMALL_STATE(59)] = 2683,
  [SMALL_STATE(60)] = 2713,
  [SMALL_STATE(61)] = 2743,
  [SMALL_STATE(62)] = 2773,
  [SMALL_STATE(63)] = 2803,
  [SMALL_STATE(64)] = 2833,
  [SMALL_STATE(65)] = 2877,
  [SMALL_STATE(66)] = 2923,
  [SMALL_STATE(67)] = 2959,
  [SMALL_STATE(68)] = 3007,
  [SMALL_STATE(69)] = 3039,
  [SMALL_STATE(70)] = 3069,
  [SMALL_STATE(71)] = 3101,
  [SMALL_STATE(72)] = 3139,
  [SMALL_STATE(73)] = 3169,
  [SMALL_STATE(74)] = 3207,
  [SMALL_STATE(75)] = 3237,
  [SMALL_STATE(76)] = 3267,
  [SMALL_STATE(77)] = 3297,
  [SMALL_STATE(78)] = 3327,
  [SMALL_STATE(79)] = 3357,
  [SMALL_STATE(80)] = 3387,
  [SMALL_STATE(81)] = 3417,
  [SMALL_STATE(82)] = 3447,
  [SMALL_STATE(83)] = 3477,
  [SMALL_STATE(84)] = 3507,
  [SMALL_STATE(85)] = 3539,
  [SMALL_STATE(86)] = 3577,
  [SMALL_STATE(87)] = 3626,
  [SMALL_STATE(88)] = 3675,
  [SMALL_STATE(89)] = 3724,
  [SMALL_STATE(90)] = 3773,
  [SMALL_STATE(91)] = 3822,
  [SMALL_STATE(92)] = 3871,
  [SMALL_STATE(93)] = 3920,
  [SMALL_STATE(94)] = 3969,
  [SMALL_STATE(95)] = 4018,
  [SMALL_STATE(96)] = 4067,
  [SMALL_STATE(97)] = 4116,
  [SMALL_STATE(98)] = 4145,
  [SMALL_STATE(99)] = 4175,
  [SMALL_STATE(100)] = 4215,
  [SMALL_STATE(101)] = 4251,
  [SMALL_STATE(102)] = 4291,
  [SMALL_STATE(103)] = 4329,
  [SMALL_STATE(104)] = 4357,
  [SMALL_STATE(105)] = 4401,
  [SMALL_STATE(106)] = 4445,
  [SMALL_STATE(107)] = 4471,
  [SMALL_STATE(108)] = 4497,
  [SMALL_STATE(109)] = 4527,
  [SMALL_STATE(110)] = 4571,
  [SMALL_STATE(111)] = 4594,
  [SMALL_STATE(112)] = 4635,
  [SMALL_STATE(113)] = 4666,
  [SMALL_STATE(114)] = 4693,
  [SMALL_STATE(115)] = 4736,
  [SMALL_STATE(116)] = 4759,
  [SMALL_STATE(117)] = 4802,
  [SMALL_STATE(118)] = 4845,
  [SMALL_STATE(119)] = 4868,
  [SMALL_STATE(120)] = 4911,
  [SMALL_STATE(121)] = 4934,
  [SMALL_STATE(122)] = 4977,
  [SMALL_STATE(123)] = 5000,
  [SMALL_STATE(124)] = 5043,
  [SMALL_STATE(125)] = 5086,
  [SMALL_STATE(126)] = 5121,
  [SMALL_STATE(127)] = 5164,
  [SMALL_STATE(128)] = 5191,
  [SMALL_STATE(129)] = 5214,
  [SMALL_STATE(130)] = 5249,
  [SMALL_STATE(131)] = 5292,
  [SMALL_STATE(132)] = 5315,
  [SMALL_STATE(133)] = 5338,
  [SMALL_STATE(134)] = 5361,
  [SMALL_STATE(135)] = 5384,
  [SMALL_STATE(136)] = 5407,
  [SMALL_STATE(137)] = 5430,
  [SMALL_STATE(138)] = 5453,
  [SMALL_STATE(139)] = 5480,
  [SMALL_STATE(140)] = 5503,
  [SMALL_STATE(141)] = 5546,
  [SMALL_STATE(142)] = 5569,
  [SMALL_STATE(143)] = 5592,
  [SMALL_STATE(144)] = 5635,
  [SMALL_STATE(145)] = 5658,
  [SMALL_STATE(146)] = 5681,
  [SMALL_STATE(147)] = 5704,
  [SMALL_STATE(148)] = 5747,
  [SMALL_STATE(149)] = 5780,
  [SMALL_STATE(150)] = 5823,
  [SMALL_STATE(151)] = 5846,
  [SMALL_STATE(152)] = 5889,
  [SMALL_STATE(153)] = 5912,
  [SMALL_STATE(154)] = 5935,
  [SMALL_STATE(155)] = 5978,
  [SMALL_STATE(156)] = 5996,
  [SMALL_STATE(157)] = 6016,
  [SMALL_STATE(158)] = 6048,
  [SMALL_STATE(159)] = 6073,
  [SMALL_STATE(160)] = 6093,
  [SMALL_STATE(161)] = 6119,
  [SMALL_STATE(162)] = 6139,
  [SMALL_STATE(163)] = 6159,
  [SMALL_STATE(164)] = 6179,
  [SMALL_STATE(165)] = 6199,
  [SMALL_STATE(166)] = 6213,
  [SMALL_STATE(167)] = 6233,
  [SMALL_STATE(168)] = 6253,
  [SMALL_STATE(169)] = 6273,
  [SMALL_STATE(170)] = 6293,
  [SMALL_STATE(171)] = 6313,
  [SMALL_STATE(172)] = 6333,
  [SMALL_STATE(173)] = 6347,
  [SMALL_STATE(174)] = 6367,
  [SMALL_STATE(175)] = 6387,
  [SMALL_STATE(176)] = 6407,
  [SMALL_STATE(177)] = 6427,
  [SMALL_STATE(178)] = 6447,
  [SMALL_STATE(179)] = 6464,
  [SMALL_STATE(180)] = 6487,
  [SMALL_STATE(181)] = 6504,
  [SMALL_STATE(182)] = 6521,
  [SMALL_STATE(183)] = 6538,
  [SMALL_STATE(184)] = 6555,
  [SMALL_STATE(185)] = 6572,
  [SMALL_STATE(186)] = 6589,
  [SMALL_STATE(187)] = 6606,
  [SMALL_STATE(188)] = 6629,
  [SMALL_STATE(189)] = 6648,
  [SMALL_STATE(190)] = 6668,
  [SMALL_STATE(191)] = 6686,
  [SMALL_STATE(192)] = 6700,
  [SMALL_STATE(193)] = 6716,
  [SMALL_STATE(194)] = 6734,
  [SMALL_STATE(195)] = 6754,
  [SMALL_STATE(196)] = 6774,
  [SMALL_STATE(197)] = 6794,
  [SMALL_STATE(198)] = 6812,
  [SMALL_STATE(199)] = 6823,
  [SMALL_STATE(200)] = 6836,
  [SMALL_STATE(201)] = 6853,
  [SMALL_STATE(202)] = 6870,
  [SMALL_STATE(203)] = 6887,
  [SMALL_STATE(204)] = 6902,
  [SMALL_STATE(205)] = 6913,
  [SMALL_STATE(206)] = 6930,
  [SMALL_STATE(207)] = 6947,
  [SMALL_STATE(208)] = 6964,
  [SMALL_STATE(209)] = 6979,
  [SMALL_STATE(210)] = 6994,
  [SMALL_STATE(211)] = 7011,
  [SMALL_STATE(212)] = 7022,
  [SMALL_STATE(213)] = 7039,
  [SMALL_STATE(214)] = 7054,
  [SMALL_STATE(215)] = 7071,
  [SMALL_STATE(216)] = 7086,
  [SMALL_STATE(217)] = 7103,
  [SMALL_STATE(218)] = 7118,
  [SMALL_STATE(219)] = 7132,
  [SMALL_STATE(220)] = 7142,
  [SMALL_STATE(221)] = 7156,
  [SMALL_STATE(222)] = 7170,
  [SMALL_STATE(223)] = 7186,
  [SMALL_STATE(224)] = 7200,
  [SMALL_STATE(225)] = 7210,
  [SMALL_STATE(226)] = 7222,
  [SMALL_STATE(227)] = 7238,
  [SMALL_STATE(228)] = 7252,
  [SMALL_STATE(229)] = 7264,
  [SMALL_STATE(230)] = 7278,
  [SMALL_STATE(231)] = 7292,
  [SMALL_STATE(232)] = 7302,
  [SMALL_STATE(233)] = 7316,
  [SMALL_STATE(234)] = 7332,
  [SMALL_STATE(235)] = 7346,
  [SMALL_STATE(236)] = 7360,
  [SMALL_STATE(237)] = 7376,
  [SMALL_STATE(238)] = 7392,
  [SMALL_STATE(239)] = 7406,
  [SMALL_STATE(240)] = 7422,
  [SMALL_STATE(241)] = 7438,
  [SMALL_STATE(242)] = 7448,
  [SMALL_STATE(243)] = 7462,
  [SMALL_STATE(244)] = 7476,
  [SMALL_STATE(245)] = 7488,
  [SMALL_STATE(246)] = 7500,
  [SMALL_STATE(247)] = 7510,
  [SMALL_STATE(248)] = 7524,
  [SMALL_STATE(249)] = 7540,
  [SMALL_STATE(250)] = 7554,
  [SMALL_STATE(251)] = 7568,
  [SMALL_STATE(252)] = 7584,
  [SMALL_STATE(253)] = 7598,
  [SMALL_STATE(254)] = 7612,
  [SMALL_STATE(255)] = 7628,
  [SMALL_STATE(256)] = 7640,
  [SMALL_STATE(257)] = 7654,
  [SMALL_STATE(258)] = 7668,
  [SMALL_STATE(259)] = 7682,
  [SMALL_STATE(260)] = 7696,
  [SMALL_STATE(261)] = 7712,
  [SMALL_STATE(262)] = 7725,
  [SMALL_STATE(263)] = 7738,
  [SMALL_STATE(264)] = 7747,
  [SMALL_STATE(265)] = 7756,
  [SMALL_STATE(266)] = 7765,
  [SMALL_STATE(267)] = 7778,
  [SMALL_STATE(268)] = 7789,
  [SMALL_STATE(269)] = 7802,
  [SMALL_STATE(270)] = 7815,
  [SMALL_STATE(271)] = 7824,
  [SMALL_STATE(272)] = 7833,
  [SMALL_STATE(273)] = 7842,
  [SMALL_STATE(274)] = 7851,
  [SMALL_STATE(275)] = 7864,
  [SMALL_STATE(276)] = 7877,
  [SMALL_STATE(277)] = 7886,
  [SMALL_STATE(278)] = 7899,
  [SMALL_STATE(279)] = 7912,
  [SMALL_STATE(280)] = 7921,
  [SMALL_STATE(281)] = 7934,
  [SMALL_STATE(282)] = 7943,
  [SMALL_STATE(283)] = 7954,
  [SMALL_STATE(284)] = 7967,
  [SMALL_STATE(285)] = 7980,
  [SMALL_STATE(286)] = 7993,
  [SMALL_STATE(287)] = 8006,
  [SMALL_STATE(288)] = 8019,
  [SMALL_STATE(289)] = 8032,
  [SMALL_STATE(290)] = 8041,
  [SMALL_STATE(291)] = 8050,
  [SMALL_STATE(292)] = 8063,
  [SMALL_STATE(293)] = 8076,
  [SMALL_STATE(294)] = 8089,
  [SMALL_STATE(295)] = 8100,
  [SMALL_STATE(296)] = 8113,
  [SMALL_STATE(297)] = 8126,
  [SMALL_STATE(298)] = 8137,
  [SMALL_STATE(299)] = 8150,
  [SMALL_STATE(300)] = 8163,
  [SMALL_STATE(301)] = 8172,
  [SMALL_STATE(302)] = 8185,
  [SMALL_STATE(303)] = 8198,
  [SMALL_STATE(304)] = 8211,
  [SMALL_STATE(305)] = 8224,
  [SMALL_STATE(306)] = 8233,
  [SMALL_STATE(307)] = 8246,
  [SMALL_STATE(308)] = 8259,
  [SMALL_STATE(309)] = 8272,
  [SMALL_STATE(310)] = 8285,
  [SMALL_STATE(311)] = 8294,
  [SMALL_STATE(312)] = 8303,
  [SMALL_STATE(313)] = 8316,
  [SMALL_STATE(314)] = 8329,
  [SMALL_STATE(315)] = 8342,
  [SMALL_STATE(316)] = 8351,
  [SMALL_STATE(317)] = 8364,
  [SMALL_STATE(318)] = 8377,
  [SMALL_STATE(319)] = 8390,
  [SMALL_STATE(320)] = 8401,
  [SMALL_STATE(321)] = 8414,
  [SMALL_STATE(322)] = 8423,
  [SMALL_STATE(323)] = 8436,
  [SMALL_STATE(324)] = 8449,
  [SMALL_STATE(325)] = 8462,
  [SMALL_STATE(326)] = 8475,
  [SMALL_STATE(327)] = 8488,
  [SMALL_STATE(328)] = 8499,
  [SMALL_STATE(329)] = 8512,
  [SMALL_STATE(330)] = 8525,
  [SMALL_STATE(331)] = 8538,
  [SMALL_STATE(332)] = 8551,
  [SMALL_STATE(333)] = 8564,
  [SMALL_STATE(334)] = 8577,
  [SMALL_STATE(335)] = 8586,
  [SMALL_STATE(336)] = 8596,
  [SMALL_STATE(337)] = 8606,
  [SMALL_STATE(338)] = 8616,
  [SMALL_STATE(339)] = 8626,
  [SMALL_STATE(340)] = 8636,
  [SMALL_STATE(341)] = 8644,
  [SMALL_STATE(342)] = 8654,
  [SMALL_STATE(343)] = 8664,
  [SMALL_STATE(344)] = 8674,
  [SMALL_STATE(345)] = 8684,
  [SMALL_STATE(346)] = 8694,
  [SMALL_STATE(347)] = 8704,
  [SMALL_STATE(348)] = 8714,
  [SMALL_STATE(349)] = 8722,
  [SMALL_STATE(350)] = 8732,
  [SMALL_STATE(351)] = 8740,
  [SMALL_STATE(352)] = 8750,
  [SMALL_STATE(353)] = 8760,
  [SMALL_STATE(354)] = 8768,
  [SMALL_STATE(355)] = 8776,
  [SMALL_STATE(356)] = 8784,
  [SMALL_STATE(357)] = 8792,
  [SMALL_STATE(358)] = 8800,
  [SMALL_STATE(359)] = 8808,
  [SMALL_STATE(360)] = 8816,
  [SMALL_STATE(361)] = 8824,
  [SMALL_STATE(362)] = 8834,
  [SMALL_STATE(363)] = 8842,
  [SMALL_STATE(364)] = 8850,
  [SMALL_STATE(365)] = 8860,
  [SMALL_STATE(366)] = 8868,
  [SMALL_STATE(367)] = 8878,
  [SMALL_STATE(368)] = 8888,
  [SMALL_STATE(369)] = 8896,
  [SMALL_STATE(370)] = 8904,
  [SMALL_STATE(371)] = 8914,
  [SMALL_STATE(372)] = 8922,
  [SMALL_STATE(373)] = 8932,
  [SMALL_STATE(374)] = 8942,
  [SMALL_STATE(375)] = 8952,
  [SMALL_STATE(376)] = 8960,
  [SMALL_STATE(377)] = 8970,
  [SMALL_STATE(378)] = 8980,
  [SMALL_STATE(379)] = 8990,
  [SMALL_STATE(380)] = 8998,
  [SMALL_STATE(381)] = 9008,
  [SMALL_STATE(382)] = 9018,
  [SMALL_STATE(383)] = 9028,
  [SMALL_STATE(384)] = 9038,
  [SMALL_STATE(385)] = 9046,
  [SMALL_STATE(386)] = 9054,
  [SMALL_STATE(387)] = 9062,
  [SMALL_STATE(388)] = 9070,
  [SMALL_STATE(389)] = 9080,
  [SMALL_STATE(390)] = 9090,
  [SMALL_STATE(391)] = 9100,
  [SMALL_STATE(392)] = 9108,
  [SMALL_STATE(393)] = 9116,
  [SMALL_STATE(394)] = 9124,
  [SMALL_STATE(395)] = 9131,
  [SMALL_STATE(396)] = 9138,
  [SMALL_STATE(397)] = 9145,
  [SMALL_STATE(398)] = 9152,
  [SMALL_STATE(399)] = 9159,
  [SMALL_STATE(400)] = 9166,
  [SMALL_STATE(401)] = 9173,
  [SMALL_STATE(402)] = 9180,
  [SMALL_STATE(403)] = 9187,
  [SMALL_STATE(404)] = 9194,
  [SMALL_STATE(405)] = 9201,
  [SMALL_STATE(406)] = 9208,
  [SMALL_STATE(407)] = 9215,
  [SMALL_STATE(408)] = 9222,
  [SMALL_STATE(409)] = 9229,
  [SMALL_STATE(410)] = 9236,
  [SMALL_STATE(411)] = 9243,
  [SMALL_STATE(412)] = 9250,
  [SMALL_STATE(413)] = 9257,
  [SMALL_STATE(414)] = 9264,
  [SMALL_STATE(415)] = 9271,
  [SMALL_STATE(416)] = 9278,
  [SMALL_STATE(417)] = 9285,
  [SMALL_STATE(418)] = 9292,
  [SMALL_STATE(419)] = 9299,
  [SMALL_STATE(420)] = 9306,
  [SMALL_STATE(421)] = 9313,
  [SMALL_STATE(422)] = 9320,
  [SMALL_STATE(423)] = 9327,
  [SMALL_STATE(424)] = 9334,
  [SMALL_STATE(425)] = 9341,
  [SMALL_STATE(426)] = 9348,
  [SMALL_STATE(427)] = 9355,
  [SMALL_STATE(428)] = 9362,
  [SMALL_STATE(429)] = 9369,
  [SMALL_STATE(430)] = 9376,
  [SMALL_STATE(431)] = 9383,
  [SMALL_STATE(432)] = 9390,
  [SMALL_STATE(433)] = 9397,
  [SMALL_STATE(434)] = 9404,
  [SMALL_STATE(435)] = 9411,
  [SMALL_STATE(436)] = 9418,
  [SMALL_STATE(437)] = 9425,
  [SMALL_STATE(438)] = 9432,
  [SMALL_STATE(439)] = 9439,
  [SMALL_STATE(440)] = 9446,
  [SMALL_STATE(441)] = 9453,
  [SMALL_STATE(442)] = 9460,
  [SMALL_STATE(443)] = 9467,
  [SMALL_STATE(444)] = 9474,
  [SMALL_STATE(445)] = 9481,
  [SMALL_STATE(446)] = 9488,
  [SMALL_STATE(447)] = 9495,
  [SMALL_STATE(448)] = 9502,
  [SMALL_STATE(449)] = 9509,
  [SMALL_STATE(450)] = 9516,
  [SMALL_STATE(451)] = 9523,
  [SMALL_STATE(452)] = 9530,
  [SMALL_STATE(453)] = 9537,
  [SMALL_STATE(454)] = 9544,
  [SMALL_STATE(455)] = 9551,
  [SMALL_STATE(456)] = 9558,
  [SMALL_STATE(457)] = 9565,
  [SMALL_STATE(458)] = 9572,
  [SMALL_STATE(459)] = 9579,
  [SMALL_STATE(460)] = 9586,
  [SMALL_STATE(461)] = 9593,
  [SMALL_STATE(462)] = 9600,
  [SMALL_STATE(463)] = 9607,
  [SMALL_STATE(464)] = 9614,
  [SMALL_STATE(465)] = 9621,
  [SMALL_STATE(466)] = 9628,
  [SMALL_STATE(467)] = 9635,
  [SMALL_STATE(468)] = 9642,
  [SMALL_STATE(469)] = 9649,
  [SMALL_STATE(470)] = 9656,
  [SMALL_STATE(471)] = 9663,
  [SMALL_STATE(472)] = 9670,
  [SMALL_STATE(473)] = 9677,
  [SMALL_STATE(474)] = 9684,
  [SMALL_STATE(475)] = 9691,
  [SMALL_STATE(476)] = 9698,
  [SMALL_STATE(477)] = 9705,
  [SMALL_STATE(478)] = 9712,
  [SMALL_STATE(479)] = 9719,
  [SMALL_STATE(480)] = 9726,
  [SMALL_STATE(481)] = 9733,
  [SMALL_STATE(482)] = 9740,
  [SMALL_STATE(483)] = 9747,
  [SMALL_STATE(484)] = 9754,
  [SMALL_STATE(485)] = 9761,
  [SMALL_STATE(486)] = 9768,
  [SMALL_STATE(487)] = 9775,
  [SMALL_STATE(488)] = 9782,
  [SMALL_STATE(489)] = 9789,
  [SMALL_STATE(490)] = 9796,
  [SMALL_STATE(491)] = 9803,
  [SMALL_STATE(492)] = 9810,
  [SMALL_STATE(493)] = 9817,
  [SMALL_STATE(494)] = 9824,
  [SMALL_STATE(495)] = 9831,
  [SMALL_STATE(496)] = 9838,
  [SMALL_STATE(497)] = 9845,
  [SMALL_STATE(498)] = 9852,
  [SMALL_STATE(499)] = 9859,
  [SMALL_STATE(500)] = 9866,
  [SMALL_STATE(501)] = 9873,
  [SMALL_STATE(502)] = 9880,
  [SMALL_STATE(503)] = 9887,
  [SMALL_STATE(504)] = 9894,
  [SMALL_STATE(505)] = 9901,
  [SMALL_STATE(506)] = 9908,
  [SMALL_STATE(507)] = 9915,
  [SMALL_STATE(508)] = 9922,
  [SMALL_STATE(509)] = 9929,
  [SMALL_STATE(510)] = 9936,
  [SMALL_STATE(511)] = 9943,
  [SMALL_STATE(512)] = 9950,
  [SMALL_STATE(513)] = 9957,
  [SMALL_STATE(514)] = 9964,
  [SMALL_STATE(515)] = 9971,
  [SMALL_STATE(516)] = 9978,
  [SMALL_STATE(517)] = 9985,
  [SMALL_STATE(518)] = 9992,
  [SMALL_STATE(519)] = 9999,
  [SMALL_STATE(520)] = 10006,
  [SMALL_STATE(521)] = 10013,
  [SMALL_STATE(522)] = 10020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 3, 0, 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 3, 0, 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 4, 0, 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 4, 0, 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_reason_ref, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_reason_ref, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 12),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 12),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measure, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 3, 0, 13),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 3, 0, 13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 14),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 14),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 5, 0, 17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 5, 0, 17),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_expression, 7, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in_expression, 7, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 7, 0, 13),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 7, 0, 13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, 0, 16),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, 0, 16),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_expression, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in_expression, 6, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 6, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 4, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 4, 0, 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 12),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 16),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 16),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 17),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 17),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, 0, 16),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, 0, 16),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 5, 0, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3, 0, 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_step_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_assignment, 3, 0, 18),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hit_assertion, 6, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_clause_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limits_clause_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_limits_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_event_block_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_on_event_block_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(522),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(520),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_chain, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_chain, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_clause_repeat1, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stage_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_item, 4, 0, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5, 0, 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 6, 0, 9),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 1, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_event_block, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_block_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_block_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_block, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 10, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 6, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 2, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_block_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_block_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_derive_block_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_condition, 3, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 7, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 9, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_events_block_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_events_block_repeat1, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_block_repeat1, 2, 0, 0), SHIFT_REPEAT(503),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_block_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 4, 0, 0),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_score_block_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_score_block_repeat1, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 8, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_step_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_step_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 8, 0, 19),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_output, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 4, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 6, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 11, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 9, 0, 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_call, 4, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_chain_repeat1, 2, 0, 0),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_block, 4, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 6, 0, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 5, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_statement, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expect_statement, 4, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 12, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 4, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_statement, 7, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expect_statement, 7, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_statement_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 7, 0, 19),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yield_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yield_clause_repeat1, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 5, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_params_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_params_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, 0, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yield_field_repeat1, 2, 0, 0),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yield_field_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 8, 0, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_step_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stage_chain_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 3, 0, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 3, 0, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 8, 0, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_entry, 3, 0, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_entry, 3, 0, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 4, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_target, 1, 0, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_step, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_step, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_entry, 4, 0, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_entry, 4, 0, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_mode, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 2, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_close_block, 5, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_close_block, 5, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 4, 0, 15),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 5, 0, 15),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 1, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_clause, 4, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_item, 6, 0, 22),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_item, 6, 0, 22),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_chain, 5, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 6, 0, 21),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_chain, 4, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 5, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 4, 0, 0),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipe_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_item, 4, 0, 20),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_item, 4, 0, 20),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 4, 0, 13),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 4, 0, 21),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 3, 0, 17),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_step, 3, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_step, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derive_item, 4, 0, 11),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derive_item, 4, 0, 11),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 3, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 3, 0, 15),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 4, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 4, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hit_assertion, 3, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_target, 3, 0, 8),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits_clause, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_mode, 3, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 3, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 2, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_block, 3, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 4, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_block, 4, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derive_block, 4, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_block, 4, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_clause, 6, 0, 10),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_block, 4, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 1, 0, 0),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_block, 3, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipe_chain_repeat1, 2, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1094] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
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

TS_PUBLIC const TSLanguage *tree_sitter_wfl(void) {
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
