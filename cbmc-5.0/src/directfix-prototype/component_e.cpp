#include "component_e.h"
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

void component_exprt::gen_loc_var(
    exprt &loc_var,
    const exprt &expr, 
    std::string suffix)
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
  //typet type(ID_integer);
  //exprt loc_var(ID_symbol, type);
  to_symbol_expr(loc_var).set_identifier(final_name);
}

/*********************************\
 
  Function:    gen_comp_var
  Description: Generate component variables.

\*********************************/

void component_exprt::gen_comp_var(
    exprt &comp_var, 
    const exprt &expr,  
    std::string suffix)
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
  to_symbol_expr(comp_var).set_identifier(final_name);
}


/*********************************\
 
  Function:    get_df_loc_var
  Description: Generate location variables and component variables along with the constraints 

\*********************************/

void component_exprt::get_df_loc_var(const exprt &expr) 
{
  typet type(ID_integer);
  exprt loc_var(ID_symbol, type);
  exprt comp_var(ID_symbol, expr.type());
  gen_loc_var(loc_var, expr);
  gen_comp_var(comp_var, expr);

  location_variables.push_back(loc_var);
  out_location_variables.push_back(loc_var);
  component_variables.push_back(comp_var);
  out_component_variables.push_back(comp_var);

  int cnt=0;
  forall_operands(it, expr)
  {
    cnt+=1;
    exprt loc_var_in(ID_symbol, type);
    exprt comp_var_in(ID_symbol, it->type());
    gen_loc_var(loc_var_in, expr, "_in"+i2string(cnt));
    gen_comp_var(comp_var_in, expr, "_in"+i2string(cnt));
    location_variables.push_back(loc_var_in);
    component_variables.push_back(comp_var_in);
  }
}

void component_exprt::parse_expr(const exprt &expr)
{
  assert(expr.id()==ID_equal);
  v_assign=expr.op0();
  typet type(ID_integer);
  exprt temp_loc_var(ID_symbol, type);
  location_v_assign=temp_loc_var;
  component_cnt=0;
  gen_loc_var(location_v_assign, v_assign);
  
  parse_expr_rec(expr.op1());
  equal_exprt struct_constraint(location_variables.front(), location_v_assign);
  phi_struct.push_back(struct_constraint);

}

void component_exprt::parse_expr_rec(const exprt &expr)
{
  component_cnt+=1;
  typet type(ID_integer);
  exprt loc_var(ID_symbol, type);
  exprt comp_var(ID_symbol, expr.type());
  gen_loc_var(loc_var, expr);
  gen_comp_var(comp_var, expr);

  if(component_cnt!=1)
  {
    equal_exprt struct_constraint(location_variables.back(), loc_var);
    phi_struct.push_back(struct_constraint);
  }

  location_variables.push_back(loc_var);
  out_location_variables.push_back(loc_var);
  component_variables.push_back(comp_var);
  out_component_variables.push_back(comp_var);
 
  int cnt=0;
  forall_operands(it, expr)
  {
    cnt+=1;
    exprt loc_var_in(ID_symbol, type);
    exprt comp_var_in(ID_symbol, it->type());
    gen_loc_var(loc_var_in, expr, "_in"+i2string(cnt));
    gen_comp_var(comp_var_in, expr, "_in"+i2string(cnt));
    location_variables.push_back(loc_var_in);
    component_variables.push_back(comp_var_in);
    parse_expr_rec(*it);
  } 
}
