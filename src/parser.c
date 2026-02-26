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
#define STATE_COUNT 522
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
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
  sym_transform = 34,
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
  sym_measure = 118,
  sym_score_output = 119,
  sym_score_call = 120,
  sym_score_block = 121,
  sym_score_item = 122,
  sym_join_clause = 123,
  sym_join_mode = 124,
  sym_join_condition = 125,
  sym_entity_clause = 126,
  sym_yield_clause = 127,
  sym_yield_target = 128,
  sym_named_argument = 129,
  sym_yield_field = 130,
  sym_conv_clause = 131,
  sym_conv_chain = 132,
  sym_conv_step = 133,
  sym_limits_clause = 134,
  sym_limit_item = 135,
  sym_test_block = 136,
  sym_input_block = 137,
  sym_input_statement = 138,
  sym_field_assignment = 139,
  sym_expect_block = 140,
  sym_expect_statement = 141,
  sym_hit_assertion = 142,
  sym_options_block = 143,
  sym_option_entry = 144,
  sym_expression = 145,
  sym_binary_expression = 146,
  sym_unary_expression = 147,
  sym_if_expression = 148,
  sym_in_expression = 149,
  sym_not_in_expression = 150,
  sym_primary = 151,
  sym_parenthesized_expression = 152,
  sym_field_reference = 153,
  sym_function_call = 154,
  sym_aggregate_pipe_expression = 155,
  sym_close_reason_ref = 156,
  sym_comparison_operator = 157,
  sym_boolean = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_source_file_repeat2 = 160,
  aux_sym_meta_block_repeat1 = 161,
  aux_sym_events_block_repeat1 = 162,
  aux_sym_stage_chain_repeat1 = 163,
  aux_sym_stage_repeat1 = 164,
  aux_sym_match_params_repeat1 = 165,
  aux_sym_key_block_repeat1 = 166,
  aux_sym_on_event_block_repeat1 = 167,
  aux_sym_derive_block_repeat1 = 168,
  aux_sym_match_step_repeat1 = 169,
  aux_sym_pipe_chain_repeat1 = 170,
  aux_sym_score_block_repeat1 = 171,
  aux_sym_join_clause_repeat1 = 172,
  aux_sym_yield_clause_repeat1 = 173,
  aux_sym_yield_field_repeat1 = 174,
  aux_sym_conv_clause_repeat1 = 175,
  aux_sym_conv_chain_repeat1 = 176,
  aux_sym_conv_step_repeat1 = 177,
  aux_sym_limits_clause_repeat1 = 178,
  aux_sym_input_block_repeat1 = 179,
  aux_sym_input_statement_repeat1 = 180,
  aux_sym_expect_block_repeat1 = 181,
  aux_sym_options_block_repeat1 = 182,
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
  [sym_transform] = "transform",
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
  [sym_transform] = sym_transform,
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
  [sym_transform] = {
    .visible = true,
    .named = true,
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
  [5] = 2,
  [6] = 4,
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
  [23] = 13,
  [24] = 15,
  [25] = 25,
  [26] = 11,
  [27] = 12,
  [28] = 14,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 25,
  [33] = 15,
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 20,
  [38] = 13,
  [39] = 35,
  [40] = 40,
  [41] = 16,
  [42] = 14,
  [43] = 12,
  [44] = 11,
  [45] = 25,
  [46] = 46,
  [47] = 31,
  [48] = 48,
  [49] = 20,
  [50] = 19,
  [51] = 35,
  [52] = 52,
  [53] = 53,
  [54] = 3,
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
  [84] = 52,
  [85] = 3,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 53,
  [91] = 91,
  [92] = 88,
  [93] = 91,
  [94] = 94,
  [95] = 95,
  [96] = 89,
  [97] = 87,
  [98] = 98,
  [99] = 52,
  [100] = 55,
  [101] = 67,
  [102] = 102,
  [103] = 61,
  [104] = 66,
  [105] = 79,
  [106] = 106,
  [107] = 70,
  [108] = 68,
  [109] = 109,
  [110] = 110,
  [111] = 76,
  [112] = 61,
  [113] = 62,
  [114] = 60,
  [115] = 115,
  [116] = 72,
  [117] = 56,
  [118] = 118,
  [119] = 115,
  [120] = 79,
  [121] = 121,
  [122] = 122,
  [123] = 73,
  [124] = 66,
  [125] = 77,
  [126] = 126,
  [127] = 67,
  [128] = 74,
  [129] = 68,
  [130] = 55,
  [131] = 58,
  [132] = 75,
  [133] = 78,
  [134] = 71,
  [135] = 57,
  [136] = 59,
  [137] = 115,
  [138] = 80,
  [139] = 69,
  [140] = 140,
  [141] = 83,
  [142] = 82,
  [143] = 70,
  [144] = 144,
  [145] = 81,
  [146] = 64,
  [147] = 118,
  [148] = 122,
  [149] = 149,
  [150] = 53,
  [151] = 118,
  [152] = 65,
  [153] = 153,
  [154] = 63,
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
  [170] = 166,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 164,
  [178] = 165,
  [179] = 179,
  [180] = 168,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 172,
  [185] = 169,
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
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
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
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 287,
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
  [328] = 313,
  [329] = 306,
  [330] = 325,
  [331] = 331,
  [332] = 332,
  [333] = 333,
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
  [346] = 343,
  [347] = 342,
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
  [361] = 361,
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
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 345,
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
  [443] = 443,
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
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 450,
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
  [490] = 474,
  [491] = 450,
  [492] = 492,
  [493] = 493,
  [494] = 493,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 474,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 155,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 493,
  [512] = 512,
  [513] = 513,
  [514] = 488,
  [515] = 447,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 487,
  [521] = 521,
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
      ACCEPT_TOKEN(sym_transform);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_transform);
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
  [3] = {.lex_state = 199},
  [4] = {.lex_state = 350},
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
  [54] = {.lex_state = 400},
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
  [71] = {.lex_state = 199},
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
  [90] = {.lex_state = 400},
  [91] = {.lex_state = 199},
  [92] = {.lex_state = 199},
  [93] = {.lex_state = 199},
  [94] = {.lex_state = 199},
  [95] = {.lex_state = 199},
  [96] = {.lex_state = 199},
  [97] = {.lex_state = 199},
  [98] = {.lex_state = 400},
  [99] = {.lex_state = 199},
  [100] = {.lex_state = 400},
  [101] = {.lex_state = 400},
  [102] = {.lex_state = 199},
  [103] = {.lex_state = 400},
  [104] = {.lex_state = 400},
  [105] = {.lex_state = 400},
  [106] = {.lex_state = 199},
  [107] = {.lex_state = 400},
  [108] = {.lex_state = 400},
  [109] = {.lex_state = 199},
  [110] = {.lex_state = 350},
  [111] = {.lex_state = 400},
  [112] = {.lex_state = 199},
  [113] = {.lex_state = 400},
  [114] = {.lex_state = 400},
  [115] = {.lex_state = 199},
  [116] = {.lex_state = 400},
  [117] = {.lex_state = 400},
  [118] = {.lex_state = 199},
  [119] = {.lex_state = 199},
  [120] = {.lex_state = 199},
  [121] = {.lex_state = 199},
  [122] = {.lex_state = 199},
  [123] = {.lex_state = 400},
  [124] = {.lex_state = 199},
  [125] = {.lex_state = 400},
  [126] = {.lex_state = 199},
  [127] = {.lex_state = 199},
  [128] = {.lex_state = 400},
  [129] = {.lex_state = 199},
  [130] = {.lex_state = 199},
  [131] = {.lex_state = 400},
  [132] = {.lex_state = 400},
  [133] = {.lex_state = 400},
  [134] = {.lex_state = 400},
  [135] = {.lex_state = 400},
  [136] = {.lex_state = 400},
  [137] = {.lex_state = 199},
  [138] = {.lex_state = 400},
  [139] = {.lex_state = 400},
  [140] = {.lex_state = 199},
  [141] = {.lex_state = 400},
  [142] = {.lex_state = 400},
  [143] = {.lex_state = 199},
  [144] = {.lex_state = 350},
  [145] = {.lex_state = 400},
  [146] = {.lex_state = 400},
  [147] = {.lex_state = 199},
  [148] = {.lex_state = 199},
  [149] = {.lex_state = 199},
  [150] = {.lex_state = 199},
  [151] = {.lex_state = 199},
  [152] = {.lex_state = 400},
  [153] = {.lex_state = 199},
  [154] = {.lex_state = 400},
  [155] = {.lex_state = 350},
  [156] = {.lex_state = 199},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 199},
  [159] = {.lex_state = 199},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 199},
  [162] = {.lex_state = 199},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 199},
  [165] = {.lex_state = 199},
  [166] = {.lex_state = 199},
  [167] = {.lex_state = 199},
  [168] = {.lex_state = 199},
  [169] = {.lex_state = 199},
  [170] = {.lex_state = 199},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 199},
  [173] = {.lex_state = 199},
  [174] = {.lex_state = 199},
  [175] = {.lex_state = 199},
  [176] = {.lex_state = 199},
  [177] = {.lex_state = 199},
  [178] = {.lex_state = 199},
  [179] = {.lex_state = 199},
  [180] = {.lex_state = 199},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 199},
  [183] = {.lex_state = 199},
  [184] = {.lex_state = 199},
  [185] = {.lex_state = 199},
  [186] = {.lex_state = 199},
  [187] = {.lex_state = 199},
  [188] = {.lex_state = 199},
  [189] = {.lex_state = 411},
  [190] = {.lex_state = 411},
  [191] = {.lex_state = 199},
  [192] = {.lex_state = 199},
  [193] = {.lex_state = 199},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 199},
  [196] = {.lex_state = 411},
  [197] = {.lex_state = 411},
  [198] = {.lex_state = 411},
  [199] = {.lex_state = 199},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 411},
  [202] = {.lex_state = 411},
  [203] = {.lex_state = 199},
  [204] = {.lex_state = 199},
  [205] = {.lex_state = 199},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 199},
  [208] = {.lex_state = 199},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 199},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 199},
  [214] = {.lex_state = 199},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 199},
  [218] = {.lex_state = 199},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 411},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 199},
  [223] = {.lex_state = 411},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 199},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 199},
  [229] = {.lex_state = 411},
  [230] = {.lex_state = 411},
  [231] = {.lex_state = 411},
  [232] = {.lex_state = 199},
  [233] = {.lex_state = 199},
  [234] = {.lex_state = 411},
  [235] = {.lex_state = 411},
  [236] = {.lex_state = 411},
  [237] = {.lex_state = 199},
  [238] = {.lex_state = 411},
  [239] = {.lex_state = 199},
  [240] = {.lex_state = 411},
  [241] = {.lex_state = 411},
  [242] = {.lex_state = 199},
  [243] = {.lex_state = 411},
  [244] = {.lex_state = 411},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 199},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 411},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 199},
  [251] = {.lex_state = 411},
  [252] = {.lex_state = 411},
  [253] = {.lex_state = 199},
  [254] = {.lex_state = 199},
  [255] = {.lex_state = 411},
  [256] = {.lex_state = 199},
  [257] = {.lex_state = 411},
  [258] = {.lex_state = 199},
  [259] = {.lex_state = 199},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 199},
  [262] = {.lex_state = 199},
  [263] = {.lex_state = 199},
  [264] = {.lex_state = 199},
  [265] = {.lex_state = 199},
  [266] = {.lex_state = 199},
  [267] = {.lex_state = 199},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 199},
  [270] = {.lex_state = 411},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 411},
  [274] = {.lex_state = 199},
  [275] = {.lex_state = 199},
  [276] = {.lex_state = 199},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 411},
  [279] = {.lex_state = 199},
  [280] = {.lex_state = 199},
  [281] = {.lex_state = 199},
  [282] = {.lex_state = 199},
  [283] = {.lex_state = 199},
  [284] = {.lex_state = 199},
  [285] = {.lex_state = 199},
  [286] = {.lex_state = 199},
  [287] = {.lex_state = 199},
  [288] = {.lex_state = 199},
  [289] = {.lex_state = 199},
  [290] = {.lex_state = 199},
  [291] = {.lex_state = 411},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 199},
  [294] = {.lex_state = 199},
  [295] = {.lex_state = 411},
  [296] = {.lex_state = 411},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 199},
  [300] = {.lex_state = 199},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 199},
  [303] = {.lex_state = 199},
  [304] = {.lex_state = 199},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 199},
  [307] = {.lex_state = 199},
  [308] = {.lex_state = 199},
  [309] = {.lex_state = 199},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 411},
  [312] = {.lex_state = 199},
  [313] = {.lex_state = 199},
  [314] = {.lex_state = 199},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 199},
  [317] = {.lex_state = 199},
  [318] = {.lex_state = 199},
  [319] = {.lex_state = 411},
  [320] = {.lex_state = 199},
  [321] = {.lex_state = 199},
  [322] = {.lex_state = 411},
  [323] = {.lex_state = 199},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 199},
  [326] = {.lex_state = 199},
  [327] = {.lex_state = 199},
  [328] = {.lex_state = 199},
  [329] = {.lex_state = 199},
  [330] = {.lex_state = 199},
  [331] = {.lex_state = 199},
  [332] = {.lex_state = 411},
  [333] = {.lex_state = 199},
  [334] = {.lex_state = 411},
  [335] = {.lex_state = 199},
  [336] = {.lex_state = 411},
  [337] = {.lex_state = 199},
  [338] = {.lex_state = 199},
  [339] = {.lex_state = 199},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 411},
  [342] = {.lex_state = 199},
  [343] = {.lex_state = 199},
  [344] = {.lex_state = 411},
  [345] = {.lex_state = 199},
  [346] = {.lex_state = 199},
  [347] = {.lex_state = 199},
  [348] = {.lex_state = 199},
  [349] = {.lex_state = 199},
  [350] = {.lex_state = 199},
  [351] = {.lex_state = 199},
  [352] = {.lex_state = 199},
  [353] = {.lex_state = 199},
  [354] = {.lex_state = 199},
  [355] = {.lex_state = 199},
  [356] = {.lex_state = 199},
  [357] = {.lex_state = 411},
  [358] = {.lex_state = 411},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 411},
  [361] = {.lex_state = 199},
  [362] = {.lex_state = 411},
  [363] = {.lex_state = 199},
  [364] = {.lex_state = 199},
  [365] = {.lex_state = 199},
  [366] = {.lex_state = 411},
  [367] = {.lex_state = 199},
  [368] = {.lex_state = 411},
  [369] = {.lex_state = 199},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 199},
  [373] = {.lex_state = 199},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 199},
  [376] = {.lex_state = 199},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 199},
  [379] = {.lex_state = 411},
  [380] = {.lex_state = 199},
  [381] = {.lex_state = 411},
  [382] = {.lex_state = 411},
  [383] = {.lex_state = 199},
  [384] = {.lex_state = 199},
  [385] = {.lex_state = 199},
  [386] = {.lex_state = 199},
  [387] = {.lex_state = 199},
  [388] = {.lex_state = 411},
  [389] = {.lex_state = 199},
  [390] = {.lex_state = 199},
  [391] = {.lex_state = 199},
  [392] = {.lex_state = 199},
  [393] = {.lex_state = 199},
  [394] = {.lex_state = 199},
  [395] = {.lex_state = 199},
  [396] = {.lex_state = 199},
  [397] = {.lex_state = 199},
  [398] = {.lex_state = 199},
  [399] = {.lex_state = 199},
  [400] = {.lex_state = 199},
  [401] = {.lex_state = 199},
  [402] = {.lex_state = 411},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 199},
  [405] = {.lex_state = 199},
  [406] = {.lex_state = 199},
  [407] = {.lex_state = 199},
  [408] = {.lex_state = 199},
  [409] = {.lex_state = 199},
  [410] = {.lex_state = 199},
  [411] = {.lex_state = 199},
  [412] = {.lex_state = 199},
  [413] = {.lex_state = 199},
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 199},
  [416] = {.lex_state = 199},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 199},
  [419] = {.lex_state = 199},
  [420] = {.lex_state = 199},
  [421] = {.lex_state = 199},
  [422] = {.lex_state = 4},
  [423] = {.lex_state = 199},
  [424] = {.lex_state = 199},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 199},
  [427] = {.lex_state = 199},
  [428] = {.lex_state = 199},
  [429] = {.lex_state = 199},
  [430] = {.lex_state = 199},
  [431] = {.lex_state = 199},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 411},
  [434] = {.lex_state = 4},
  [435] = {.lex_state = 199},
  [436] = {.lex_state = 199},
  [437] = {.lex_state = 199},
  [438] = {.lex_state = 411},
  [439] = {.lex_state = 199},
  [440] = {.lex_state = 199},
  [441] = {.lex_state = 199},
  [442] = {.lex_state = 4},
  [443] = {.lex_state = 4},
  [444] = {.lex_state = 199},
  [445] = {.lex_state = 199},
  [446] = {.lex_state = 199},
  [447] = {.lex_state = 199},
  [448] = {.lex_state = 4},
  [449] = {.lex_state = 199},
  [450] = {.lex_state = 199},
  [451] = {.lex_state = 199},
  [452] = {.lex_state = 199},
  [453] = {.lex_state = 199},
  [454] = {.lex_state = 199},
  [455] = {.lex_state = 199},
  [456] = {.lex_state = 199},
  [457] = {.lex_state = 199},
  [458] = {.lex_state = 199},
  [459] = {.lex_state = 199},
  [460] = {.lex_state = 199},
  [461] = {.lex_state = 199},
  [462] = {.lex_state = 199},
  [463] = {.lex_state = 411},
  [464] = {.lex_state = 199},
  [465] = {.lex_state = 199},
  [466] = {.lex_state = 199},
  [467] = {.lex_state = 199},
  [468] = {.lex_state = 199},
  [469] = {.lex_state = 199},
  [470] = {.lex_state = 411},
  [471] = {.lex_state = 199},
  [472] = {.lex_state = 199},
  [473] = {.lex_state = 199},
  [474] = {.lex_state = 411},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 199},
  [477] = {.lex_state = 199},
  [478] = {.lex_state = 199},
  [479] = {.lex_state = 199},
  [480] = {.lex_state = 199},
  [481] = {.lex_state = 199},
  [482] = {.lex_state = 199},
  [483] = {.lex_state = 199},
  [484] = {.lex_state = 199},
  [485] = {.lex_state = 199},
  [486] = {.lex_state = 199},
  [487] = {.lex_state = 199},
  [488] = {.lex_state = 199},
  [489] = {.lex_state = 199},
  [490] = {.lex_state = 411},
  [491] = {.lex_state = 199},
  [492] = {.lex_state = 199},
  [493] = {.lex_state = 199},
  [494] = {.lex_state = 199},
  [495] = {.lex_state = 4},
  [496] = {.lex_state = 199},
  [497] = {.lex_state = 411},
  [498] = {.lex_state = 411},
  [499] = {.lex_state = 4},
  [500] = {.lex_state = 199},
  [501] = {.lex_state = 199},
  [502] = {.lex_state = 199},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 199},
  [506] = {.lex_state = 1},
  [507] = {.lex_state = 411},
  [508] = {.lex_state = 199},
  [509] = {.lex_state = 199},
  [510] = {.lex_state = 411},
  [511] = {.lex_state = 199},
  [512] = {.lex_state = 199},
  [513] = {.lex_state = 199},
  [514] = {.lex_state = 199},
  [515] = {.lex_state = 199},
  [516] = {.lex_state = 199},
  [517] = {.lex_state = 199},
  [518] = {.lex_state = 199},
  [519] = {.lex_state = 411},
  [520] = {.lex_state = 199},
  [521] = {.lex_state = 411},
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
    [sym_transform] = ACTIONS(1),
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
    [sym_source_file] = STATE(518),
    [sym_use_declaration] = STATE(158),
    [sym_rule_declaration] = STATE(195),
    [sym_test_block] = STATE(195),
    [aux_sym_source_file_repeat1] = STATE(158),
    [aux_sym_source_file_repeat2] = STATE(195),
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [52] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(347), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(31), 18,
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
  [96] = 12,
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
    ACTIONS(43), 1,
      anon_sym_RPAREN,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(106), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [402] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [451] = 11,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [500] = 11,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [549] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [598] = 11,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
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
    STATE(118), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
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
    STATE(153), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [794] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [843] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
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
    STATE(120), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(98), 1,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [990] = 11,
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
    STATE(122), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
  [1088] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1137] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1186] = 11,
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
    STATE(127), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1235] = 11,
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
    STATE(129), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1284] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1480] = 11,
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
    STATE(104), 1,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1578] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1676] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [1725] = 11,
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
    STATE(105), 1,
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
    STATE(141), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
    STATE(145), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
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
    STATE(61), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(115), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(55), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2019] = 11,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [2264] = 11,
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
    STATE(102), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
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
    STATE(79), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(97), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(137), 1,
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
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_if_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_primary,
    STATE(83), 6,
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
    STATE(345), 1,
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
    STATE(343), 1,
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
  [2533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    STATE(342), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(33), 17,
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
  [2571] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
  [2617] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(111), 18,
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
  [2647] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(115), 18,
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
  [2677] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(119), 18,
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
  [2707] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(125), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(123), 18,
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
  [2737] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(127), 18,
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
  [2767] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(131), 18,
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
  [2799] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(135), 18,
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
  [2829] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(139), 18,
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
  [2859] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(143), 18,
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
  [2889] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(147), 18,
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
  [2919] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 14,
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
  [2957] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
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
  [2989] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 16,
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
  [3025] = 3,
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
  [3055] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 8,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
  [3099] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(157), 18,
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
  [3129] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(163), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(161), 18,
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
  [3159] = 3,
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
  [3189] = 3,
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
  [3219] = 3,
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
  [3249] = 3,
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
  [3279] = 3,
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
  [3309] = 3,
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
  [3339] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(189), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_then,
      anon_sym_else,
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
    STATE(386), 1,
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
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(347), 1,
      aux_sym_pipe_chain_repeat1,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(31), 12,
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
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(350), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(384), 1,
      sym_pipe_chain,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3626] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(330), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3675] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(313), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3724] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(306), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_PIPE,
    STATE(346), 1,
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
  [3802] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(312), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3851] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(328), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3900] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(287), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3949] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(317), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3998] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(350), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(389), 1,
      sym_pipe_chain,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4047] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(329), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4096] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    STATE(325), 1,
      aux_sym_conv_step_repeat1,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4145] = 10,
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
    STATE(32), 1,
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
    ACTIONS(95), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4185] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
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
  [4215] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
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
  [4279] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(133), 17,
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
  [4349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 12,
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
  [4379] = 10,
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
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 2,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4419] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4463] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_in,
    ACTIONS(263), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 4,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_identifier,
    ACTIONS(95), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(259), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 14,
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
  [4527] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    STATE(390), 1,
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
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [4606] = 2,
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
  [4629] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(133), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(131), 12,
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
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 17,
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
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 17,
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
  [4702] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_then,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 17,
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
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 17,
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
  [4791] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 1,
      anon_sym_else,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4834] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(277), 1,
      anon_sym_then,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4877] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4920] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4963] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5006] = 2,
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
  [5029] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(97), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5062] = 2,
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
  [5085] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5128] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(151), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(97), 12,
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
  [5155] = 2,
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
  [5178] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(97), 10,
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
  [5209] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(217), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 17,
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
  [5275] = 2,
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
  [5298] = 2,
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
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 17,
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
  [5344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 17,
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
  [5367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 17,
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
  [5390] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_then,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5433] = 2,
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
  [5456] = 2,
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
  [5479] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5522] = 2,
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
  [5545] = 2,
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
  [5568] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5609] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_close_reason,
    STATE(391), 1,
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
    STATE(83), 6,
      sym_parenthesized_expression,
      sym_field_reference,
      sym_function_call,
      sym_aggregate_pipe_expression,
      sym_close_reason_ref,
      sym_boolean,
  [5644] = 2,
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
  [5667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 17,
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
  [5690] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(289), 1,
      anon_sym_else,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5733] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5776] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5819] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(343), 1,
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
  [5846] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_else,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 17,
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
  [5912] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AMP_AMP,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_in,
    ACTIONS(109), 1,
      anon_sym_not,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 17,
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
  [5996] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_key,
    ACTIONS(305), 1,
      anon_sym_on,
    ACTIONS(307), 1,
      anon_sym_and,
    ACTIONS(309), 1,
      anon_sym_derive,
    STATE(161), 1,
      sym_key_block,
    STATE(167), 1,
      sym_on_event_block,
    STATE(458), 1,
      sym_derive_block,
    STATE(304), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6028] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 8,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_join,
      anon_sym_EQ_EQ,
      anon_sym_entity,
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
    STATE(193), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
    STATE(192), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6073] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_conv_step,
    STATE(162), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(319), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6093] = 2,
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
  [6107] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_on,
    ACTIONS(307), 1,
      anon_sym_and,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_on_event_block,
    STATE(480), 1,
      sym_derive_block,
    STATE(309), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6133] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_conv_step,
    STATE(162), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(325), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6153] = 2,
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
  [6167] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(60), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6184] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(154), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6201] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(133), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6218] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_and,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      anon_sym_on,
    STATE(480), 1,
      sym_derive_block,
    STATE(309), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6241] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(62), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6258] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(58), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6275] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(78), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6292] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(181), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(338), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6309] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(72), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6326] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_score,
    ACTIONS(344), 1,
      anon_sym_field,
    STATE(440), 1,
      sym_hit_assertion,
    ACTIONS(342), 4,
      anon_sym_close_reason,
      anon_sym_origin,
      anon_sym_entity_type,
      anon_sym_entity_id,
  [6345] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(36), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6362] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(144), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6379] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(504), 1,
      sym_comparison_operator,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6396] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(114), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6413] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(63), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6430] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_and,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(334), 1,
      anon_sym_on,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(435), 1,
      sym_derive_block,
    STATE(266), 2,
      sym_on_close_block,
      sym_and_close_block,
  [6453] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(113), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6470] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(181), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(354), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6487] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(187), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6504] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(264), 1,
      sym_conv_step,
    STATE(159), 2,
      sym_conv_chain,
      aux_sym_conv_clause_repeat1,
    ACTIONS(319), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6521] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(116), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6538] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(131), 1,
      sym_measure,
    ACTIONS(332), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6555] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(403), 1,
      sym_comparison_operator,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6572] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(110), 1,
      sym_comparison_operator,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6589] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
    STATE(175), 1,
      sym_measure,
    ACTIONS(330), 5,
      anon_sym_count,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_min,
      anon_sym_max,
  [6606] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(190), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(190), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6646] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_rule,
    ACTIONS(371), 1,
      anon_sym_test,
    STATE(191), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6664] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(191), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6682] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_use,
    STATE(193), 2,
      sym_use_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(376), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [6698] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(171), 2,
      sym_limit_item,
      aux_sym_limits_clause_repeat1,
    ACTIONS(338), 4,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [6712] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(191), 3,
      sym_rule_declaration,
      sym_test_block,
      aux_sym_source_file_repeat2,
  [6730] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(190), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(190), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(196), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6787] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(387), 1,
      anon_sym_row,
    ACTIONS(389), 1,
      anon_sym_tick,
    STATE(203), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [6804] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_AMP_AMP,
    STATE(212), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(393), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [6819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(197), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(225), 1,
      sym_source_expression,
    STATE(302), 1,
      sym_step_branch,
    STATE(189), 2,
      sym_match_step,
      aux_sym_on_event_block_repeat1,
  [6853] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_row,
    ACTIONS(400), 1,
      anon_sym_tick,
    STATE(203), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [6870] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(403), 5,
      anon_sym_RBRACE,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [6881] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_row,
    ACTIONS(389), 1,
      anon_sym_tick,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(199), 2,
      sym_input_statement,
      aux_sym_input_block_repeat1,
  [6898] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_join,
    ACTIONS(407), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(206), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [6913] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 1,
      anon_sym_hits,
    ACTIONS(416), 1,
      anon_sym_hit,
    STATE(208), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [6930] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      anon_sym_hits,
    ACTIONS(423), 1,
      anon_sym_hit,
    STATE(208), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [6947] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_AMP_AMP,
    STATE(209), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(429), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [6962] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_join,
    ACTIONS(431), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(215), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [6977] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_hits,
    ACTIONS(416), 1,
      anon_sym_hit,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(207), 2,
      sym_expect_statement,
      aux_sym_expect_block_repeat1,
  [6994] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_AMP_AMP,
    STATE(209), 1,
      aux_sym_join_clause_repeat1,
    ACTIONS(437), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7009] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(376), 1,
      sym_conv_step,
    ACTIONS(319), 4,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [7022] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(439), 5,
      anon_sym_RBRACE,
      anon_sym_sort,
      anon_sym_top,
      anon_sym_dedup,
      anon_sym_where,
  [7033] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_join,
    ACTIONS(441), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
    STATE(206), 2,
      sym_join_clause,
      aux_sym_stage_repeat1,
  [7048] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(443), 5,
      anon_sym_RBRACE,
      anon_sym_max_memory,
      anon_sym_max_instances,
      anon_sym_max_throttle,
      anon_sym_on_exceed,
  [7059] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [7076] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_score,
    STATE(271), 1,
      sym_score_output,
    STATE(298), 2,
      sym_score_call,
      sym_score_block,
  [7090] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DASH_GT,
    ACTIONS(455), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_field_reference,
    STATE(457), 1,
      sym_match_params,
  [7118] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DASH_GT,
    ACTIONS(463), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7130] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_score,
    STATE(324), 1,
      sym_score_output,
    STATE(298), 2,
      sym_score_call,
      sym_score_block,
  [7144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(223), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [7158] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_DASH_GT,
    ACTIONS(472), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7170] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_AMP_AMP,
    ACTIONS(478), 1,
      anon_sym_PIPE,
    STATE(349), 1,
      sym_pipe_chain,
    STATE(350), 1,
      aux_sym_pipe_chain_repeat1,
  [7186] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DASH_GT,
    ACTIONS(480), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7198] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE_GT,
    ACTIONS(486), 1,
      anon_sym_entity,
    STATE(277), 1,
      aux_sym_stage_chain_repeat1,
    STATE(363), 1,
      sym_entity_clause,
  [7214] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_score,
    STATE(292), 1,
      sym_score_output,
    STATE(298), 2,
      sym_score_call,
      sym_score_block,
  [7228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(230), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [7256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(231), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7270] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(502), 4,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_and,
      anon_sym_derive,
  [7280] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_and,
      anon_sym_derive,
  [7290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [7304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(285), 1,
      sym_named_argument,
    STATE(448), 1,
      sym_yield_field,
  [7320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    STATE(243), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7334] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [7348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(238), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7362] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_PIPE,
    ACTIONS(524), 1,
      anon_sym_AMP_AMP,
    STATE(350), 1,
      aux_sym_pipe_chain_repeat1,
    STATE(392), 1,
      sym_pipe_chain,
  [7378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(231), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(351), 1,
      sym_named_argument,
    STATE(448), 1,
      sym_yield_field,
  [7408] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_score,
    STATE(272), 1,
      sym_score_output,
    STATE(298), 2,
      sym_score_call,
      sym_score_block,
  [7422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(248), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(513), 1,
      sym_quoted_ident,
    STATE(314), 1,
      sym_named_argument,
    STATE(448), 1,
      sym_yield_field,
  [7452] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7462] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_conv,
    STATE(375), 1,
      sym_conv_clause,
    ACTIONS(534), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [7476] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE_GT,
    ACTIONS(486), 1,
      anon_sym_entity,
    STATE(227), 1,
      aux_sym_stage_chain_repeat1,
    STATE(348), 1,
      sym_entity_clause,
  [7492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    STATE(248), 2,
      sym_option_entry,
      aux_sym_options_block_repeat1,
  [7506] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7516] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_match,
    STATE(210), 1,
      sym_match_clause,
    STATE(247), 1,
      sym_stage,
    STATE(323), 1,
      sym_stage_chain,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(234), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [7546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(240), 2,
      sym_meta_entry,
      aux_sym_meta_block_repeat1,
  [7560] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_match,
    STATE(210), 1,
      sym_match_clause,
    STATE(247), 1,
      sym_stage,
    STATE(331), 1,
      sym_stage_chain,
  [7576] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_conv,
    STATE(352), 1,
      sym_conv_clause,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [7590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(223), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [7604] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_score,
    STATE(310), 1,
      sym_score_output,
    STATE(298), 2,
      sym_score_call,
      sym_score_block,
  [7618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(230), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [7632] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_meta,
    ACTIONS(563), 1,
      anon_sym_events,
    STATE(253), 1,
      sym_events_block,
    STATE(337), 1,
      sym_meta_block,
  [7648] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_rule,
      anon_sym_test,
  [7658] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DASH_GT,
    ACTIONS(567), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7670] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_yield_clause_repeat1,
  [7683] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(578), 1,
      anon_sym_PIPE,
    STATE(274), 1,
      aux_sym_conv_chain_repeat1,
  [7696] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(580), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [7705] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_PIPE,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      aux_sym_conv_chain_repeat1,
  [7718] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_session,
    ACTIONS(586), 1,
      sym_duration,
    STATE(398), 1,
      sym_window_spec,
  [7731] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    STATE(429), 1,
      sym_derive_block,
  [7744] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_match_params_repeat1,
  [7757] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_EQ,
    ACTIONS(596), 1,
      anon_sym_DOT,
    STATE(315), 1,
      aux_sym_yield_field_repeat1,
  [7770] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(598), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [7779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(229), 2,
      sym_event_declaration,
      aux_sym_events_block_repeat1,
  [7790] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7799] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(600), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [7808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_AMP_AMP,
  [7821] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_PIPE,
    STATE(274), 1,
      aux_sym_conv_chain_repeat1,
  [7834] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_options,
    STATE(408), 1,
      sym_options_block,
  [7847] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_snapshot,
    ACTIONS(619), 1,
      anon_sym_asof,
    STATE(420), 1,
      sym_join_mode,
  [7860] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_PIPE_GT,
    ACTIONS(624), 1,
      anon_sym_entity,
    STATE(277), 1,
      aux_sym_stage_chain_repeat1,
  [7873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(428), 1,
      sym_yield_target,
  [7886] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_input_statement_repeat1,
  [7899] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(634), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [7908] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_hit,
    ACTIONS(636), 2,
      anon_sym_RBRACE,
      anon_sym_hits,
  [7919] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_COLON,
    STATE(267), 1,
      aux_sym_match_params_repeat1,
  [7932] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(642), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [7941] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_hit,
    ACTIONS(644), 2,
      anon_sym_RBRACE,
      anon_sym_hits,
  [7952] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_yield_clause_repeat1,
  [7965] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(652), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [7974] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [7987] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_yield_clause_repeat1,
  [8000] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(656), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [8009] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_session,
    ACTIONS(586), 1,
      sym_duration,
    STATE(439), 1,
      sym_window_spec,
  [8022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(660), 1,
      sym_string,
    STATE(279), 1,
      sym_field_assignment,
  [8035] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(662), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8044] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      anon_sym_PIPE_PIPE,
    STATE(293), 1,
      aux_sym_match_step_repeat1,
  [8057] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(669), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(249), 1,
      sym_join_condition,
    STATE(401), 1,
      sym_field_reference,
  [8079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(251), 2,
      sym_score_item,
      aux_sym_score_block_repeat1,
  [8090] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(671), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8099] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(673), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8108] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_yield_clause_repeat1,
  [8121] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(677), 3,
      anon_sym_RBRACE,
      anon_sym_conv,
      anon_sym_limits,
  [8130] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(679), 1,
      anon_sym_EQ,
    STATE(268), 1,
      aux_sym_yield_field_repeat1,
  [8143] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_PIPE_PIPE,
    STATE(333), 1,
      aux_sym_match_step_repeat1,
  [8156] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_match,
    STATE(210), 1,
      sym_match_clause,
    STATE(359), 1,
      sym_stage,
  [8169] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(480), 1,
      sym_derive_block,
  [8182] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(685), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8191] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8204] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_session,
    ACTIONS(586), 1,
      sym_duration,
    STATE(395), 1,
      sym_window_spec,
  [8217] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_COLON,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_match_params_repeat1,
  [8230] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_derive,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(435), 1,
      sym_derive_block,
  [8243] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(255), 2,
      sym_derive_item,
      aux_sym_derive_block_repeat1,
  [8263] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8276] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8289] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_yield_clause_repeat1,
  [8302] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_EQ,
    ACTIONS(702), 1,
      anon_sym_DOT,
    STATE(315), 1,
      aux_sym_yield_field_repeat1,
  [8315] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_input_statement_repeat1,
  [8328] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8341] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(712), 3,
      anon_sym_RBRACE,
      anon_sym_row,
      anon_sym_tick,
  [8350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(660), 1,
      sym_string,
    STATE(361), 1,
      sym_field_assignment,
  [8363] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(714), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8372] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_input_statement_repeat1,
  [8385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(257), 2,
      sym_key_item,
      aux_sym_key_block_repeat1,
  [8396] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    ACTIONS(720), 1,
      anon_sym_limits,
    STATE(459), 1,
      sym_limits_clause,
  [8409] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_PIPE_GT,
      anon_sym_join,
      anon_sym_entity,
  [8418] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8431] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(724), 3,
      ts_builtin_sym_end,
      anon_sym_rule,
      anon_sym_test,
  [8440] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8453] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8466] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8479] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_conv_step_repeat1,
  [8492] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_limits,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(477), 1,
      sym_limits_clause,
  [8505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(225), 1,
      sym_source_expression,
    STATE(387), 1,
      sym_step_branch,
  [8518] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(293), 1,
      aux_sym_match_step_repeat1,
  [8531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(200), 1,
      sym_join_condition,
    STATE(401), 1,
      sym_field_reference,
  [8544] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
  [8562] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_events,
    STATE(250), 1,
      sym_events_block,
  [8572] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_RBRACE,
      anon_sym_options,
  [8580] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_RBRACE,
      anon_sym_options,
  [8588] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_input,
    STATE(355), 1,
      sym_input_block,
  [8598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
    STATE(239), 1,
      sym_source_expression,
  [8608] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8618] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_identifier,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
  [8638] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8648] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8658] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8668] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_yield,
    STATE(246), 1,
      sym_yield_clause,
  [8678] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [8686] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8696] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8704] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8712] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_RBRACE,
      anon_sym_derive,
  [8720] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_RBRACE,
      anon_sym_derive,
  [8728] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_expect,
    STATE(275), 1,
      sym_expect_block,
  [8738] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(245), 1,
      sym_field_reference,
  [8756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [8766] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(624), 2,
      anon_sym_PIPE_GT,
      anon_sym_entity,
  [8774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(789), 1,
      sym_string,
  [8784] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_identifier,
    ACTIONS(793), 1,
      sym_string,
  [8802] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_yield,
    STATE(254), 1,
      sym_yield_clause,
  [8812] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [8822] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [8832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
  [8842] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_COLON,
    ACTIONS(808), 1,
      anon_sym_GT,
  [8852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(378), 1,
      sym_field_reference,
  [8862] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8870] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_EQ,
    ACTIONS(814), 1,
      anon_sym_DOT,
  [8880] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [8888] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8896] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      anon_sym_AT,
  [8906] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(822), 2,
      sym_number,
      sym_string,
  [8914] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      anon_sym_limits,
  [8922] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8930] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_event,
    ACTIONS(826), 1,
      anon_sym_close,
  [8940] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [8948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
  [8958] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_on,
    ACTIONS(834), 1,
      anon_sym_within,
  [8968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(502), 1,
      sym_field_reference,
  [8978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
  [8988] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(840), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [8996] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9004] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(844), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
  [9012] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      aux_sym_pipe_chain_repeat1,
  [9022] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_identifier,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [9040] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(852), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9048] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9056] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9064] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [9072] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
  [9079] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [9086] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_GT,
  [9093] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
  [9100] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [9107] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_GT,
  [9114] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
  [9121] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_fixed,
  [9128] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_EQ_EQ,
  [9135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [9142] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_number,
  [9149] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_string,
  [9156] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_string,
  [9163] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
  [9170] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_string,
  [9177] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [9184] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
  [9191] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
  [9198] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
  [9205] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DOT,
  [9212] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
  [9219] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [9226] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SEMI,
  [9233] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [9240] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_number,
  [9247] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LPAREN,
  [9254] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_expect,
  [9261] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_on,
  [9268] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_SEMI,
  [9275] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [9282] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_LBRACE,
  [9289] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_on,
  [9296] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_close,
  [9303] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [9310] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_duration,
  [9317] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
  [9324] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [9331] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [9338] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
  [9345] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_EQ,
  [9352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [9359] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_EQ,
  [9366] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [9373] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
  [9380] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_string,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
  [9394] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_GT,
  [9401] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_SEMI,
  [9408] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
  [9415] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [9422] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_EQ,
  [9429] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_LPAREN,
  [9436] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_EQ_EQ,
  [9443] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
  [9450] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
  [9457] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_EQ,
  [9464] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_PIPE,
  [9471] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
  [9478] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
  [9485] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
  [9492] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_SEMI,
  [9499] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_SEMI,
  [9506] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_version_tag,
  [9513] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
  [9520] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_GT,
  [9527] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
  [9534] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
  [9541] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_SEMI,
  [9548] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_on,
  [9555] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_match,
  [9562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_identifier,
  [9569] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_GT,
  [9576] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_events,
  [9583] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_string,
  [9590] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
  [9597] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
  [9604] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_transform,
  [9611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_identifier,
  [9618] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_yield,
  [9625] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LBRACK,
  [9632] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_LPAREN,
  [9639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_identifier,
  [9646] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_close,
  [9653] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_duration,
  [9660] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
  [9667] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
  [9674] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
  [9681] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [9688] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_LBRACE,
  [9695] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_expect,
  [9702] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_LBRACE,
  [9709] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_LBRACE,
  [9716] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_duration,
  [9723] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_GT,
  [9730] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_in,
  [9737] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
  [9744] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_string,
  [9751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_identifier,
  [9758] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
  [9765] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_COLON,
  [9772] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_string,
  [9779] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_string,
  [9786] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_EQ,
  [9793] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_events,
  [9800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_identifier,
  [9807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_identifier,
  [9814] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_EQ,
  [9821] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_RBRACE,
  [9828] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_LT,
  [9835] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
  [9842] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_number,
  [9849] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym_number,
  [9856] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACE,
  [9863] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym_number,
  [9870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym_identifier,
  [9877] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACE,
  [9884] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
  [9891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_identifier,
  [9898] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_string,
  [9905] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
  [9912] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_for,
  [9919] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
  [9926] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
  [9933] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
  [9940] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
  [9947] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1092), 1,
      ts_builtin_sym_end,
  [9954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_identifier,
  [9961] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_in,
  [9968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 96,
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
  [SMALL_STATE(55)] = 2571,
  [SMALL_STATE(56)] = 2617,
  [SMALL_STATE(57)] = 2647,
  [SMALL_STATE(58)] = 2677,
  [SMALL_STATE(59)] = 2707,
  [SMALL_STATE(60)] = 2737,
  [SMALL_STATE(61)] = 2767,
  [SMALL_STATE(62)] = 2799,
  [SMALL_STATE(63)] = 2829,
  [SMALL_STATE(64)] = 2859,
  [SMALL_STATE(65)] = 2889,
  [SMALL_STATE(66)] = 2919,
  [SMALL_STATE(67)] = 2957,
  [SMALL_STATE(68)] = 2989,
  [SMALL_STATE(69)] = 3025,
  [SMALL_STATE(70)] = 3055,
  [SMALL_STATE(71)] = 3099,
  [SMALL_STATE(72)] = 3129,
  [SMALL_STATE(73)] = 3159,
  [SMALL_STATE(74)] = 3189,
  [SMALL_STATE(75)] = 3219,
  [SMALL_STATE(76)] = 3249,
  [SMALL_STATE(77)] = 3279,
  [SMALL_STATE(78)] = 3309,
  [SMALL_STATE(79)] = 3339,
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
  [SMALL_STATE(91)] = 3802,
  [SMALL_STATE(92)] = 3851,
  [SMALL_STATE(93)] = 3900,
  [SMALL_STATE(94)] = 3949,
  [SMALL_STATE(95)] = 3998,
  [SMALL_STATE(96)] = 4047,
  [SMALL_STATE(97)] = 4096,
  [SMALL_STATE(98)] = 4145,
  [SMALL_STATE(99)] = 4185,
  [SMALL_STATE(100)] = 4215,
  [SMALL_STATE(101)] = 4253,
  [SMALL_STATE(102)] = 4279,
  [SMALL_STATE(103)] = 4323,
  [SMALL_STATE(104)] = 4349,
  [SMALL_STATE(105)] = 4379,
  [SMALL_STATE(106)] = 4419,
  [SMALL_STATE(107)] = 4463,
  [SMALL_STATE(108)] = 4499,
  [SMALL_STATE(109)] = 4527,
  [SMALL_STATE(110)] = 4571,
  [SMALL_STATE(111)] = 4606,
  [SMALL_STATE(112)] = 4629,
  [SMALL_STATE(113)] = 4656,
  [SMALL_STATE(114)] = 4679,
  [SMALL_STATE(115)] = 4702,
  [SMALL_STATE(116)] = 4745,
  [SMALL_STATE(117)] = 4768,
  [SMALL_STATE(118)] = 4791,
  [SMALL_STATE(119)] = 4834,
  [SMALL_STATE(120)] = 4877,
  [SMALL_STATE(121)] = 4920,
  [SMALL_STATE(122)] = 4963,
  [SMALL_STATE(123)] = 5006,
  [SMALL_STATE(124)] = 5029,
  [SMALL_STATE(125)] = 5062,
  [SMALL_STATE(126)] = 5085,
  [SMALL_STATE(127)] = 5128,
  [SMALL_STATE(128)] = 5155,
  [SMALL_STATE(129)] = 5178,
  [SMALL_STATE(130)] = 5209,
  [SMALL_STATE(131)] = 5252,
  [SMALL_STATE(132)] = 5275,
  [SMALL_STATE(133)] = 5298,
  [SMALL_STATE(134)] = 5321,
  [SMALL_STATE(135)] = 5344,
  [SMALL_STATE(136)] = 5367,
  [SMALL_STATE(137)] = 5390,
  [SMALL_STATE(138)] = 5433,
  [SMALL_STATE(139)] = 5456,
  [SMALL_STATE(140)] = 5479,
  [SMALL_STATE(141)] = 5522,
  [SMALL_STATE(142)] = 5545,
  [SMALL_STATE(143)] = 5568,
  [SMALL_STATE(144)] = 5609,
  [SMALL_STATE(145)] = 5644,
  [SMALL_STATE(146)] = 5667,
  [SMALL_STATE(147)] = 5690,
  [SMALL_STATE(148)] = 5733,
  [SMALL_STATE(149)] = 5776,
  [SMALL_STATE(150)] = 5819,
  [SMALL_STATE(151)] = 5846,
  [SMALL_STATE(152)] = 5889,
  [SMALL_STATE(153)] = 5912,
  [SMALL_STATE(154)] = 5955,
  [SMALL_STATE(155)] = 5978,
  [SMALL_STATE(156)] = 5996,
  [SMALL_STATE(157)] = 6028,
  [SMALL_STATE(158)] = 6048,
  [SMALL_STATE(159)] = 6073,
  [SMALL_STATE(160)] = 6093,
  [SMALL_STATE(161)] = 6107,
  [SMALL_STATE(162)] = 6133,
  [SMALL_STATE(163)] = 6153,
  [SMALL_STATE(164)] = 6167,
  [SMALL_STATE(165)] = 6184,
  [SMALL_STATE(166)] = 6201,
  [SMALL_STATE(167)] = 6218,
  [SMALL_STATE(168)] = 6241,
  [SMALL_STATE(169)] = 6258,
  [SMALL_STATE(170)] = 6275,
  [SMALL_STATE(171)] = 6292,
  [SMALL_STATE(172)] = 6309,
  [SMALL_STATE(173)] = 6326,
  [SMALL_STATE(174)] = 6345,
  [SMALL_STATE(175)] = 6362,
  [SMALL_STATE(176)] = 6379,
  [SMALL_STATE(177)] = 6396,
  [SMALL_STATE(178)] = 6413,
  [SMALL_STATE(179)] = 6430,
  [SMALL_STATE(180)] = 6453,
  [SMALL_STATE(181)] = 6470,
  [SMALL_STATE(182)] = 6487,
  [SMALL_STATE(183)] = 6504,
  [SMALL_STATE(184)] = 6521,
  [SMALL_STATE(185)] = 6538,
  [SMALL_STATE(186)] = 6555,
  [SMALL_STATE(187)] = 6572,
  [SMALL_STATE(188)] = 6589,
  [SMALL_STATE(189)] = 6606,
  [SMALL_STATE(190)] = 6626,
  [SMALL_STATE(191)] = 6646,
  [SMALL_STATE(192)] = 6664,
  [SMALL_STATE(193)] = 6682,
  [SMALL_STATE(194)] = 6698,
  [SMALL_STATE(195)] = 6712,
  [SMALL_STATE(196)] = 6730,
  [SMALL_STATE(197)] = 6750,
  [SMALL_STATE(198)] = 6770,
  [SMALL_STATE(199)] = 6787,
  [SMALL_STATE(200)] = 6804,
  [SMALL_STATE(201)] = 6819,
  [SMALL_STATE(202)] = 6836,
  [SMALL_STATE(203)] = 6853,
  [SMALL_STATE(204)] = 6870,
  [SMALL_STATE(205)] = 6881,
  [SMALL_STATE(206)] = 6898,
  [SMALL_STATE(207)] = 6913,
  [SMALL_STATE(208)] = 6930,
  [SMALL_STATE(209)] = 6947,
  [SMALL_STATE(210)] = 6962,
  [SMALL_STATE(211)] = 6977,
  [SMALL_STATE(212)] = 6994,
  [SMALL_STATE(213)] = 7009,
  [SMALL_STATE(214)] = 7022,
  [SMALL_STATE(215)] = 7033,
  [SMALL_STATE(216)] = 7048,
  [SMALL_STATE(217)] = 7059,
  [SMALL_STATE(218)] = 7076,
  [SMALL_STATE(219)] = 7090,
  [SMALL_STATE(220)] = 7102,
  [SMALL_STATE(221)] = 7118,
  [SMALL_STATE(222)] = 7130,
  [SMALL_STATE(223)] = 7144,
  [SMALL_STATE(224)] = 7158,
  [SMALL_STATE(225)] = 7170,
  [SMALL_STATE(226)] = 7186,
  [SMALL_STATE(227)] = 7198,
  [SMALL_STATE(228)] = 7214,
  [SMALL_STATE(229)] = 7228,
  [SMALL_STATE(230)] = 7242,
  [SMALL_STATE(231)] = 7256,
  [SMALL_STATE(232)] = 7270,
  [SMALL_STATE(233)] = 7280,
  [SMALL_STATE(234)] = 7290,
  [SMALL_STATE(235)] = 7304,
  [SMALL_STATE(236)] = 7320,
  [SMALL_STATE(237)] = 7334,
  [SMALL_STATE(238)] = 7348,
  [SMALL_STATE(239)] = 7362,
  [SMALL_STATE(240)] = 7378,
  [SMALL_STATE(241)] = 7392,
  [SMALL_STATE(242)] = 7408,
  [SMALL_STATE(243)] = 7422,
  [SMALL_STATE(244)] = 7436,
  [SMALL_STATE(245)] = 7452,
  [SMALL_STATE(246)] = 7462,
  [SMALL_STATE(247)] = 7476,
  [SMALL_STATE(248)] = 7492,
  [SMALL_STATE(249)] = 7506,
  [SMALL_STATE(250)] = 7516,
  [SMALL_STATE(251)] = 7532,
  [SMALL_STATE(252)] = 7546,
  [SMALL_STATE(253)] = 7560,
  [SMALL_STATE(254)] = 7576,
  [SMALL_STATE(255)] = 7590,
  [SMALL_STATE(256)] = 7604,
  [SMALL_STATE(257)] = 7618,
  [SMALL_STATE(258)] = 7632,
  [SMALL_STATE(259)] = 7648,
  [SMALL_STATE(260)] = 7658,
  [SMALL_STATE(261)] = 7670,
  [SMALL_STATE(262)] = 7683,
  [SMALL_STATE(263)] = 7696,
  [SMALL_STATE(264)] = 7705,
  [SMALL_STATE(265)] = 7718,
  [SMALL_STATE(266)] = 7731,
  [SMALL_STATE(267)] = 7744,
  [SMALL_STATE(268)] = 7757,
  [SMALL_STATE(269)] = 7770,
  [SMALL_STATE(270)] = 7779,
  [SMALL_STATE(271)] = 7790,
  [SMALL_STATE(272)] = 7799,
  [SMALL_STATE(273)] = 7808,
  [SMALL_STATE(274)] = 7821,
  [SMALL_STATE(275)] = 7834,
  [SMALL_STATE(276)] = 7847,
  [SMALL_STATE(277)] = 7860,
  [SMALL_STATE(278)] = 7873,
  [SMALL_STATE(279)] = 7886,
  [SMALL_STATE(280)] = 7899,
  [SMALL_STATE(281)] = 7908,
  [SMALL_STATE(282)] = 7919,
  [SMALL_STATE(283)] = 7932,
  [SMALL_STATE(284)] = 7941,
  [SMALL_STATE(285)] = 7952,
  [SMALL_STATE(286)] = 7965,
  [SMALL_STATE(287)] = 7974,
  [SMALL_STATE(288)] = 7987,
  [SMALL_STATE(289)] = 8000,
  [SMALL_STATE(290)] = 8009,
  [SMALL_STATE(291)] = 8022,
  [SMALL_STATE(292)] = 8035,
  [SMALL_STATE(293)] = 8044,
  [SMALL_STATE(294)] = 8057,
  [SMALL_STATE(295)] = 8066,
  [SMALL_STATE(296)] = 8079,
  [SMALL_STATE(297)] = 8090,
  [SMALL_STATE(298)] = 8099,
  [SMALL_STATE(299)] = 8108,
  [SMALL_STATE(300)] = 8121,
  [SMALL_STATE(301)] = 8130,
  [SMALL_STATE(302)] = 8143,
  [SMALL_STATE(303)] = 8156,
  [SMALL_STATE(304)] = 8169,
  [SMALL_STATE(305)] = 8182,
  [SMALL_STATE(306)] = 8191,
  [SMALL_STATE(307)] = 8204,
  [SMALL_STATE(308)] = 8217,
  [SMALL_STATE(309)] = 8230,
  [SMALL_STATE(310)] = 8243,
  [SMALL_STATE(311)] = 8252,
  [SMALL_STATE(312)] = 8263,
  [SMALL_STATE(313)] = 8276,
  [SMALL_STATE(314)] = 8289,
  [SMALL_STATE(315)] = 8302,
  [SMALL_STATE(316)] = 8315,
  [SMALL_STATE(317)] = 8328,
  [SMALL_STATE(318)] = 8341,
  [SMALL_STATE(319)] = 8350,
  [SMALL_STATE(320)] = 8363,
  [SMALL_STATE(321)] = 8372,
  [SMALL_STATE(322)] = 8385,
  [SMALL_STATE(323)] = 8396,
  [SMALL_STATE(324)] = 8409,
  [SMALL_STATE(325)] = 8418,
  [SMALL_STATE(326)] = 8431,
  [SMALL_STATE(327)] = 8440,
  [SMALL_STATE(328)] = 8453,
  [SMALL_STATE(329)] = 8466,
  [SMALL_STATE(330)] = 8479,
  [SMALL_STATE(331)] = 8492,
  [SMALL_STATE(332)] = 8505,
  [SMALL_STATE(333)] = 8518,
  [SMALL_STATE(334)] = 8531,
  [SMALL_STATE(335)] = 8544,
  [SMALL_STATE(336)] = 8552,
  [SMALL_STATE(337)] = 8562,
  [SMALL_STATE(338)] = 8572,
  [SMALL_STATE(339)] = 8580,
  [SMALL_STATE(340)] = 8588,
  [SMALL_STATE(341)] = 8598,
  [SMALL_STATE(342)] = 8608,
  [SMALL_STATE(343)] = 8618,
  [SMALL_STATE(344)] = 8628,
  [SMALL_STATE(345)] = 8638,
  [SMALL_STATE(346)] = 8648,
  [SMALL_STATE(347)] = 8658,
  [SMALL_STATE(348)] = 8668,
  [SMALL_STATE(349)] = 8678,
  [SMALL_STATE(350)] = 8686,
  [SMALL_STATE(351)] = 8696,
  [SMALL_STATE(352)] = 8704,
  [SMALL_STATE(353)] = 8712,
  [SMALL_STATE(354)] = 8720,
  [SMALL_STATE(355)] = 8728,
  [SMALL_STATE(356)] = 8738,
  [SMALL_STATE(357)] = 8746,
  [SMALL_STATE(358)] = 8756,
  [SMALL_STATE(359)] = 8766,
  [SMALL_STATE(360)] = 8774,
  [SMALL_STATE(361)] = 8784,
  [SMALL_STATE(362)] = 8792,
  [SMALL_STATE(363)] = 8802,
  [SMALL_STATE(364)] = 8812,
  [SMALL_STATE(365)] = 8822,
  [SMALL_STATE(366)] = 8832,
  [SMALL_STATE(367)] = 8842,
  [SMALL_STATE(368)] = 8852,
  [SMALL_STATE(369)] = 8862,
  [SMALL_STATE(370)] = 8870,
  [SMALL_STATE(371)] = 8880,
  [SMALL_STATE(372)] = 8888,
  [SMALL_STATE(373)] = 8896,
  [SMALL_STATE(374)] = 8906,
  [SMALL_STATE(375)] = 8914,
  [SMALL_STATE(376)] = 8922,
  [SMALL_STATE(377)] = 8930,
  [SMALL_STATE(378)] = 8940,
  [SMALL_STATE(379)] = 8948,
  [SMALL_STATE(380)] = 8958,
  [SMALL_STATE(381)] = 8968,
  [SMALL_STATE(382)] = 8978,
  [SMALL_STATE(383)] = 8988,
  [SMALL_STATE(384)] = 8996,
  [SMALL_STATE(385)] = 9004,
  [SMALL_STATE(386)] = 9012,
  [SMALL_STATE(387)] = 9022,
  [SMALL_STATE(388)] = 9030,
  [SMALL_STATE(389)] = 9040,
  [SMALL_STATE(390)] = 9048,
  [SMALL_STATE(391)] = 9056,
  [SMALL_STATE(392)] = 9064,
  [SMALL_STATE(393)] = 9072,
  [SMALL_STATE(394)] = 9079,
  [SMALL_STATE(395)] = 9086,
  [SMALL_STATE(396)] = 9093,
  [SMALL_STATE(397)] = 9100,
  [SMALL_STATE(398)] = 9107,
  [SMALL_STATE(399)] = 9114,
  [SMALL_STATE(400)] = 9121,
  [SMALL_STATE(401)] = 9128,
  [SMALL_STATE(402)] = 9135,
  [SMALL_STATE(403)] = 9142,
  [SMALL_STATE(404)] = 9149,
  [SMALL_STATE(405)] = 9156,
  [SMALL_STATE(406)] = 9163,
  [SMALL_STATE(407)] = 9170,
  [SMALL_STATE(408)] = 9177,
  [SMALL_STATE(409)] = 9184,
  [SMALL_STATE(410)] = 9191,
  [SMALL_STATE(411)] = 9198,
  [SMALL_STATE(412)] = 9205,
  [SMALL_STATE(413)] = 9212,
  [SMALL_STATE(414)] = 9219,
  [SMALL_STATE(415)] = 9226,
  [SMALL_STATE(416)] = 9233,
  [SMALL_STATE(417)] = 9240,
  [SMALL_STATE(418)] = 9247,
  [SMALL_STATE(419)] = 9254,
  [SMALL_STATE(420)] = 9261,
  [SMALL_STATE(421)] = 9268,
  [SMALL_STATE(422)] = 9275,
  [SMALL_STATE(423)] = 9282,
  [SMALL_STATE(424)] = 9289,
  [SMALL_STATE(425)] = 9296,
  [SMALL_STATE(426)] = 9303,
  [SMALL_STATE(427)] = 9310,
  [SMALL_STATE(428)] = 9317,
  [SMALL_STATE(429)] = 9324,
  [SMALL_STATE(430)] = 9331,
  [SMALL_STATE(431)] = 9338,
  [SMALL_STATE(432)] = 9345,
  [SMALL_STATE(433)] = 9352,
  [SMALL_STATE(434)] = 9359,
  [SMALL_STATE(435)] = 9366,
  [SMALL_STATE(436)] = 9373,
  [SMALL_STATE(437)] = 9380,
  [SMALL_STATE(438)] = 9387,
  [SMALL_STATE(439)] = 9394,
  [SMALL_STATE(440)] = 9401,
  [SMALL_STATE(441)] = 9408,
  [SMALL_STATE(442)] = 9415,
  [SMALL_STATE(443)] = 9422,
  [SMALL_STATE(444)] = 9429,
  [SMALL_STATE(445)] = 9436,
  [SMALL_STATE(446)] = 9443,
  [SMALL_STATE(447)] = 9450,
  [SMALL_STATE(448)] = 9457,
  [SMALL_STATE(449)] = 9464,
  [SMALL_STATE(450)] = 9471,
  [SMALL_STATE(451)] = 9478,
  [SMALL_STATE(452)] = 9485,
  [SMALL_STATE(453)] = 9492,
  [SMALL_STATE(454)] = 9499,
  [SMALL_STATE(455)] = 9506,
  [SMALL_STATE(456)] = 9513,
  [SMALL_STATE(457)] = 9520,
  [SMALL_STATE(458)] = 9527,
  [SMALL_STATE(459)] = 9534,
  [SMALL_STATE(460)] = 9541,
  [SMALL_STATE(461)] = 9548,
  [SMALL_STATE(462)] = 9555,
  [SMALL_STATE(463)] = 9562,
  [SMALL_STATE(464)] = 9569,
  [SMALL_STATE(465)] = 9576,
  [SMALL_STATE(466)] = 9583,
  [SMALL_STATE(467)] = 9590,
  [SMALL_STATE(468)] = 9597,
  [SMALL_STATE(469)] = 9604,
  [SMALL_STATE(470)] = 9611,
  [SMALL_STATE(471)] = 9618,
  [SMALL_STATE(472)] = 9625,
  [SMALL_STATE(473)] = 9632,
  [SMALL_STATE(474)] = 9639,
  [SMALL_STATE(475)] = 9646,
  [SMALL_STATE(476)] = 9653,
  [SMALL_STATE(477)] = 9660,
  [SMALL_STATE(478)] = 9667,
  [SMALL_STATE(479)] = 9674,
  [SMALL_STATE(480)] = 9681,
  [SMALL_STATE(481)] = 9688,
  [SMALL_STATE(482)] = 9695,
  [SMALL_STATE(483)] = 9702,
  [SMALL_STATE(484)] = 9709,
  [SMALL_STATE(485)] = 9716,
  [SMALL_STATE(486)] = 9723,
  [SMALL_STATE(487)] = 9730,
  [SMALL_STATE(488)] = 9737,
  [SMALL_STATE(489)] = 9744,
  [SMALL_STATE(490)] = 9751,
  [SMALL_STATE(491)] = 9758,
  [SMALL_STATE(492)] = 9765,
  [SMALL_STATE(493)] = 9772,
  [SMALL_STATE(494)] = 9779,
  [SMALL_STATE(495)] = 9786,
  [SMALL_STATE(496)] = 9793,
  [SMALL_STATE(497)] = 9800,
  [SMALL_STATE(498)] = 9807,
  [SMALL_STATE(499)] = 9814,
  [SMALL_STATE(500)] = 9821,
  [SMALL_STATE(501)] = 9828,
  [SMALL_STATE(502)] = 9835,
  [SMALL_STATE(503)] = 9842,
  [SMALL_STATE(504)] = 9849,
  [SMALL_STATE(505)] = 9856,
  [SMALL_STATE(506)] = 9863,
  [SMALL_STATE(507)] = 9870,
  [SMALL_STATE(508)] = 9877,
  [SMALL_STATE(509)] = 9884,
  [SMALL_STATE(510)] = 9891,
  [SMALL_STATE(511)] = 9898,
  [SMALL_STATE(512)] = 9905,
  [SMALL_STATE(513)] = 9912,
  [SMALL_STATE(514)] = 9919,
  [SMALL_STATE(515)] = 9926,
  [SMALL_STATE(516)] = 9933,
  [SMALL_STATE(517)] = 9940,
  [SMALL_STATE(518)] = 9947,
  [SMALL_STATE(519)] = 9954,
  [SMALL_STATE(520)] = 9961,
  [SMALL_STATE(521)] = 9968,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 3, 0, 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 3, 0, 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_reference, 4, 0, 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_reference, 4, 0, 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, 0, 16),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, 0, 16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 12),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 5, 0, 17),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 5, 0, 17),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_expression, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in_expression, 6, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 17),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 13),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 6, 0, 13),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 4, 0, 13),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 4, 0, 13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 6, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 12),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 12),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_expression, 7, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in_expression, 7, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 16),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 16),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 3, 0, 13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 3, 0, 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measure, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 12),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, 0, 16),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, 0, 16),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_pipe_expression, 7, 0, 13),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_pipe_expression, 7, 0, 13),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_reason_ref, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_reason_ref, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 5, 0, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_step_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_assignment, 3, 0, 18),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3, 0, 11),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hit_assertion, 6, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_clause_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limits_clause_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_limits_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_event_block_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_on_event_block_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(521),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(519),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5, 0, 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_chain, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stage_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expect_block_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_clause_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 6, 0, 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_chain, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_item, 4, 0, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 1, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 10, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 9, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_derive_block_repeat1, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 7, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 6, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_block_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_block_repeat1, 2, 0, 0),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_block_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_block_repeat1, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_block, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_event_block, 5, 0, 0),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_score_block_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_score_block_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_events_block_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_events_block_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_condition, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_block_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_block_repeat1, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 4, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 8, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yield_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yield_clause_repeat1, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 8, 0, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 4, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 6, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 12, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 3, 0, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_declaration, 3, 0, 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conv_chain_repeat1, 2, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stage_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stage_chain_repeat1, 2, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 5, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_statement, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expect_statement, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 8, 0, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_statement, 7, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expect_statement, 7, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 8, 0, 19),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 4, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 11, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_step_repeat1, 2, 0, 0),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_step_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, 0, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_call, 4, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_output, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_clause, 5, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_block, 4, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_params_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_params_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yield_field_repeat1, 2, 0, 0),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yield_field_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_statement_repeat1, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 7, 0, 19),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 6, 0, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 9, 0, 5),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conv_step_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 5, 0, 15),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derive_item, 4, 0, 11),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derive_item, 4, 0, 11),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expect_block, 4, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_step, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_step, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 2, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_chain, 5, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_close_block, 5, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_close_block, 5, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_clause, 4, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_entry, 4, 0, 2),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_entry, 4, 0, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipe_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_entry, 3, 0, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_entry, 3, 0, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 1, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 4, 0, 15),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_field, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conv_step, 3, 0, 15),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_target, 1, 0, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score_item, 6, 0, 22),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_item, 6, 0, 22),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_mode, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_item, 4, 0, 20),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_item, 4, 0, 20),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 4, 0, 13),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_expression, 3, 0, 17),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_step, 3, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_step, 3, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 6, 0, 21),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_chain, 4, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_chain, 5, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_branch, 4, 0, 21),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 4, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_target, 3, 0, 8),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hit_assertion, 3, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 3, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derive_block, 4, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits_clause, 4, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_params, 2, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipe_chain_repeat1, 2, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_block, 4, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_mode, 3, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_block, 4, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 3, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_block, 4, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_clause, 6, 0, 10),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 4, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_spec, 4, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_block, 3, 0, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_block, 3, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1092] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
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
