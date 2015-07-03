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
  const source_locationt &_source_location,
  const exprt &_sep_i,
  const exprt &_sep_j,
  const std::string &_function,
  const int &_unique_identifier,
  const int &_instruction_number,
  const bool &_is_loop_statement,
  const int &_type_stmt,
  smt1_convt &_solver):
  ns(_ns),
  expr(_expr),
  source_location(_source_location),
  sep_i(_sep_i),
  sep_j(_sep_j),
  function(_function),
  unique_identifier(_unique_identifier),
  instruction_number(_instruction_number),
  is_loop_statement(_is_loop_statement),
  type_stmt(_type_stmt),
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

  /*
   We really don't want to parse the expression in the constructor itself. The reason being that there is going to be a std::list<component_exprt>   in the main test case class. And pushing this component_expr to the list after parsing the expression will be costly, as the copy constructor w   ould have to copy all the lists - twice the amount of work. We don't want such optimal wastage of time.
  */
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
  std::string base;
  if (expr.id()==ID_symbol)
    base="."+id2string(to_symbol_expr(expr).get_identifier());
  else if (expr.id()==ID_constant)
    base=".const";
  else if (expr.id()==ID_typecast)
  {
    base=".typecast__"+id2string(expr.type().id());
    if (expr.type().id()==ID_signedbv)
    {
      base=base+i2string(to_signedbv_type(expr.type()).get_width());
    }
    else if (expr.type().id()==ID_unsignedbv)
    {
      base=base+i2string(to_unsignedbv_type(expr.type()).get_width());
    }
  }
  else if(id_maps.find(expr.id())!=id_maps.end())
    base=".OPERATOR."+id_maps[expr.id()];
  else
    base=".OPERATOR."+id2string(expr.id());
  std::string final_name="L."+id2string(source_location.get_line())+"."+i2string(instruction_number)+"_"+i2string(component_cnt)+"_"+i2string(unique_identifier)+base+suffix;
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
  std::string base;
  if (expr.id()==ID_symbol)
    base="."+id2string(to_symbol_expr(expr).get_identifier());
  else if (expr.id()==ID_constant)
    base=".const";
  else if(id_maps.find(expr.id())!=id_maps.end())
    base=".OPERATOR."+id_maps[expr.id()];
  else
    base=".OPERATOR."+id2string(expr.id());
  std::string final_name="C."+id2string(source_location.get_line())+"."+i2string(instruction_number)+"_"+i2string(component_cnt)+"_"+i2string(unique_identifier)+base+suffix;
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

void component_exprt::parse_expr()
{
  assert(expr.id()==ID_equal);
  v_assign=expr.op0();
  typet type(ID_integer);
  exprt temp_loc_var(ID_symbol, type);
  location_v_assign=temp_loc_var;
  component_cnt=0;
  gen_loc_var(location_v_assign, v_assign);
  add_range_constraint(location_v_assign);
  
  parse_expr_rec(expr.op1());

  //Structure Constraint
  equal_exprt struct_constraint(location_variables.front(), location_v_assign);
  phi_struct.push_back(struct_constraint);

  //Connection Constraint
  in_location_variables.push_back(location_v_assign);
  in_component_variables.push_back(v_assign);
  std::list<exprt>::const_iterator it_loc=out_location_variables.begin();
  std::list<exprt>::const_iterator it_c=out_component_variables.begin();
  std::list<exprt>::const_iterator it_loc_in, it_c_in;
  while (it_loc!=out_location_variables.end())
  {
    it_loc_in=in_location_variables.begin();
    it_c_in=in_component_variables.begin();
    while (it_loc_in!=in_location_variables.end())
    {
      if (it_c->type()==it_c_in->type())
      {
	 equal_exprt L_part(*it_loc, *it_loc_in);
	 equal_exprt C_part(*it_c, *it_c_in);
	 implies_exprt implication(L_part, C_part);
	 phi_conn.push_back(implication);
      }
      else
      {
	notequal_exprt cannot_be_equal(*it_loc, *it_loc_in);
	phi_conn.push_back(cannot_be_equal);
      }
      it_loc_in++;
      it_c_in++;
    }
    it_loc++;
    it_c++;
  }
}

void component_exprt::add_range_constraint(const exprt &loc_var)
{
  binary_relation_exprt range_constraint_le(sep_i, ID_le, loc_var);
  phi_range.push_back(range_constraint_le);
  binary_relation_exprt range_constraint_lt(loc_var, ID_lt, sep_j);
  phi_range.push_back(range_constraint_lt);
}


void component_exprt::parse_expr_rec(const exprt &expr)
{
  component_cnt+=1;
  typet type(ID_integer);
  exprt loc_var(ID_symbol, type);
  exprt comp_var(ID_symbol, expr.type());
  type_reduction.insert(expr.type());
  gen_loc_var(loc_var, expr);
  add_range_constraint(loc_var);
  gen_comp_var(comp_var, expr);
  std::vector <exprt> inputs;
  std::vector <exprt> loc_inputs;

  int store_comp_cnt=component_cnt;
  int restore_comp_cnt;

  //Consistency Constraint
  std::list<exprt>::iterator it_cons=out_location_variables.begin();
  while (it_cons!=out_location_variables.end())
  {
    notequal_exprt cons_constraint(*it_cons, loc_var);
    phi_cons.push_back(cons_constraint);
    it_cons++;
  }

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
    type_reduction.insert(it->type());
    restore_comp_cnt=component_cnt;
    component_cnt=store_comp_cnt;
    gen_loc_var(loc_var_in, expr, "_in"+i2string(cnt));
    gen_comp_var(comp_var_in, expr, "_in"+i2string(cnt));
    component_cnt=restore_comp_cnt;
    add_range_constraint(loc_var_in);
    location_variables.push_back(loc_var_in);
    component_variables.push_back(comp_var_in);
    parse_expr_rec(*it);

    inputs.push_back(comp_var_in);
    loc_inputs.push_back(loc_var_in);
    in_location_variables.push_back(loc_var_in);
    in_component_variables.push_back(comp_var_in);

    //Acyclic Constraint
    binary_relation_exprt acyclic(loc_var_in, ID_lt, loc_var);
    phi_acyc.push_back(acyclic);

  }
  if (cnt!=0) 
  {
    exprt rhs=expr;
    for (unsigned int i=0; i<inputs.size(); i++)
    {
      rhs.operands()[i]=inputs[i];
    }
    equal_exprt semantic_constraint(comp_var, rhs);
    phi_sem.push_back(semantic_constraint);

    if(cnt==2 && (expr.type().id()==ID_bool)) //Let's not have the two inputs sharing a location - produces stupid corrections
    {
      notequal_exprt meaningful_constraint(loc_inputs[0], loc_inputs[1]);
      phi_sem.push_back(meaningful_constraint);
    } 
  }
  else
  {
    equal_exprt semantic_constraint(comp_var, expr);
    phi_sem.push_back(semantic_constraint);
  }
}

void component_exprt::output_soft()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  expr_listt::iterator it=phi_struct.begin();
  while (it!=phi_struct.end())
  {
    solver.set_to(*it, true);
    it++;
  }
  solver.icbmc_directfix=false;
}

void component_exprt::output_range()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  solver.constraint_type=prop_convt::RANGE;
  expr_listt::iterator it=phi_range.begin();
  and_exprt::operandst ops;
  ops.reserve(phi_range.size());
  while (it!=phi_range.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void component_exprt::output_sem()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  solver.constraint_type=prop_convt::SEMANTIC;
  expr_listt::iterator it=phi_sem.begin();
  and_exprt::operandst ops;
 
  ops.reserve(phi_sem.size());
  while (it!=phi_sem.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void component_exprt::output_conn()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  solver.constraint_type=prop_convt::CONNECTION;
  expr_listt::iterator it=phi_conn.begin();
  and_exprt::operandst ops;
  ops.reserve(phi_conn.size());
  while (it!=phi_conn.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void component_exprt::output_cons()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  solver.constraint_type=prop_convt::CONSISTENCY;
  expr_listt::iterator it=phi_cons.begin();
  and_exprt::operandst ops;
  ops.reserve(phi_cons.size());
  while (it!=phi_cons.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void component_exprt::output_acyc()
{
  solver.icbmc_directfix=true;
  solver.source_location=source_location;
  solver.constraint_type=prop_convt::ACYCLIC;
  expr_listt::iterator it=phi_acyc.begin();
  and_exprt::operandst ops;
  ops.reserve(phi_acyc.size());
  while (it!=phi_acyc.end())
  {
    ops.push_back(*it);
    it++;
  }
  solver.set_to(conjunction(ops), false);
  solver.icbmc_directfix=false;
}

void component_exprt::output_hard()
{
  output_range();
  output_sem();
  output_conn();
  output_cons();
  output_acyc();
}

void component_exprt::reject_component(
  const exprt &loc_var_global)
{
  /*
  expr_listt::iterator it=out_location_variables.begin(); 
  while(it!=out_location_variables.end())
  {
    notequal_exprt cons_constraint(*it, loc_var_global);
    phi_cons.push_back(cons_constraint);
    it++;
  }
  it=in_location_variables.begin();
  while(it!=in_location_variables.end())
  {
    notequal_exprt reject_constraint(*it, loc_var_global);
    phi_conn.push_back(reject_constraint);
    it++;
  }*/
  binary_relation_exprt r_1(loc_var_global, ID_lt, sep_i);
  binary_relation_exprt r_2(sep_j, ID_le, loc_var_global);
  or_exprt restrict_cond(r_1, r_2);
  phi_range.push_back(restrict_cond);
  return ;
}


void component_exprt::add_component(
  const exprt &loc_var_global,
  std::string var_name,
  const exprt &original_expr,
  const int &identifier_addition)
{
  exprt loc_var=loc_var_global;

  //TYPE BASED SPACE REDUCTION
  if(type_reduction.find(original_expr.type())==type_reduction.end())
  {
    //Don't let it appear between s_i and s_j
    binary_relation_exprt r_1(loc_var, ID_lt, sep_i);
    binary_relation_exprt r_2(sep_j, ID_le, loc_var);
    or_exprt restrict_cond(r_1, r_2);
    phi_range.push_back(restrict_cond);
    return ;
  }
  exprt c_var(ID_symbol, original_expr.type());
  std::string c_var_name="C.Extra."+id2string(source_location.get_line())+"_"+i2string(identifier_addition)+"_"+i2string(unique_identifier)+"."+var_name;
  to_symbol_expr(c_var).set_identifier(c_var_name);

  //Consistency Constraint
  expr_listt::iterator it=out_location_variables.begin(); 
  while(it!=out_location_variables.end())
  {
    notequal_exprt cons_constraint(*it, loc_var);
    phi_cons.push_back(cons_constraint);
    it++;
  }

  //Semantic Constraint
  int num_ops=original_expr.operands().size();
  int cnt=0;
  exprt rhs=original_expr;
  if(num_ops>0)
  {
    while(cnt<num_ops)
    {
      cnt+=1;
      exprt c_var_in(ID_symbol, original_expr.operands()[cnt-1].type());
      to_symbol_expr(c_var_in).set_identifier(c_var_name+"_in"+i2string(cnt));
      rhs.operands()[cnt-1]=c_var_in;

	  //Connection Contraint
      it=out_location_variables.begin();
      expr_listt::iterator c_it=out_component_variables.begin();
      while(it!=out_location_variables.end())
      {
	if (c_it->type()==c_var_in.type())
	{
	   equal_exprt L_part(loc_var.operands()[cnt-1], *it);
	   equal_exprt C_part(c_var_in, *c_it);
	   implies_exprt implication(L_part, C_part);
	   phi_conn.push_back(implication);
	}
	else
	{
	  notequal_exprt cannot_be_equal(loc_var.operands()[cnt-1], *it);
	  phi_conn.push_back(cannot_be_equal);
	}
	it++;
	c_it++;
      }
      it=new_out_loc.begin();
      c_it=new_out_comp.begin();
      while(it!=new_out_loc.end())
      {
	if (c_it->type()==c_var_in.type())
	{
	   equal_exprt L_part(loc_var.operands()[cnt-1], *it);
	   equal_exprt C_part(c_var_in, *c_it);
	   implies_exprt implication(L_part, C_part);
	   phi_conn.push_back(implication);
	}
	else
	{
	  notequal_exprt cannot_be_equal(loc_var.operands()[cnt-1], *it);
	  phi_conn.push_back(cannot_be_equal);
	}
	it++;
	c_it++;
      }
    }
    equal_exprt sem_constraint(c_var, rhs);
    phi_sem.push_back(sem_constraint);
    if(cnt==2 && (original_expr.type().id()==ID_bool)) //Let's not have the two inputs sharing a location - produces stupid corrections
    {
      notequal_exprt meaningful_constraint(loc_var.operands()[0], loc_var.operands()[1]);
      binary_relation_exprt r_1(sep_i, ID_le, loc_var);
      binary_relation_exprt r_2(loc_var, ID_lt, sep_j);
      and_exprt r(r_1, r_2);
      implies_exprt meaning_constraint(r, meaningful_constraint);
      phi_sem.push_back(meaning_constraint);
    } 
  }
  else
  {
    equal_exprt sem_cons(original_expr, c_var);
    phi_sem.push_back(sem_cons);
  }

  //Connection Constraint
  it=in_location_variables.begin();
  expr_listt::iterator c_it=in_component_variables.begin();
  while(it!=in_location_variables.end())
  {
    if (c_it->type()==c_var.type())
    {
       equal_exprt L_part(loc_var, *it);
       equal_exprt C_part(c_var, *c_it);
       implies_exprt implication(L_part, C_part);
       phi_conn.push_back(implication);
    }
    else
    {
      notequal_exprt cannot_be_equal(loc_var, *it);
      phi_conn.push_back(cannot_be_equal);
    }
    it++;
    c_it++;
  }
  it=new_in_loc.begin();
  c_it=new_in_comp.begin();
  while(it!=new_in_loc.end())
  {
    if (c_it->type()==c_var.type())
    {
       equal_exprt L_part(loc_var, *it);
       equal_exprt C_part(c_var, *c_it);
       implies_exprt implication(L_part, C_part);
       phi_conn.push_back(implication);
    }
    else
    {
      notequal_exprt cannot_be_equal(loc_var, *it);
      phi_conn.push_back(cannot_be_equal);
    }
    it++;
    c_it++;
  }
  new_out_loc.push_back(loc_var);
  new_out_comp.push_back(c_var);
  if (num_ops>0)
  {
    for (int i=0; i<num_ops; i++)
    {
      new_in_loc.push_back(loc_var.operands()[i]);
      new_in_comp.push_back(rhs.operands()[i]);
      i++;
    }
  }
}

