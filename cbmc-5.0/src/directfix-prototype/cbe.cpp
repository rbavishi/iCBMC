#include <iostream>
#include <util/irep.h>
#include <util/i2string.h>
#include <util/irep.h>
#include <langapi/language_util.h>
#include "cbe.h"

test_caset::test_caset(
  const namespacet &_ns,
  smt1_convt &_solver):
  ns(_ns),
  solver(_solver)
{
  aux_var_cnt=1;
  additional_components=0;
  expression_cnt=0;
  total_components=0;
  num_var_additions=0;

  id_maps[ID_plus]="plus";
  id_maps[ID_minus]="minus";
  id_maps[ID_mult]="mult";
  id_maps[ID_div]="div";
  id_maps[ID_equal]="equal";
  id_maps[ID_implies]="implies";
  id_maps[ID_iff]="iff";
  id_maps[ID_le]="le";
  id_maps[ID_ge]="ge";
  id_maps[ID_gt]="gt";
  id_maps[ID_lt]="lt";
  id_maps[ID_unary_minus]="unary_minus";
  id_maps[ID_unary_plus]="unary_plus";

  dstring a_logical_ops[]   = {ID_and, ID_or, ID_not, ID_equal, ID_notequal, ID_bitand, ID_bitor, ID_bitnot, ID_xor, ID_bitxor}; 
  int  a_logical_op_num[]   = {     0,     0,      0,        0,           0,         0,        0,         0,      0,         0};

  dstring a_relation_32[]   = {ID_lt, ID_gt, ID_le, ID_ge, ID_equal, ID_notequal, ID_xor, ID_bitxor};
  int a_relation_32_num[]   = {    0,     0,     0,     2,        0,           0,      0,         0};

  dstring a_relation_64[]   = {ID_lt, ID_gt, ID_le, ID_ge, ID_equal, ID_notequal, ID_xor, ID_bitxor};
  int a_relation_64_num[]   = {    0,     0,     0,     0,        0,           0,      0,         0};

  dstring a_urelation_32[]   = {ID_lt, ID_gt, ID_le, ID_ge, ID_equal, ID_notequal, ID_xor, ID_bitxor};
  int a_urelation_32_num[]   = {    0,     0,     0,     0,        0,           0,      0,         0};

  dstring a_urelation_64[]   = {ID_lt, ID_gt, ID_le, ID_ge, ID_equal, ID_notequal, ID_xor, ID_bitxor};
  int a_urelation_64_num[]   = {    0,     0,     0,     0,        0,           0,      0,         0};

  dstring a_relation_8[]   = {ID_lt, ID_gt, ID_le, ID_ge, ID_equal, ID_notequal, ID_xor, ID_bitxor};
  int a_relation_8_num[]   = {    0,     0,     0,     0,        0,           0,      0,         0};

  dstring        a_bv64[]   = {ID_plus, ID_minus, ID_mult, ID_div, ID_unary_minus, ID_unary_plus};                             
  int        a_bv64_num[]   = {      0,        0,       0,      0,              0,             0};

  dstring        a_bv32[]   = {ID_plus, ID_minus, ID_mult, ID_div, ID_unary_minus, ID_unary_plus};
  int        a_bv32_num[]   = {      0,        0,       0,      0,              0,             0};

  dstring      a_unbv64[]   = {ID_plus, ID_minus, ID_mult, ID_div, ID_unary_minus, ID_unary_plus};                             
  int      a_unbv64_num[]   = {      0,        0,       0,      0,              0,             0};

  dstring      a_unbv32[]   = {ID_plus, ID_minus, ID_mult, ID_div, ID_unary_minus, ID_unary_plus};
  int      a_unbv32_num[]   = {      0,        0,       0,      0,              0,             0};
  int i;

  for (i=0; i < 10; i++)
    logical_ops[a_logical_ops[i]]=a_logical_op_num[i];

  for (i=0; i < 6; i++)
    bv64_ops[a_bv64[i]]=a_bv64_num[i];

  for (i=0; i < 6; i++)
    bv32_ops[a_bv32[i]]=a_bv32_num[i];

  for (i=0; i < 6; i++)
    unbv64_ops[a_unbv64[i]]=a_unbv64_num[i];

  for (i=0; i < 6; i++)
    unbv32_ops[a_unbv32[i]]=a_unbv32_num[i];

  for (i=0; i < 8; i++)
    relation_64[a_relation_64[i]]=a_relation_64_num[i];

  for (i=0; i < 8; i++)
    relation_32[a_relation_32[i]]=a_relation_32_num[i];

  for (i=0; i < 8; i++)
    urelation_64[a_urelation_64[i]]=a_urelation_64_num[i];

  for (i=0; i < 8; i++)
    urelation_32[a_urelation_32[i]]=a_urelation_32_num[i];

  for (i=0; i < 8; i++)
    relation_8[a_relation_8[i]]=a_relation_8_num[i];

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

std::string test_caset::get_op_name(const dstring &id)
{
  if(id_maps.find(id)==id_maps.end())
    return id2string(id);
  else
    return id_maps[id];
}

int return_num_ops(const dstring &id)
{
  if (id==ID_unary_minus || id==ID_unary_plus || id==ID_not || id==ID_bitnot)
    return 1;
  else
    return 2;
}

//Add range constraints for operators - Operators have a scope covering the entire program
void test_caset::add_constraints_op(const exprt &loc_var)
{
  //Range
  binary_relation_exprt range_constraint(separators.front(), ID_le, loc_var);
  hard_constraints.push_back(range_constraint);

  forall_operands(it, loc_var)
  {
    binary_relation_exprt range_constraint_in(separators.front(), ID_le, *it);
    hard_constraints.push_back(range_constraint_in);
    binary_relation_exprt consistency_cons(*it, ID_lt, loc_var);
    hard_constraints.push_back(consistency_cons);
  }
  std::map<std::string, expr_listt>::iterator it=operators_loc.begin();
  expr_listt::iterator t_it;

  //Consistency for the operator inputs
  while (it!=operators_loc.end())
  {
    t_it=it->second.begin();
    while (t_it!=it->second.end())
    {
      notequal_exprt consistency_cons(*t_it, loc_var);
      hard_constraints.push_back(consistency_cons);
      t_it++;
    }
    it++;
  }
}

//Create the additional components consisting of operators
void test_caset::create_op(const typet &type_id, const dstring &op_id, const typet &input_id)
{
  std::string op_name=get_op_name(op_id);
  typet loc_var_type(ID_integer);
  exprt loc_var_new(ID_symbol, loc_var_type);
  std::string loc_var_name="L.Extra."+i2string(additional_components)+".OPERATOR."+op_name;
  std::string in_var_name;
  to_symbol_expr(loc_var_new).set_identifier(loc_var_name);

  int num_ops=return_num_ops(op_id);
  loc_var_new.reserve_operands(num_ops);
  for (int j=0; j<num_ops; j++)
  {
    exprt loc_var_in(ID_symbol, loc_var_type);
    in_var_name=loc_var_name+"_in"+i2string(j+1);
    to_symbol_expr(loc_var_in).set_identifier(in_var_name);
    loc_var_new.operands().push_back(loc_var_in);
  }

  exprt original_expr(op_id, type_id);
  //to_symbol_expr(original_expr).set_identifier(op_name);
  original_expr.reserve_operands(num_ops);

  for (int j=0; j<num_ops; j++)
  {
    exprt inp_expr(ID_symbol, input_id);
    //to_symbol_expr(inp_expr).set_identifier(op_name+"_in"+i2string(j+1));
    original_expr.operands().push_back(inp_expr);
  }

  add_constraints_op(loc_var_new);
  operators[op_name]=original_expr;
  operators_loc[op_name].push_back(loc_var_new);
  loc_code_extra[op_name].push_back(additional_components);
}


void test_caset::initialize_operators()
{
  std::map<dstring, int>::iterator it;
  int i;

  //Signed and Unsigned 32-bit
  typet sign32(ID_signedbv); typet unsign32(ID_unsignedbv);
  to_signedbv_type(sign32).set_width(32); to_unsignedbv_type(unsign32).set_width(32);

  for (it=bv32_ops.begin(); it!=bv32_ops.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(sign32, it->first, sign32);
    }
  }

  for (it=unbv32_ops.begin(); it!=unbv32_ops.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(unsign32, it->first, unsign32);
    }
  }

  //Signed and Unsigned 64-bit
  typet sign64(ID_signedbv); typet unsign64(ID_unsignedbv);
  to_signedbv_type(sign64).set_width(64); to_unsignedbv_type(unsign64).set_width(64);

  for (it=bv64_ops.begin(); it!=bv64_ops.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(sign64, it->first, sign64);
    }
  }

  for (it=unbv64_ops.begin(); it!=unbv64_ops.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(unsign64, it->first, unsign64);
    }
  }

  //Logical Operators
  typet bool_type(ID_bool);
  for (it=logical_ops.begin(); it!=logical_ops.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, bool_type);
    }
  }

  //Relational Operators 64, 32, 8-bit Signed
  typet sign8(ID_signedbv);
  to_signedbv_type(sign8).set_width(8);

  for (it=relation_64.begin(); it!=relation_64.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, sign64);
    }
  }

  for (it=relation_32.begin(); it!=relation_32.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, sign32);
    }
  }

  for (it=relation_8.begin(); it!=relation_8.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, sign8);
    }
  }

  //Relational operators Unsigned - 64/32
  for (it=urelation_64.begin(); it!=urelation_64.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, unsign64);
    }
  }

  for (it=urelation_32.begin(); it!=urelation_32.end(); it++)
  {
    for (i=0; i < it->second ; i++)
    {
      additional_components++;
      create_op(bool_type, it->first, unsign32);
    }
  }

}  



void test_caset::initialize()
{
  typet type(ID_integer);
  exprt s_0(ID_symbol, type);
  exprt s_f(ID_symbol, type);
  to_symbol_expr(s_0).set_identifier("s_0");
  to_symbol_expr(s_f).set_identifier("s_f");
  s_final=s_f;
  separators.push_back(s_0);

  //Separator Constraints
  exprt constant_0(ID_constant, type);
  to_constant_expr(constant_0).set_value(i2string(0));
  equal_exprt init(s_0, constant_0);
  hard_constraints.push_back(init);

  initialize_operators();

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
    cross_int_constraint();
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
      0,
      solver);
    cbe_expressions.push_back(new_expression);
    cbe_expressions.back().parse_expr();
    solver.custom_output(i2string(expression_cnt)+"_Guard=" + from_expr(ns, "", SSA_step.ssa_rhs));
    expression_cnt++;
    total_components+=cbe_expressions.back().component_cnt;
    process_decls();
    add_guard_components(SSA_step, *sep_i_it, *sep_j_it, is_loop_stmt); 
  }
  else if ((SSA_step.assignment_type==symex_targett::PHI) || (SSA_step.assignment_type==symex_targett::RETURN))
  {
    //No need to get an explicit CBE expression
    hard_constraints.push_back(SSA_step.cond_expr);
    process_decls();
    clean_up(SSA_step);
  }
  else
  {
    advance_separators();
    cross_int_constraint();
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
      1,
      solver);
    cbe_expressions.push_back(new_expression);
    cbe_expressions.back().parse_expr();
    solver.custom_output(i2string(expression_cnt)+"_" + from_expr(ns, "", SSA_step.ssa_lhs)+"="+from_expr(ns, "", SSA_step.ssa_rhs));
    expression_cnt++;
    total_components+=cbe_expressions.back().component_cnt;
    process_decls();
    add_state_components(SSA_step, *sep_i_it, *sep_j_it, is_loop_stmt);
   
    clean_up(SSA_step);

    equal_exprt hard_cons(SSA_step.ssa_lhs, aux_var_v);
    hard_constraints.push_back(hard_cons);
  }
}   
  
void test_caset::add_decl( 
    const symex_target_equationt::SSA_stept &SSA_step)
{
  if (num_var_additions==0)
    return;
  std::string basic_name=get_basic_name(id2string(SSA_step.ssa_lhs.get_identifier()));
  variable_maps[basic_name].push_back(SSA_step.ssa_lhs);

  for (int i=0; i<num_var_additions; i++)
  {
    additional_components+=1;
    //Range Constraint
    typet loc_var_type(ID_integer);
    exprt loc_var_new(ID_symbol, loc_var_type);
    std::string loc_var_name="L.Extra."+i2string(additional_components)+"."+basic_name;
    to_symbol_expr(loc_var_new).set_identifier(loc_var_name);
    loc_code_extra[basic_name].push_back(additional_components);

    binary_relation_exprt range_cons(scope[basic_name], ID_le, loc_var_new);
    decl_var_range[additional_components]=range_cons;
    loc_var_range[additional_components]=loc_var_new;

    //Consitency Constraint
    std::map<std::string, expr_listt>::iterator it=variable_maps_loc.begin();
    expr_listt::iterator t_it;
    while(it!=variable_maps_loc.end())
    {
      t_it=it->second.begin();
      while(t_it!=it->second.end())
      {
	notequal_exprt cons_constraint(*t_it, loc_var_new);
	hard_constraints.push_back(cons_constraint);
	t_it++;
      }
      it++;
    }
    variable_maps_loc[basic_name].push_back(loc_var_new);
    it=operators_loc.begin();
    while (it!=operators_loc.end())
    {
      t_it=it->second.begin();
      while (t_it!=it->second.end())
      {
	notequal_exprt consistency_cons(*t_it, loc_var_new);
	hard_constraints.push_back(consistency_cons);
	t_it++;
      }
      it++;
    }
  }
}

void test_caset::process_decls()
{
  if (num_var_additions==0)
    return;
  if(waiting_decls.empty()==false)
  {
    while(waiting_decls.empty()==false)
    {
      std::string base_name=get_basic_name(id2string(waiting_decls.front().ssa_lhs.get_identifier()));
      if(is_used.find(base_name)!=is_used.end())
	add_decl(waiting_decls.front());
      waiting_decls.pop_front();
    }
  }
}

void test_caset::add_variable_components(const bool &reject_unconditionally)
{
  if (num_var_additions==0)
    return;
  std::map<std::string, expr_listt>::iterator it=variable_maps.begin();
  while(it!=variable_maps.end())
  {
    expr_listt::iterator l_it=variable_maps_loc[it->first].begin();
    for(int i=0; i<num_var_additions; i++)
    {
      if(it->second.empty()==false && reject_unconditionally==false)
      {
	//Adding the component
      	cbe_expressions.back().add_component(*l_it, it->first, it->second.back(), loc_code_extra[it->first][i]); 
      }
      else
      {
	//Rejecting the component - Either out of scope, or doesn't fit in this expression
	cbe_expressions.back().reject_component(*l_it);
      }
      l_it++;
    } 
    it++;
  }
}
 
void test_caset::add_declaration(const symex_target_equationt::SSA_stept &SSA_step)
{
  if (num_var_additions==0)
    return;
  undefined_list.insert(SSA_step.ssa_lhs);
}

bool test_caset::check_if_undefined(const exprt &lhs, const exprt &rhs)
{
  if(rhs.id()==ID_symbol)
  {
    if(undefined_list.find(rhs)!=undefined_list.end())
    {
      undefined_list.insert(lhs);
      return true;
    }
    return false;
  }
  else
  {
    if(undefined_list.find(rhs.op1())!=undefined_list.end() || undefined_list.find(rhs.op2())!=undefined_list.end())
    {
      undefined_list.insert(lhs);
      return true;
    }
    return false;
  }
}

void test_caset::clean_up(
      const symex_target_equationt::SSA_stept &SSA_step)
{
  if (num_var_additions==0)
    return;
  const symbol_exprt &target=SSA_step.ssa_lhs;
  std::string base_name=get_basic_name(id2string(target.get_identifier()));
  if(SSA_step.assignment_type!=symex_targett::PHI && is_used.find(base_name)==is_used.end())
  {
    is_used[base_name]=true;
    scope[base_name]=separators.back();
    waiting_decls.push_back(SSA_step);
  }
  else
  {
    if(SSA_step.assignment_type==symex_targett::PHI)
    {
      if(variable_maps.find(base_name)==variable_maps.end())
      {
	undefined_list.insert(SSA_step.ssa_lhs);
	return ;
      }
      if(variable_maps[base_name].empty()==false)
	variable_maps[base_name].pop_back();
      if(check_if_undefined(SSA_step.ssa_lhs, SSA_step.ssa_rhs)==false)
      {
	variable_maps[base_name].push_back(SSA_step.ssa_lhs);
      }
    }
    else
    {
      if(variable_maps[base_name].empty()==false)
	variable_maps[base_name].pop_back();
      variable_maps[base_name].push_back(SSA_step.ssa_lhs);
    }
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

void test_caset::kill_ops()
{
  std::map<std::string, expr_listt>::iterator it=operators_loc.begin();
  expr_listt::iterator t_it;
  while (it!=operators_loc.end())
  {
    t_it=it->second.begin();
    while (t_it!=it->second.end())
    {
      binary_relation_exprt range_cons(*t_it, ID_lt, separators.back());
      hard_constraints.push_back(range_cons);
      t_it++;
    }
    it++;
  }
}

void test_caset::cross_int_constraint()
{

  std::map<std::string, expr_listt>::iterator l_it=operators_loc.begin();
  expr_listt::iterator t_it;
  while (l_it!=operators_loc.end())
  {
    t_it=l_it->second.begin();
    while (t_it!=l_it->second.end())
    {
      and_exprt::operandst terms1, terms2;
      terms1.reserve(t_it->operands().size()+1);
      terms2.reserve(t_it->operands().size()+1);
      binary_relation_exprt intcons1(separators.back(), ID_le, *t_it);
      binary_relation_exprt intcons2(*t_it, ID_lt, separators.back());
      terms1.push_back(intcons1);
      terms2.push_back(intcons2);
      forall_operands(i_it, *t_it)
      {
	binary_relation_exprt intcons1(separators.back(), ID_le, *i_it);
	terms1.push_back(intcons1);
	binary_relation_exprt intcons2(*i_it, ID_lt, separators.back());
	terms2.push_back(intcons2);
      }
      exprt lhs=conjunction(terms1);
      exprt rhs=conjunction(terms2);
      or_exprt intcond(lhs, rhs);
      hard_constraints.push_back(intcond);
      t_it++;
    }
    l_it++;
  }
}

std::string get_unique_identifier(std::string name)
{
  int i=8;
  std::string ret_val;
  while(name[i]!='.')
  {
    ret_val+=name[i];
    i++;
  }
  return ret_val;
}

void test_caset::add_dead(const symex_target_equationt::SSA_stept &SSA_step)
{
  if (num_var_additions==0)
    return;
  const symbol_exprt &target=SSA_step.ssa_lhs;
  std::string base_name=get_basic_name(id2string(target.get_identifier()));
  std::map<std::string, expr_listt>::iterator it=variable_maps_loc.find(base_name);
  if(it==variable_maps_loc.end())
  {
    scope.erase(scope.find(base_name));
    is_used.erase(is_used.find(base_name)); 
    return;
  }
  expr_listt::iterator t_it=it->second.begin();
  int cnt=0;
  while (t_it!=it->second.end())
  {
    exprt loc_var=(*t_it);
    //Range Constraint - Scope ends
    binary_relation_exprt range_cons(loc_var, ID_lt, separators.back());
    dead_var_range[loc_code_extra[base_name][cnt]]=range_cons;
    cnt++;
    t_it++;
  }

  variable_maps_loc.erase(it);
  std::map<std::string, expr_listt>::iterator v_it=variable_maps.find(base_name);
  variable_maps.erase(v_it);

  is_used.erase(is_used.find(base_name));
  scope.erase(scope.find(base_name));
  loc_code_extra.erase(loc_code_extra.find(base_name));
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
  std::cout << "Additional Components: " << additional_components << "\n";
  std::cout << "Total Components: " << total_components << "\n";
  typet type(ID_integer);
  exprt constant_f(ID_constant, type);
  to_constant_expr(constant_f).set_value(i2string(total_components));
  binary_relation_exprt separator_constraint(separators.back(), ID_le, s_final);
  hard_constraints.push_back(separator_constraint);
  process_deads();
  separators.push_back(s_final);
  kill_ops();
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
    clean_up(SSA_step);
  }
  hard_constraints.push_back(SSA_step.cond_expr);
}

void test_caset::add_guard_components(
    const symex_target_equationt::SSA_stept &SSA_step,
    const exprt &sep_i,
    const exprt &sep_j,
    const bool &is_loop_stmt)
{
  //clear_phis();
  exprt guard=SSA_step.guard;
  add_variable_components(true);
  std::map<std::string, expr_listt>::iterator it=operators_loc.begin();
  expr_listt::iterator t_it;
  while (it!=operators_loc.end())
  {
    t_it=it->second.begin();
    int cnt=0;
    while (t_it!=it->second.end())
    {
      cbe_expressions.back().add_component(*t_it, it->first, operators[it->first], loc_code_extra[it->first][cnt]);
      t_it++;
      cnt++;
    }
    it++;
  }
}

void test_caset::add_state_components(
    const symex_target_equationt::SSA_stept &SSA_step,
    const exprt &sep_i,
    const exprt &sep_j,
    const bool &is_loop_stmt)
{
  //clear_phis();
  exprt guard=SSA_step.guard;
  add_variable_components(false);
  std::map<std::string, expr_listt>::iterator it=operators_loc.begin();
  expr_listt::iterator t_it;
  while (it!=operators_loc.end())
  {
    t_it=it->second.begin();
    int cnt=0;
    while (t_it!=it->second.end())
    {
      cbe_expressions.back().add_component(*t_it, it->first, operators[it->first], loc_code_extra[it->first][cnt]);
      t_it++;
      cnt++;
    }
    it++;
  }
}

void test_caset::process_deads()
{
  if (num_var_additions==0)
    return;
  std::map<int, exprt>::iterator l_it, r_it;
  l_it=decl_var_range.begin();
  while(l_it!=decl_var_range.end())
  {
    exprt rhs=dead_var_range[l_it->first];
    and_exprt first_part(l_it->second, rhs);
    binary_relation_exprt r_1(separators.back(), ID_le, loc_var_range[l_it->first]);
    binary_relation_exprt r_2(loc_var_range[l_it->first], ID_lt, s_final);
    and_exprt second_part(r_1, r_2);
    or_exprt final_range_cons(first_part, second_part);
    hard_constraints.push_back(final_range_cons);
    l_it++;
  }
}

