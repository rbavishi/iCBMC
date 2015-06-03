#include "icbmc_goto_trace.h"
#include <util/i2string.h>
#include <iostream>
#include <fstream>
#include <string>

void convert_instruction(
    const goto_programt::instructiont &old_instruct, 
    goto_programt::instructiont &new_instruct)
{
  new_instruct.source_location=old_instruct.source_location;
  new_instruct.location_number=old_instruct.location_number;
  new_instruct.function=old_instruct.function;
  new_instruct.targets=old_instruct.targets;
}

void icbmc_goto_tracet::advance_iterators(
    const namespacet &ns,
    const goto_tracet &goto_trace,
    goto_programt::targett &icbmc_it, 
    goto_tracet::stepst::const_iterator &goto_it,
    var_mapt &current_map)
{
  unsigned int curr_loc_num=goto_it->pc->location_number;
  bool is_goto_statement=false;
  if (goto_it->pc->is_goto())
    is_goto_statement=true;

  while(goto_it!=goto_trace.steps.end() && (goto_it->pc->location_number==curr_loc_num || goto_it->pc->source_location.need_to_print()==false))
  {
    goto_it++;
  }

  if (goto_it==goto_trace.steps.end()) 
    return;

  curr_loc_num=goto_it->pc->location_number;
  while(icbmc_it->location_number!=curr_loc_num)
  {
    icbmc_it++;
    if (is_goto_statement==false && icbmc_it->type==DEAD) {
      std::string var_name=from_expr(ns, "", icbmc_it->code.op0());
      irep_idt removed=current_map[var_name].back();
      current_map[var_name].pop_back();
      current_map[var_name].push_front(removed);
    }
  }
}

void rename_identifier_decl(
    const namespacet &ns,
    exprt &expr,
    irep_idt function_name,
    icbmc_goto_tracet::var_mapt &var_map,
    int function_call_number)
{
  if (expr.id()==ID_symbol) 
  {
    std::string var_name=from_expr(ns, "", expr);
    if (var_map.find(var_name)!=var_map.end())
    {
      int already_done=var_map[var_name].size();
      std::string new_name;
      if (function_name!="")
      	new_name=id2string(function_name) + "___" + var_name + "___" + i2string(already_done);
      else
      	new_name=var_name + "___" + i2string(already_done);

      if (function_call_number!=0)
	new_name+= "___" + i2string(function_call_number);

      to_symbol_expr(expr).set_identifier(new_name);
      var_map[var_name].push_back(new_name);
    }
    else {
      std::string new_name;
      if (function_name!="")
      	new_name=id2string(function_name) + "___" + var_name;
      else
      	new_name=var_name;

      if (function_call_number!=0)
	new_name+= "___" + i2string(function_call_number);

      to_symbol_expr(expr).set_identifier(new_name);
      var_map[var_name].push_back(new_name);
    }
  }
  else
  {
    Forall_operands(it, expr)
      rename_identifier_decl(ns, *it, function_name, var_map, function_call_number);
  }
}

void rename_identifier(
    const namespacet &ns,
    exprt &expr,
    icbmc_goto_tracet::var_mapt &var_map) 
{
  if (expr.id()==ID_symbol)
  {
    std::string var_name=from_expr(ns, "", expr);
    if (var_map[var_name].empty()) 
      return;
    to_symbol_expr(expr).set_identifier(var_map[var_name].back());
  }
  else 
  {
    Forall_operands(it, expr)
      rename_identifier(ns, *it, var_map);
  }
}
 
void icbmc_goto_tracet::process_function_call(
    const namespacet &ns,
    const goto_tracet &goto_trace,
    goto_programt::targett &icbmc_it,
    goto_targett &goto_it,
    var_mapt &calling_map) 
{
  static signed int function_call_number=-1;
  function_call_number++;
  int current_func_number = function_call_number;

  goto_programt::targett arg_iterator=icbmc_it;
  arg_iterator++;
  var_mapt current_variable_map;
  while(arg_iterator->is_function_call_assignment==true)
  {
    rename_identifier_decl(ns, arg_iterator->code.op0(), arg_iterator->function, current_variable_map, current_func_number);
    counterexample_trace.push_back(*arg_iterator);

    arg_iterator++;

    rename_identifier(ns, arg_iterator->code.op0(), current_variable_map);
    rename_identifier(ns, arg_iterator->code.op1(), calling_map);
    counterexample_trace.push_back(*arg_iterator);
    arg_iterator++;
  }
  advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
  while (goto_it!=goto_trace.steps.end())
  {

    goto_programt::instructiont instruct = *icbmc_it;
    if (instruct.has_icbmc_guard==true)
    {
      for (std::list<exprt>::iterator i=instruct.icbmc_guard.begin();
	     i != instruct.icbmc_guard.end();
	     i++) {
	goto_programt::instructiont assume_instruction(ASSUME);
	convert_instruction(instruct, assume_instruction);
	assume_instruction.make_assumption(*i);
	rename_identifier(ns, assume_instruction.guard, current_variable_map);
	counterexample_trace.push_back(assume_instruction);
      }
    }

    switch(instruct.type)
    {
      case GOTO:
	if (!instruct.guard.is_true())
	{
	  goto_programt::instructiont assume_instruction(ASSUME);
	  convert_instruction(instruct, assume_instruction);
	  assume_instruction.make_assumption(instruct.guard);
      	  rename_identifier(ns, assume_instruction.guard, current_variable_map);
	  counterexample_trace.push_back(assume_instruction);
	}
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;

      case DECL:
	if (instruct.is_return_statement==false)
  	  rename_identifier_decl(ns, instruct.code.op0(), icbmc_it->function, current_variable_map, current_func_number);
	else {
  	  rename_identifier_decl(ns, instruct.code.op0(), "", current_variable_map, current_func_number);
	  std::cout << "Anomaly? : " << from_expr(ns, "", instruct.code) << "\n";
	}

	counterexample_trace.push_back(instruct);
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;

      case ASSIGN:
	rename_identifier(ns, instruct.code.op0(), current_variable_map);
	rename_identifier(ns, instruct.code.op1(), current_variable_map);
	counterexample_trace.push_back(instruct);
	if (instruct.is_return_statement==true) {
	  while (goto_it->pc->type!=END_FUNCTION)
	    goto_it++;
	  //We return to the return assignment outside of called function
	  std::cout << "WORKING???\n";
	  advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	  goto_programt::instructiont return_assign = *icbmc_it;
	  rename_identifier(ns, return_assign.code.op0(), calling_map);
	  rename_identifier(ns, return_assign.code.op1(), current_variable_map);
	  counterexample_trace.push_back(return_assign);
	  return ;
	}
	
	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;
       
      case ASSUME:
	rename_identifier(ns, instruct.guard, current_variable_map);
	counterexample_trace.push_back(instruct);
	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;

      case ASSERT:
	rename_identifier(ns, instruct.guard, current_variable_map);
	counterexample_trace.push_back(instruct);
	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;

      case END_FUNCTION:
	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	return ;

      case FUNCTION_CALL:
	counterexample_trace.push_back(instruct);
	process_function_call(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	if (goto_it==goto_trace.steps.end())
	  break;
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;

      default:
	advance_iterators(ns, goto_trace, icbmc_it, goto_it, current_variable_map);
	break;
    }
  }
  return ;
}
	

void icbmc_goto_tracet::preprocess(
    const namespacet &ns,
    const goto_tracet &goto_trace) 
{
  std::list<class goto_programt::instructiont>::iterator icbmc_it=symex_execution_trace.begin();
  std::list<class goto_programt::instructiont>::iterator temp;
  goto_tracet::stepst::const_iterator goto_it=goto_trace.steps.begin();
  unsigned int failed_assertion_number=goto_trace.steps.back().pc->location_number;

#if 0
  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = symex_execution_trace.begin();
	icbmc_it != symex_execution_trace.end();
	icbmc_it++)
  {
    std::cout << "\ninstruction type is " << icbmc_it->type << " " << icbmc_it->location_number << std::endl;
    std::cout << "Location: " << icbmc_it->source_location << std::endl;
    std::cout << "Guard: " << from_expr(ns, icbmc_it->function, icbmc_it->guard) << std::endl;
    std::cout << "Code: " << from_expr(ns, icbmc_it->function, icbmc_it->code) << std::endl;
  }
#endif
#if 0
  for (goto_tracet::stepst::const_iterator goto_it=goto_trace.steps.begin(); goto_it!=goto_trace.steps.end(); goto_it++) {
	  if (goto_it->pc->is_dead()) std::cout << "YESSSSSS######################YESSSSSSSS\n";
  std::cout << "instruction type is " << goto_it->pc->type << " " << goto_it->pc->location_number << std::endl;
    std::cout << "Location: " << goto_it->pc->source_location << std::endl;
    std::cout << "Guard: " << from_expr(ns, "", goto_it->pc->guard) << std::endl;
    std::cout << "Code: " << from_expr(ns, "", goto_it->pc->code) << std::endl;
  }
#endif
  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = symex_execution_trace.begin();
	icbmc_it != symex_execution_trace.end();
	icbmc_it++)
  {
    icbmc_it->has_icbmc_guard=false;
  }

  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = symex_execution_trace.begin();
	icbmc_it != symex_execution_trace.end();
	icbmc_it++)
  {
    if (icbmc_it->type==GOTO && icbmc_it->guard.is_true()==false)
    {
      temp=icbmc_it;
      temp++;
      temp->has_icbmc_guard=true;
      if (icbmc_it->has_icbmc_guard==true) {
	for (std::list<exprt>::iterator i=icbmc_it->icbmc_guard.begin();
	     i != icbmc_it->icbmc_guard.end();
	     i++)
	{
	  temp->icbmc_guard.push_back(*i);
	}
      }
      exprt guard=icbmc_it->guard;
      guard.negate();
      temp->icbmc_guard.push_back(guard);
    }
  }

  //Skip the Cprover in-built stuff
  while(!goto_it->pc->source_location.need_to_print())
  {
    goto_it++;
  }

  var_mapt variable_map_global;
  std::string var_name;

  while(goto_it!=goto_trace.steps.end())
  { 
    #if 0
    std::cout << "\nORIGINAL" << std::endl;
    std::cout << "instruction type is " << icbmc_it->type << " " << icbmc_it->location_number << std::endl;
    std::cout << "Location: " << icbmc_it->source_location << std::endl;
    std::cout << "Guard: " << from_expr(ns, "", icbmc_it->guard) << std::endl;
    std::cout << "Code: " << from_expr(ns, "", icbmc_it->code) << std::endl;
    #endif 

    if (icbmc_it->location_number==failed_assertion_number)
    {
      counterexample_trace.push_back(*icbmc_it);
      break;
    }

    goto_programt::instructiont instruct = *icbmc_it;
    if (instruct.has_icbmc_guard==true)
    {
      for (std::list<exprt>::iterator i=instruct.icbmc_guard.begin();
	     i != instruct.icbmc_guard.end();
	     i++) {
	goto_programt::instructiont assume_instruction(ASSUME);
	convert_instruction(instruct, assume_instruction);
	assume_instruction.make_assumption(*i);
	counterexample_trace.push_back(assume_instruction);
      }
    }

    switch(instruct.type)
    {
      case GOTO:
	if (!instruct.guard.is_true())
	{
	  goto_programt::instructiont assume_instruction(ASSUME);
	  convert_instruction(instruct, assume_instruction);
	  assume_instruction.make_assumption(instruct.guard);
	  counterexample_trace.push_back(assume_instruction);
	}
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, variable_map_global);
	break;

      case DECL:
	var_name=from_expr(ns, "", instruct.code.op0());
        variable_map_global[var_name].push_back(var_name);	
	counterexample_trace.push_back(instruct);
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, variable_map_global);
	break;

      case FUNCTION_CALL:
	counterexample_trace.push_back(instruct);
	process_function_call(ns, goto_trace, icbmc_it, goto_it, variable_map_global);
	if (icbmc_it->location_number==failed_assertion_number)
	  break;
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it, variable_map_global);
	break;

      default:
	counterexample_trace.push_back(instruct);
    	advance_iterators(ns, goto_trace, icbmc_it, goto_it,variable_map_global);
    }
  }
}

void icbmc_goto_tracet::output(
    const namespacet &ns)
{
  goto_programt::targett icbmc_it=counterexample_trace.begin();
  std::string func_call;
  std::string entry_point="main();";
  std::ofstream out;
  std::string identation="    ";
  out.open("icbmc_goto_trace.c", std::ios::out | std::ios::trunc );
  while(icbmc_it!=counterexample_trace.end())
  {
    out << identation << "//" << icbmc_it->source_location << "\n";
    switch(icbmc_it->type)
    {
      case ASSUME:
	out << identation << "__CPROVER_assume(" << from_expr(ns, "", icbmc_it->guard) << ");\n";
	break;

      case ASSERT:
	out << identation << "__CPROVER_assert(" << from_expr(ns, "", icbmc_it->guard) << ", \"\");\n";
	break;

      case DECL:
	out << identation << from_expr(ns, "", icbmc_it->code) << "\n";
	break;

      case ASSIGN:
	out << identation << from_expr(ns, "", icbmc_it->code) << "\n";
	break;

      case FUNCTION_CALL:
	out << identation << "//Function Call: " << from_expr(ns, "", icbmc_it->code) << "\n";
	func_call=from_expr(ns, "", icbmc_it->code);
	if (func_call==entry_point) out << "int main() {\n";
	break;

      default:
	break;
    }
    icbmc_it++;
  }
  out << "\n}\n";
  out.close();
}


