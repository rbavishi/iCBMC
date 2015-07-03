#ifndef DIRECTFIX_COMPONENT
#define DIRECTFIX_COMPONENT

#include <util/expr.h>
#include <util/std_types.h>
#include <util/std_expr.h>
#include <util/dstring.h>
#include <util/source_location.h>
#include <solvers/prop/prop_conv.h>
#include <solvers/smt1/smt1_conv.h>

#include <string>
#include <list>
#include <algorithm>
#include <set>

class component_exprt
{
  public:
  component_exprt(
    const namespacet &_ns,
    const exprt &_expr,
    const source_locationt &source_location,
    const exprt &_sep_i,
    const exprt &_sep_j,
    const std::string &_function,
    const int &_unique_identifier,
    const int &_instruction_number,
    const bool &_is_loop_statement,
    const int &_type_stmt,
    smt1_convt &_solver);


  const namespacet &ns;
  const exprt &expr;
  const source_locationt &source_location;
  const exprt &sep_i;
  const exprt &sep_j;
  const std::string function;
  const int &unique_identifier;
  const int &instruction_number;
  const bool &is_loop_statement;
  const int &type_stmt;
  smt1_convt &solver;
  int component_cnt; //Should be equal to (sep_j-sep_i)

  std::map<dstring, std::string> id_maps; //Couldn't think of a workaround
  std::set<typet> type_reduction;


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



  void parse_expr();
  void parse_expr_rec(const exprt &expr);


  expr_listt location_variables;
  expr_listt component_variables;
  expr_listt out_location_variables;
  expr_listt out_component_variables;
  expr_listt in_location_variables;
  expr_listt in_component_variables;
  expr_listt new_out_loc;
  expr_listt new_out_comp;
  expr_listt new_in_loc;
  expr_listt new_in_comp;

  expr_listt phi_struct;  //Structure Constraint - Soft
  expr_listt phi_range;   //Range Constraint - Hard
  expr_listt phi_sem;     //Semantics Constraint - Hard
  expr_listt phi_conn;    //Connection Constraint - Hard
  expr_listt phi_cons;    //Consistency Constraint - Hard - Output of each component has a unique location
  expr_listt phi_acyc;    //Acyclic Constraint - Hard - Forbid Cyclic Connections

  void output_soft();
  void output_hard();
  void output_range();
  void output_sem();
  void output_acyc();
  void output_cons();
  void output_conn();

  //Component Addition

  void add_component(
    const exprt &loc_var_global,
    std::string var_name,
    const exprt &original_expr,
    const int &identifier_addition);

  void reject_component(
    const exprt &loc_var_global);

};

#endif



