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
    prop_convt &_solver):
    ns(_ns),
    solver(_solver)
  {
    initialize();
    aux_var_cnt=1;
    additional_components=0;
    expression_cnt=0;
    total_components=0;
  }

  const namespacet &ns;
  prop_convt &solver;

  std::map<int, int> loop_maps;
  std::map<std::string, exprt> variable_maps;
  std::map<std::string, exprt> variable_maps_loc;
  expr_listt separators;
  expr_listt hard_constraints;
  int aux_var_cnt;
  int additional_components;
  int expression_cnt;
  int total_components;

  typedef std::list<component_exprt> component_expr_listt;
  typedef std::list<symex_target_equationt::SSA_stept> SSA_step_listt;
  std::map<std::string, bool> is_used;
  std::map<std::string, bool> is_ready;
  std::map<std::string, exprt> scope;

  SSA_step_listt waiting_decls;

  component_expr_listt cbe_expressions;

  void initialize();
  void add_assignment(
    const symex_target_equationt::SSA_stept &SSA_step,
    const bool &is_loop_stmt);

  void add_decl(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_dead(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_assumption_assertion(
      const symex_target_equationt::SSA_stept &SSA_step);

  void add_variable_components();
  //void add_scope(
  //    const symex_target_equationt::SSA_stept &SSA_step);
  void clean_up(
      const symex_target_equationt::SSA_stept &SSA_step);
  void advance_separators();
  void output_hard();
  void output();
  


};

#endif


