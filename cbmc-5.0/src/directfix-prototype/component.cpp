#include "component.h"
#include <util/i2string.h>
#include <util/irep.h>
#include <langapi/language_util.h>

#include <iostream>

/*********************************\
 
  Function:    component_exprt
  Description: Constructor for the class

\*********************************/

component_exprt::component_exprt(
  const namespacet &_ns,
  const exprt &_expr,
  const exprt &_sep_i,
  const exprt &_sep_j,
  const std::string &_function,
  const int &_instruction_number,
  const bool &_is_loop_statement,
  decision_proceduret &_solver):
  ns(_ns),
  expr(_expr),
  sep_i(_sep_i),
  sep_j(_sep_j),
  function(_function),
  instruction_number(_instruction_number),
  is_loop_statement(_is_loop_statement),
  solver(_solver)
{
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
  //parse_expr(expr);
}

/*********************************\
 
  Function:    gen_loc_var
  Description: Generate the expressions to hold the location variables. Type:int

\*********************************/

exprt component_exprt::gen_loc_var(const exprt &expr, std::string suffix)
{
  irep_idt base;
  if (expr.id()==ID_symbol)
    base=to_symbol_expr(expr).get_identifier();
  else if (expr.id()==ID_constant)
    base="const";
  else if(id_maps.find(expr.id())!=id_maps.end())
    base=id_maps[expr.id()];
  else
    base=id2string(expr.id());
  std::string final_name="L_"+i2string(instruction_number)+"_"+i2string(component_cnt)+"_"+id2string(base)+suffix;
  typet type(ID_integer);
  exprt loc_var(ID_symbol, type);
  to_symbol_expr(loc_var).set_identifier(final_name);
  //std::cout << "Name: " << to_symbol_expr(loc_var).get_identifier() << std::endl;
  return loc_var;
}

/*********************************\
 
  Function:    gen_comp_var
  Description: Generate component variables.

\*********************************/

exprt component_exprt::gen_comp_var(const exprt &expr, const typet &type, std::string suffix)
{
  irep_idt base;
  if (expr.id()==ID_symbol)
    base=to_symbol_expr(expr).get_identifier();
  else if (expr.id()==ID_constant)
    base="const";
  else if(id_maps.find(expr.id())!=id_maps.end())
    base=id_maps[expr.id()];
  else
    base=id2string(expr.id());

  std::string final_name="C_"+i2string(instruction_number)+"_"+i2string(component_cnt)+"_"+id2string(base)+suffix;
  exprt comp_var(ID_symbol, type);
  to_symbol_expr(comp_var).set_identifier(final_name);
  return comp_var;
}


/*********************************\
 
  Function:    get_df_loc_var
  Description: Generate location variables and component variables along with the constraints 

\*********************************/

void component_exprt::get_df_loc_var(const exprt &expr)  
{
  exprt loc_var=gen_loc_var(expr);
  add_range_constraint(loc_var);
  exprt comp_var=gen_comp_var(expr, expr.type());
  location_variables.push_back(loc_var);
  //std::cout << "Array Name: " << to_symbol_expr(location_variables.back()).get_identifier() << std::endl;
  component_variables.push_back(comp_var);

  //Look for inputs
  int cnt=0;
  forall_operands(it, expr)
  {
    cnt+=1;
    exprt loc_var_in=gen_loc_var(expr, "_in"+i2string(cnt));
    add_range_constraint(loc_var_in);
    exprt comp_var_in=gen_comp_var(expr, it->type(), "_in"+i2string(cnt));
    location_variables.push_back(loc_var_in);
    component_variables.push_back(comp_var_in);
  //std::cout << "iArray Name: " << to_symbol_expr(location_variables.back()).get_identifier() << std::endl;
    add_acyclic_constraint(loc_var_in, loc_var);
    //add_conn_constraint(loc_var_in, comp_var_in);
  }
  //add_consistency_constraint(loc_var);
  out_location_variables.push_back(loc_var);
 // std::cout << "Out Array Name: " << to_symbol_expr(out_location_variables.back()).get_identifier() << std::endl;
  out_component_variables.push_back(comp_var);
 // std::cout << "2Out Array Name: " << to_symbol_expr(out_location_variables.back()).get_identifier() << std::endl;

  add_semantic_constraint(comp_var, expr);
   //std::cout << "Yeah" << to_symbol_expr(out_location_variables.back()).get_identifier() << "\n";
  //std::cout << "yeah " << "\n" ;
  //std::cout << out_location_variables.size() << "\n";
  /*std::list<exprt>::iterator it=out_location_variables.begin();
  int a_cnt=0;
  while (it!=out_location_variables.end()) {
    it++;
    a_cnt++;
    std::cout << "Cnt: " << a_cnt << std::endl;
  }*/
}

/*********************************\
 
  Function:    add_range_constraint
  Description: Generate the range constraint for the current location variable.

\*********************************/

void component_exprt::add_range_constraint(const exprt &expr)
{
  //phi_range.push_back(binary_relation_exprt(expr, ID_lt, sep_j));
  //solver.set_to_true(binary_relation_exprt(expr, ID_lt, sep_j));
  //phi_range.push_back(binary_relation_exprt(sep_i, ID_le, expr));
  //solver.set_to_true(binary_relation_exprt(expr, ID_lt, sep_j));
}

/*********************************\
 
  Function:    add_semantic_constraint
  Description: Generate the semantic constraint for the current component

\*********************************/

void component_exprt::add_semantic_constraint(
  const exprt &comp_var, 
  const exprt &expr)
{
  exprt rhs=expr;
  int num_ops=expr.operands().size();
  expr_listt::iterator it=component_variables.end();
  exprt::operandst new_ops;
  new_ops.reserve(num_ops);
  for (int i=0; i<num_ops; i++)
    it--;

  while (it!=component_variables.end())
  {
    new_ops.push_back(*it);
    it++;
  }
  rhs.operands()=new_ops;
  //phi_sem.push_back(equal_exprt(comp_var, rhs));
  solver.set_to_true(equal_exprt(comp_var, rhs));
}

/*********************************\
 
  Function:    add_acyclic_constraint
  Description: Generate the acyclic constraint for the given comp_input and comp_output

\*********************************/

void component_exprt::add_acyclic_constraint(
  const exprt &inp, 
  const exprt &out)
{
  phi_acyc.push_back(binary_relation_exprt(inp, ID_lt, out));
}

/*********************************\
 
  Function:    add_consistency_constraint
  Description: Generate the consistency constraint for the output ports of all the components

\*********************************/

void component_exprt::add_consistency_constraint(const exprt &loc_var)
{
  expr_listt::iterator it=out_location_variables.begin();
  while (it!=out_location_variables.end())
  {
    phi_cons.push_back(notequal_exprt(loc_var, *it));
    it++;
  }
}

/*********************************\
 
  Function:    add_conn_constraint
  Description: Generate the phi_connection constraint

\*********************************/

void component_exprt::add_conn_constraint(
  const exprt &loc_inp_var, 
  const exprt &comp_inv_var)
{
  //std::cout << "HelloOut SizeL: " << out_location_variables.size() << "\n";
  expr_listt::iterator it=out_location_variables.begin();
  //std::cout << "Out SizeL: " << out_location_variables.size() << "\n";
  expr_listt::iterator c_it=out_component_variables.begin();
  while (it!=out_location_variables.end())
  {
    phi_conn.push_back(
	implies_exprt(
	  equal_exprt(*it, loc_inp_var),
	  equal_exprt(*c_it, comp_inv_var)
	  ));
    it++;
    c_it++;
  }
}

/*********************************\
 
  Function:    parse_expr
  Description: Parsing the entire expression

\*********************************/

void component_exprt::parse_expr(const exprt &expr)
{
  assert(expr.id()==ID_equal);  //Format should be v = expr;
  v_assign=expr.op0();
  component_cnt=0;
  location_v_assign=gen_loc_var(v_assign);
  component_cnt++;

  //std::cout << "Finished Here we are ..." << from_expr(ns, "", expr) << "\n";
 // std::cout << out_location_variables.size() << std::endl;
  out_location_variables.push_back(expr);
  parse_expr_rec(expr.op1());
  //std::cout << phi_acyc.size() << std::endl;
  //std::cout << "Hello" << std::endl;
  //expr_listt::iterator it = out_location_variables.begin();
  //it++;
  //std::cout << "My stuff: " << (it==out_location_variables.end());
  //(*it).op0();
  //std::cout << from_expr(ns, "", *it) << std::endl;
  //int trial=out_location_variables.size();
  //std::cout << trial << std::endl;
 // std::cout << "Hola" << std::endl;
  //std::cout << out_location_variables.size() << std::endl;

  //add_conn_constraint(location_v_assign, v_assign);
  add_range_constraint(location_v_assign);

  phi_struct.push_back(equal_exprt(location_v_assign, location_variables.front()));
}

/*********************************\
 
  Function:    parse_expr_rec
  Description: Recursive auxilliary for the above function

\*********************************/

void component_exprt::parse_expr_rec(const exprt &expr)
{
  expr_listt::iterator inp_it=location_variables.end();
  expr_listt::iterator out_it;
  get_df_loc_var(expr);
  //std::cout << to_symbol_expr(out_location_variables.back()).get_identifier() << out_location_variables.size() << std::endl;
  int trial=out_location_variables.size();
  std::cout << trial << std::endl;
  component_cnt++;
  inp_it++;

  forall_operands(it, expr)
  {
    out_it=location_variables.end();
    parse_expr_rec(*it);
    phi_struct.push_back(equal_exprt(*inp_it, *out_it));
    inp_it++;
  }
}




