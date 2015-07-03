#ifndef DIRECTFIX_PROTOTYPE
#define DIRECTFIX_PROTOTYPE

#include <util/expr.h>
#include <util/std_types.h>
#include <util/std_expr.h>
#include <goto-symex/symex_target_equation.h>
#include "component_e.h"

void exprt_visit(const exprt &expr);

class test_caset
{
  public:
  test_caset(
    const namespacet &_ns,
    smt1_convt &_solver);

  const namespacet &ns;
  smt1_convt &solver;

  typedef std::list<component_exprt> component_expr_listt;
  typedef std::list<symex_target_equationt::SSA_stept> SSA_step_listt;
  std::map<int, int> loop_maps;
  std::map<std::string, expr_listt> variable_maps;
  expr_listt guard_frames;
  std::map<std::string, expr_listt> variable_maps_loc;
  expr_listt separators;
  expr_listt hard_constraints;
  int aux_var_cnt;
  int additional_components;
  int expression_cnt;
  int total_components;

  std::map<std::string, bool> is_used;
  std::map<std::string, exprt> scope;
  std::map<std::string, std::vector<int> > loc_code_extra;
  std::map<int, bool> guard_loop_phantom;
  std::map<int, bool> state_loop_phantom;

  std::map<dstring, int> bv64_ops;
  std::map<dstring, int> bv32_ops;
  std::map<dstring, int> unbv64_ops;
  std::map<dstring, int> unbv32_ops;
  std::map<dstring, int> logical_ops;
  std::map<dstring, int> relation_64;
  std::map<dstring, int> relation_8;
  std::map<dstring, int> relation_32;
  std::map<dstring, int> urelation_64;
  std::map<dstring, int> urelation_32;

  std::map<std::string, exprt> operators;
  std::map<std::string, expr_listt> operators_loc;

  std::map<int, exprt> decl_var_range;
  std::map<int, exprt> dead_var_range;
  std::map<int, exprt> loc_var_range;

  int num_var_additions;

  SSA_step_listt waiting_decls;
  SSA_step_listt waiting_phis;

  component_expr_listt cbe_expressions;

  exprt s_final;

  void initialize();
  void initialize_operators();
  std::string get_op_name(const dstring &id);
  void create_op(const typet &type_id, const dstring &op_id, const typet &input_id);
  void clear_phis();

  void add_constraints_op(const exprt &loc_var);
  void add_assignment(
    const symex_target_equationt::SSA_stept &SSA_step,
    const bool &is_loop_stmt);
 
  void adjust_guard_frames(const symex_target_equationt::SSA_stept &SSA_step);

  void add_decl(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_dead(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_assumption_assertion(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_variable_components(const bool &reject_unconditionally);
  void kill_ops();
  void add_guard_components(
      const symex_target_equationt::SSA_stept &SSA_step,
      const exprt &sep_i,
      const exprt &sep_j,
      const bool &is_loop_stmt);
  void add_state_components(
      const symex_target_equationt::SSA_stept &SSA_step,
      const exprt &sep_i,
      const exprt &sep_j,
      const bool &is_loop_stmt);
  
  void cross_int_constraint();
  //void add_scope(;
  //    const symex_target_equationt::SSA_stept &SSA_step);
  void clean_up(
      const symex_target_equationt::SSA_stept &SSA_step);
  void advance_separators();
  void output_hard();
  void output();
  
  void add_declaration(const symex_target_equationt::SSA_stept &SSA_step);
  std::set<exprt> undefined_list;
  bool check_if_undefined(const exprt &lhs, const exprt &rhs);
  void process_decls();
  void process_deads();

  std::map<dstring, std::string> id_maps; //Couldn't think of a workaround

};

#endif


