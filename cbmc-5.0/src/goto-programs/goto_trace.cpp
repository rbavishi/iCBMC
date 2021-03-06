/*******************************************************************\

Module: Traces of GOTO Programs

Author: Daniel Kroening

  Date: July 2005

\*******************************************************************/

#include <cassert>
#include <ostream>
#include <fstream>
#include <iostream>

#include <util/arith_tools.h>
#include <util/symbol.h>

#include <ansi-c/printf_formatter.h>
#include <langapi/language_util.h>

#include "goto_trace.h"

/*******************************************************************\

Function: goto_tracet::output

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void goto_tracet::output(
  const class namespacet &ns,
  std::ostream &out) const
{
  for(stepst::const_iterator it=steps.begin();
      it!=steps.end();
      it++)
    it->output(ns, out);
}

/*******************************************************************\

Function: goto_tracet::output

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void goto_trace_stept::output(
  const namespacet &ns,
  std::ostream &out) const
{
  out << "*** ";

  switch(type)
  {
  case goto_trace_stept::ASSERT: out << "ASSERT"; break;
  case goto_trace_stept::ASSUME: out << "ASSUME"; break;
  case goto_trace_stept::LOCATION: out << "LOCATION"; break;
  case goto_trace_stept::ASSIGNMENT: out << "ASSIGNMENT"; break;
  case goto_trace_stept::DECL: out << "DECL"; break;
  case goto_trace_stept::OUTPUT: out << "OUTPUT"; break;
  case goto_trace_stept::INPUT: out << "INPUT"; break;
  case goto_trace_stept::ATOMIC_BEGIN: out << "ATOMC_BEGIN"; break;
  case goto_trace_stept::ATOMIC_END: out << "ATOMIC_END"; break;
  case goto_trace_stept::SHARED_READ: out << "SHARED_READ"; break;
  case goto_trace_stept::SHARED_WRITE: out << "SHARED WRITE"; break;
  case goto_trace_stept::FUNCTION_CALL: out << "FUNCTION CALL"; break;
  case goto_trace_stept::FUNCTION_RETURN: out << "FUNCTION RETURN"; break;
  default: assert(false);
  }

  if(type==ASSERT || type==ASSUME)
    out << " (" << cond_value << ")";

  out << "\n";

  if(!pc->source_location.is_nil())
    out << pc->source_location << "\n";

  if(pc->is_goto())
    out << "GOTO   ";
  else if(pc->is_assume())
    out << "ASSUME ";
  else if(pc->is_assert())
    out << "ASSERT ";
  else if(pc->is_dead())
    out << "DEAD   ";
  else if(pc->is_other())
    out << "OTHER  ";
  else if(pc->is_assign())
    out << "ASSIGN ";
  else if(pc->is_decl())
    out << "DECL   ";
  else if(pc->is_function_call())
    out << "CALL   ";
  else
    out << "(?)    ";

  out << "\n";

  if(pc->is_other() || pc->is_assign())
  {
    irep_idt identifier=lhs_object.get_identifier();
    out << "  " << identifier
        << " = " << from_expr(ns, "", lhs_object_value)
        << "\n";
  }
  else if(pc->is_assert())
  {
    if(!cond_value)
    {
      out << "Violated property:" << "\n";
      if(pc->source_location.is_nil())
        out << "  " << pc->source_location << "\n";
      
      if(comment!="")
        out << "  " << comment << "\n";
      out << "  " << from_expr(ns, "", pc->guard) << "\n";
      out << "\n";
    }
  }
  /*else if(pc->is_decl())
  {
	  out << " " << lhs_object.get_identifier();
	  out << "\n";
  }*/
  
  out << "\n";
}

/*******************************************************************\

Function: counterexample_value_binary

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

std::string counterexample_value_binary(
  const exprt &expr,
  const namespacet &ns)
{
  const typet &type=ns.follow(expr.type());
  
  if(expr.id()==ID_constant)
  {
    if(type.id()==ID_unsignedbv ||
       type.id()==ID_signedbv ||
       type.id()==ID_bv ||
       type.id()==ID_fixedbv ||
       type.id()==ID_floatbv ||
       type.id()==ID_pointer ||
       type.id()==ID_c_bit_field ||
       type.id()==ID_c_bool ||
       type.id()==ID_c_enum ||
       type.id()==ID_c_enum_tag)
    {
      return expr.get_string(ID_value);
    }
    else if(type.id()==ID_bool)
    {
      return expr.is_true()?"1":"0";
    }
  }
  else if(expr.id()==ID_array)
  {
    std::string result;
  
    forall_operands(it, expr)
    {
      if(result=="") result="{ "; else result+=", ";
      result+=counterexample_value_binary(*it, ns);
    }
      
    return result+" }";
  }
  else if(expr.id()==ID_struct)
  {
    std::string result="{ ";
  
    forall_operands(it, expr)
    {
      if(it!=expr.operands().begin()) result+=", ";
      result+=counterexample_value_binary(*it, ns);
    }
      
    return result+" }";
  }
  else if(expr.id()==ID_union)
  { 
    assert(expr.operands().size()==1);
    return counterexample_value_binary(expr.op0(), ns);
  }

  return "?";
}

/*******************************************************************\

Function: counterexample_value

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void counterexample_value(
  std::ostream &out,
  const namespacet &ns,
  const symbol_exprt &lhs_object,
  const exprt &full_lhs,
  const exprt &value)
{
  const irep_idt &identifier=lhs_object.get_identifier();
  std::string value_string;
  
  if(value.is_nil())
    value_string="(assignment removed)";
  else
  {
    value_string=from_expr(ns, identifier, value);

    // the binary representation
    value_string+=" ("+counterexample_value_binary(value, ns)+")";
  }

  out << "  "
      << from_expr(ns, identifier, full_lhs)
      << "=" << value_string
      << "\n";
}

/*******************************************************************\

Function: show_state_header

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void show_state_header(
  std::ostream &out,
  const goto_trace_stept &state,
  const source_locationt &source_location,
  unsigned step_nr)
{
  out << "\n";
  
  if(step_nr==0)
    out << "Initial State";
  else
    out << "State " << step_nr;
  
  out << " " << source_location
      << " thread " << state.thread_nr << "\n";
  out << "----------------------------------------------------" << "\n";
}

/*******************************************************************\

Function: is_index_member_symbol

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

bool is_index_member_symbol(const exprt &src)
{
  if(src.id()==ID_index)
    return is_index_member_symbol(src.op0());
  else if(src.id()==ID_member)
    return is_index_member_symbol(src.op0());
  else if(src.id()==ID_symbol)
    return true;
  else
    return false;
}

/*******************************************************************\
 
Function: trace_debug_file

\*******************************************************************/

void trace_debug_file(
  std::ofstream &line_number_file,
  goto_tracet::stepst::const_iterator it,
  const namespacet &ns,
  std::ostream &out
  )
{
    goto_tracet::stepst::const_iterator nxt;
    nxt = it;
    nxt++;
    std::string idtifier = id2string(it->pc->source_location.get_function());
    switch(it->type)
    {
    case goto_trace_stept::ASSERT:
     //if(!it->cond_value)
      //{
        if(!it->pc->source_location.is_nil())
          line_number_file << "ASSERT||" << id2string(it->pc->source_location.get_line());

       // if(it->pc->is_assert())
          line_number_file << "||" << from_expr(ns, "", it->pc->guard) << "\n";       
      //}
      break;
      
    case goto_trace_stept::ASSUME:
      line_number_file << "ASSUME||" << from_expr(ns, "", it->pc->guard) << "||" << it->pc->source_location.line_number_only();
      break;
      
    case goto_trace_stept::LOCATION:
      //if (it->pc->source_location.need_to_print() && ((nxt)->type)!=goto_trace_stept::FUNCTION_CALL && ((nxt)->type)!=goto_trace_stept::FUNCTION_RETURN) {
	      line_number_file << "LOCATION||" << from_expr(ns, idtifier, it->pc->guard) << "||" << it->pc->source_location.line_number_only();
      //}
      break;

    case goto_trace_stept::ASSIGNMENT:
      if(it->pc->is_assign() ||
         it->pc->is_return() || // returns have a lhs!
         it->pc->is_function_call() ||
         (it->pc->is_other() && it->lhs_object.is_not_nil()))
      {
	if (it->pc->source_location.need_to_print()) line_number_file << "ASSIGNMENT||" << from_expr(ns, idtifier, it->pc->guard) << "||" << id2string(it->lhs_object.get_identifier()) << "||" << it->pc->source_location.line_number_only();
      }

      break;

    case goto_trace_stept::DECL:

      if (it->pc->source_location.need_to_print()) line_number_file << "DECL||" << from_expr(ns, "", it->pc->guard) << "||" << id2string(it->lhs_object.get_identifier()) << "||" << it->pc->source_location.line_number_only();
      break;

    case goto_trace_stept::OUTPUT:
      if(it->formatted)
      {

      }
      else
      {
        line_number_file << "OUTPUT||" << it->pc->source_location.line_number_only();
      }
      break;

    case goto_trace_stept::INPUT:
      
      line_number_file << "INPUT||" << it->pc->source_location.line_number_only();
      break;
      
    case goto_trace_stept::SPAWN:
    case goto_trace_stept::MEMORY_BARRIER:
    case goto_trace_stept::ATOMIC_BEGIN:
    case goto_trace_stept::ATOMIC_END:
    case goto_trace_stept::DEAD:
      break;
    
    case goto_trace_stept::FUNCTION_CALL:
       if (it->pc->source_location.need_to_print()) line_number_file << "FUNCTION_CALL||" << from_expr(ns, "", it->pc->guard) << "||" << it->pc->source_location.line_number_only();
      break;

    case goto_trace_stept::FUNCTION_RETURN:
       if (it->pc->source_location.need_to_print()) line_number_file << "FUNCTION_RETURN||" << from_expr(ns, "", it->pc->guard) << "||" << it->pc->source_location.line_number_only();
      break;

    case goto_trace_stept::CONSTRAINT:
       if (it->pc->source_location.need_to_print()) line_number_file << "CONSTRAINT||" << it->pc->source_location.line_number_only();
      assert(false);
      break;
      
    case goto_trace_stept::SHARED_READ:
    case goto_trace_stept::SHARED_WRITE:
      assert(false);
      break;
      
    default:
      assert(false);
    }
}


/*******************************************************************\

Function: show_goto_trace

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void show_goto_trace(
  std::ostream &out,
  const namespacet &ns,
  const goto_tracet &goto_trace)
{
  unsigned prev_step_nr=0;
  bool first_step=true;
  
  int assert_count = 0;
  for(goto_tracet::stepst::const_iterator
      it=goto_trace.steps.begin();
      it!=goto_trace.steps.end();
      it++)
  {
    //it->pc++;
    //it->pc--;
    // hide the hidden ones
    if(it->hidden)
      continue;
  
    /*std::cout << "\n\nMY STATEMENTS... Number:" << it->pc->location_number << std::endl;
    std::cout << "Type: " << it->pc->type << std::endl;
    std::cout << "Code: " << from_expr(ns, "", it->pc->code) << std::endl;
    std::cout << "Guard: " << from_expr(ns, "", it->pc->guard) << std::endl;*/
    //trace_debug_file(line_number_file,it,ns,out);
    switch(it->type)
    {
    case goto_trace_stept::ASSERT:
      assert_count += 1;
      if(!it->cond_value)
      {
        out << "\n";
        out << "Violated property:" << "\n";
        if(!it->pc->source_location.is_nil())
          out << "  " << it->pc->source_location << "\n";

        out << "  " << it->comment << "\n";

        if(it->pc->is_assert())
          out << "  " << from_expr(ns, "", it->pc->guard) << "\n";       
        out << "\n";
      }
      break;
      
    case goto_trace_stept::ASSUME:
      break;
      
    case goto_trace_stept::LOCATION:
      break;

    case goto_trace_stept::ASSIGNMENT:
      if(it->pc->is_assign() ||
         it->pc->is_return() || // returns have a lhs!
         it->pc->is_function_call() ||
         (it->pc->is_other() && it->lhs_object.is_not_nil()))
      {
        if(prev_step_nr!=it->step_nr || first_step)
        {
          first_step=false;
          prev_step_nr=it->step_nr;
          show_state_header(out, *it, it->pc->source_location, it->step_nr);
        }

        // see if the full lhs is something clean
        if(is_index_member_symbol(it->full_lhs))
          counterexample_value(out, ns, it->lhs_object, it->full_lhs, it->full_lhs_value);
        else
          counterexample_value(out, ns, it->lhs_object, it->lhs_object, it->lhs_object_value);

      }
      break;

    case goto_trace_stept::DECL:
      if(prev_step_nr!=it->step_nr || first_step)
      {
        first_step=false;
        prev_step_nr=it->step_nr;
        show_state_header(out, *it, it->pc->source_location, it->step_nr);
      }
     
      counterexample_value(out, ns, it->lhs_object, it->full_lhs, it->full_lhs_value);
      break;

    case goto_trace_stept::OUTPUT:
      if(it->formatted)
      {
        printf_formattert printf_formatter(ns);
        printf_formatter(id2string(it->format_string), it->io_args);
        printf_formatter.print(out);
        out << "\n";
      }
      else
      {
        show_state_header(out, *it, it->pc->source_location, it->step_nr);
        out << "  OUTPUT " << it->io_id << ":";

        for(std::list<exprt>::const_iterator
            l_it=it->io_args.begin();
            l_it!=it->io_args.end();
            l_it++)
        {
          if(l_it!=it->io_args.begin()) out << ";";
          out << " " << from_expr(ns, "", *l_it);

          // the binary representation
          out << " (" << counterexample_value_binary(*l_it, ns) << ")";
        }
      
        out << "\n";
      }
      break;

    case goto_trace_stept::INPUT:
      show_state_header(out, *it, it->pc->source_location, it->step_nr);
      
      out << "  INPUT " << it->io_id << ":";

      for(std::list<exprt>::const_iterator
          l_it=it->io_args.begin();
          l_it!=it->io_args.end();
          l_it++)
      {
        if(l_it!=it->io_args.begin()) out << ";";
        out << " " << from_expr(ns, "", *l_it);

        // the binary representation
        out << " (" << counterexample_value_binary(*l_it, ns) << ")";
      }
      
      out << "\n";
      break;
      
    case goto_trace_stept::SPAWN:
    case goto_trace_stept::MEMORY_BARRIER:
    case goto_trace_stept::ATOMIC_BEGIN:
    case goto_trace_stept::ATOMIC_END:
    case goto_trace_stept::DEAD:
      break;
    
    case goto_trace_stept::FUNCTION_CALL:
      break;

    case goto_trace_stept::FUNCTION_RETURN:
      break;

    case goto_trace_stept::CONSTRAINT:
      assert(false);
      break;
      
    case goto_trace_stept::SHARED_READ:
    case goto_trace_stept::SHARED_WRITE:
      assert(false);
      break;
      
    default:
      assert(false);
    }
  }
  out << "Number of Assertions: " << assert_count << std::endl;
}
