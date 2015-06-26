#ifndef DIRECTFIX_COMPONENT
#define DIRECTFIX_COMPONENT

#include <util/expr.h>
#include <util/std_types.h>
#include <util/std_expr.h>
#include <util/dstring.h>
#include <solvers/prop/prop_conv.h>

#include <string>
#include <list>
#include <algorithm>

class component_exprt
{
  public:
  component_exprt(
    const namespacet &_ns,
    const exprt &_expr,
    const exprt &_sep_i,
    const exprt &_sep_j,
    const std::string &_function,
    const int &_instruction_number,
    const bool &_is_loop_statement,
    decision_proceduret &_solver);


  const namespacet &ns;
  const exprt &expr;
  const exprt &sep_i;
  const exprt &sep_j;
  const std::string function;
  const int &instruction_number;
  const bool &is_loop_statement;
  decision_proceduret &solver;
  int component_cnt; //Should be equal to (sep_j-sep_i)

  std::map<dstring, std::string> id_maps; //Couldn't think of a workaround


  //If need be - Can improve efficiency, but not needed right now
  //std::map<dstring, int> op_cnt;
  //std::map<irep_idt, int> sym_const_cnt;

  //The auxilliary variable V
  exprt v_assign;
  exprt location_v_assign;

  //Define Location Variable
  void get_df_loc_var(const exprt &expr);
  void gen_loc_var(exprt &loc_var,
      const exprt &expr, 
      std::string suffix="");
  void gen_comp_var(
      exprt &comp_var, 
      const exprt &expr, 
      std::string suffix="");

  void add_range_constraint(const exprt &expr);

  void add_semantic_constraint(
    const exprt &loc_var, 
    const exprt &expr);

  void add_acyclic_constraint(
    const exprt &inp, 
    const exprt &out);

  void add_consistency_constraint(const exprt &loc_var);

  void add_conn_constraint(
    const exprt &loc_inp_var, 
    const exprt &comp_inv_var);



  void parse_expr(const exprt &expr);
  void parse_expr_rec(const exprt &expr);


  expr_listt location_variables;
  expr_listt out_location_variables;
  expr_listt out_component_variables;
  expr_listt component_variables;

  expr_listt phi_struct;  //Structure Constraint - Soft
  expr_listt phi_range;   //Range Constraint - Hard
  expr_listt phi_sem;     //Semantics Constraint - Hard
  expr_listt phi_conn;    //Connection Constraint - Hard
  expr_listt phi_cons;    //Consistency Constraint - Hard - Output of each component has a unique location
  expr_listt phi_acyc;    //Acyclic Constraint - Hard - Forbid Cyclic Connections
};

#endif



