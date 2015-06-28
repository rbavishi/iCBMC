#include <iostream>
#include <util/irep.h>
#include <util/i2string.h>
#include <util/irep.h>
#include <langapi/language_util.h>
#include "cbe.h"
void exprt_visit(const exprt &expr)
{
  const typet &type=expr.type();
  if (expr.id() == ID_symbol)
    std::cout << to_symbol_expr(expr).get_identifier() << std::endl;
  else
    std::cout << expr.id() << "\n";
  std::cout << "ID: " << id2string(expr.id()) << "\n";
  if (type.id()==ID_signedbv) {
    exprt trial=expr;
    typet new_type(ID_signedbv);
    to_signedbv_type(new_type).set_width(64);
    trial.make_typecast(new_type);
    trial.operands()=expr.operands();
    std::cout << type.id() << to_signedbv_type(type).get_width() << std::endl;
  }
  else if (type.id()==ID_unsignedbv)
    std::cout << type.id() << to_unsignedbv_type(type).get_width() << std::endl;
  else
    std::cout << type.id() << std::endl;
  forall_operands(it, expr)
    exprt_visit(*it);

}

std::string get_basic_name(std::string var_name)
{
  std::string ret_str="";
  for (unsigned int i=0; i<var_name.size(); i++)
  {
    if(var_name[i]!='!')
      ret_str+=var_name[i];
    else
      break;
  }
  return ret_str;
}

void test_caset::initialize()
{
  typet type(ID_integer);
  exprt s_0(ID_symbol, type);
  //exprt s_1(ID_symbol, type);
  to_symbol_expr(s_0).set_identifier("s_0");
  //to_symbol_expr(s_1).set_identifier("s_1");
  separators.push_back(s_0);
  //separators.push_back(s_1);

  exprt constant_0(ID_constant, type);
  to_constant_expr(constant_0).set_value(i2string(0));
  equal_exprt init(s_0, constant_0);
  hard_constraints.push_back(init);

  //binary_relation_exprt separator_constraint(s_0, ID_lt, s_1);
  //hard_constraints.push_back(separator_constraint);

}

void test_caset::add_assignment(
    const symex_target_equationt::SSA_stept &SSA_step,
    const bool &is_loop_stmt)
{

  if(SSA_step.assignment_type==symex_targett::GUARD)
  {
    advance_separators();
    expr_listt::iterator sep_i_it, sep_j_it;
    sep_i_it=separators.end();
    sep_i_it--; sep_j_it=sep_i_it; sep_i_it--;
    //Make the Guard Variable the auxiliary variable itself
    component_exprt new_expression(
      ns,
      SSA_step.cond_expr,
      SSA_step.source.pc->source_location,
      *sep_i_it,
      *sep_j_it,
      id2string(SSA_step.source.pc->function),
      expression_cnt,
      SSA_step.source.pc->location_number,
      is_loop_stmt,
      solver);
    cbe_expressions.push_back(new_expression);
    cbe_expressions.back().parse_expr();
    expression_cnt++;
    total_components+=cbe_expressions.back().component_cnt;
    add_variable_components();
    //clean_up(SSA_step);
    
  }
  else if ((SSA_step.assignment_type==symex_targett::PHI) || (SSA_step.assignment_type==symex_targett::RETURN))
  {
    //No need to get an explicit CBE expression
    hard_constraints.push_back(SSA_step.cond_expr);
    std::cout << "HIDING: " << from_expr(ns, "", SSA_step.cond_expr) << std::endl;
  }
  else
  {
    advance_separators();
    expr_listt::iterator sep_i_it, sep_j_it;
    sep_i_it=separators.end();
    sep_i_it--; sep_j_it=sep_i_it; sep_i_it--;
    //Normal Instruction
    exprt aux_var_v=SSA_step.ssa_lhs;
    to_symbol_expr(aux_var_v).set_identifier("V_"+i2string(aux_var_cnt));
    aux_var_cnt++;

    equal_exprt new_expr(aux_var_v, SSA_step.ssa_rhs);
    component_exprt new_expression(
      ns,
      new_expr,
      SSA_step.source.pc->source_location,
      *sep_i_it,
      *sep_j_it,
      id2string(SSA_step.source.pc->function),
      expression_cnt,
      SSA_step.source.pc->location_number,
      is_loop_stmt,
      solver);
    cbe_expressions.push_back(new_expression);
    cbe_expressions.back().parse_expr();
    expression_cnt++;
    total_components+=cbe_expressions.back().component_cnt;
    add_variable_components();
    clean_up(SSA_step);

    equal_exprt hard_cons(SSA_step.ssa_lhs, aux_var_v);
    hard_constraints.push_back(hard_cons);
  }
  //cbe_expressions.back().output_soft();
  //cbe_expressions.back().output_sem();
}   
  
/*
void test_caset::add_scope(
    const symex_target_equationt::SSA_stept &SSA_step)
{
  //std::string basic_name=get_basic_name(id2string(SSA_step.ssa_lhs.get_identifier()));
  //scope[basic_name]=separators.back();
}
*/
void test_caset::add_decl( 
    const symex_target_equationt::SSA_stept &SSA_step)
{
  additional_components+=1;
  std::string basic_name=get_basic_name(id2string(SSA_step.ssa_lhs.get_identifier()));
  std::cout << "NEW NAME: " << basic_name << "\n";
  variable_maps[basic_name]=SSA_step.ssa_lhs;

  //Range Constraint
  typet loc_var_type(ID_integer);
  exprt loc_var_new(ID_symbol, loc_var_type);
  std::string loc_var_name="L_Extra"+i2string(additional_components)+"_"+basic_name;
  to_symbol_expr(loc_var_new).set_identifier(loc_var_name);

  binary_relation_exprt range_cons(scope[basic_name], ID_le, loc_var_new);
  hard_constraints.push_back(range_cons);
  std::cout << "NEW PUSHED NAME: " << basic_name << "\n";

  //Consitency Constraint
  std::map<std::string, exprt>::iterator it=variable_maps_loc.begin();
  while(it!=variable_maps_loc.end())
  {
    notequal_exprt cons_constraint(it->second, loc_var_new);
    hard_constraints.push_back(cons_constraint);
    it++;
  }
  variable_maps_loc[basic_name]=loc_var_new;
}

void test_caset::add_variable_components()
{
  if(waiting_decls.empty()==false)
  {
    while(waiting_decls.empty()==false)
    {
      add_decl(waiting_decls.front());
      waiting_decls.pop_front();
    }
  }
  std::map<std::string, exprt>::iterator it=variable_maps.begin();
  while(it!=variable_maps.end())
  {
    cbe_expressions.back().add_variable_component(variable_maps_loc[it->first], it->first, it->second); 
    std::cout << "Adding" << " " << from_expr(ns, "", variable_maps_loc[it->first]) << it->first << std::endl;;
    it++;
  }
}

void test_caset::clean_up(
      const symex_target_equationt::SSA_stept &SSA_step)
{
  const symbol_exprt &target=SSA_step.ssa_lhs;
  std::string base_name=get_basic_name(id2string(target.get_identifier()));
  if(is_used.find(base_name)==is_used.end())
  {
    is_used[base_name]=true;
    scope[base_name]=separators.back();
    waiting_decls.push_back(SSA_step);
  }
  else
  {
    std::cout << "PUSHED NAME: " << base_name << " " << from_expr(ns, "", SSA_step.cond_expr) << "\n";
    variable_maps[base_name]=target;
  }
}

void test_caset::advance_separators()
{
  int new_id=expression_cnt+1;
  typet type(ID_integer);
  exprt s_i(ID_symbol, type);
  to_symbol_expr(s_i).set_identifier("s_"+i2string(new_id));

  binary_relation_exprt separator_constraint(separators.back(), ID_lt, s_i);
  hard_constraints.push_back(separator_constraint);
  separators.push_back(s_i);
}

void test_caset::add_dead(const symex_target_equationt::SSA_stept &SSA_step)
{
  const symbol_exprt &target=SSA_step.ssa_lhs;
  std::string base_name=get_basic_name(id2string(target.get_identifier()));
  std::map<std::string, exprt>::iterator it=variable_maps_loc.find(base_name);
  if(it==variable_maps_loc.end())
    return;
  exprt loc_var=variable_maps_loc[base_name];
  //Range Constraint - Scope ends
  binary_relation_exprt range_cons(loc_var, ID_lt, separators.back());
  hard_constraints.push_back(range_cons);

  variable_maps_loc.erase(it);
  it=variable_maps.find(base_name);
  variable_maps.erase(it);

  is_used.erase(is_used.find(base_name));
  scope.erase(scope.find(base_name));
}

void test_caset::output_hard()
{
  solver.icbmc_directfix=true;
  solver.constraint_type=prop_convt::FORMULA;
  expr_listt::iterator it=hard_constraints.begin();
  and_exprt::operandst ops;
  ops.reserve(hard_constraints.size());
  while (it!=hard_constraints.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void test_caset::output()
{
  total_components+=additional_components;
  std::cout << "ADDITIONAL_components: " << additional_components << "\n";
  typet type(ID_integer);
  exprt constant_f(ID_constant, type);
  to_constant_expr(constant_f).set_value(i2string(total_components));
  equal_exprt init(separators.back(), constant_f);
  hard_constraints.push_back(init);

  component_expr_listt::iterator it=cbe_expressions.begin();
  while(it!=cbe_expressions.end())
  {
    it->output_soft();
    it++;
  }

  it=cbe_expressions.begin();
  while(it!=cbe_expressions.end())
  {
    it->output_hard();
    it++;
  }
  output_hard();
}

void test_caset::add_assumption_assertion(const symex_target_equationt::SSA_stept &SSA_step)
{
  if(SSA_step.type==goto_trace_stept::ASSUME)
  {
    assert(SSA_step.cond_expr.op1().id()==ID_constant);
    std::cout << "ASSUME: " << from_expr(ns, "", SSA_step.ssa_lhs) << "\n";
    clean_up(SSA_step);
  }
  hard_constraints.push_back(SSA_step.cond_expr);
}
