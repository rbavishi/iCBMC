#include "icbmc_goto_trace.h"
#include <iostream>

void convert_instruction(
    const goto_programt::instructiont &old_instruct, 
    goto_programt::instructiont &new_instruct)
{
  new_instruct.source_location=old_instruct.source_location;
  new_instruct.location_number=old_instruct.location_number;
  new_instruct.function=old_instruct.function;
  new_instruct.targets=old_instruct.targets;
}

int advance_iterators(
    goto_programt::targett &icbmc_it, 
    goto_tracet::stepst::const_iterator &goto_it)
{
  unsigned int curr_loc_num=goto_it->pc->location_number;
  while(goto_it->pc->location_number==curr_loc_num)
  {
    goto_it++;
  }
  curr_loc_num=goto_it->pc->location_number;
  int cnt=0;
  while(icbmc_it->location_number!=curr_loc_num)
  {
    icbmc_it++;
    cnt++;
  }
  return cnt;
}

void icbmc_goto_tracet::preprocess(
    const namespacet &ns,
    const goto_tracet &goto_trace) 
{
  int num_instructions=trace_instructions.size();
  std::list<class goto_programt::instructiont>::iterator icbmc_it=trace_instructions.begin();
  std::list<class goto_programt::instructiont>::iterator temp;
  goto_tracet::stepst::const_iterator goto_it=goto_trace.steps.begin();
  bool failed_assertion_reached=false;
  unsigned int failed_assertion_number=goto_trace.steps.back().pc->location_number;
  int cnt;

  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = trace_instructions.begin();
	icbmc_it != trace_instructions.end();
	icbmc_it++)
  {
    icbmc_it->has_icbmc_guard=false;
  }

  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = trace_instructions.begin();
	icbmc_it != trace_instructions.end();
	icbmc_it++)
  {
    if (icbmc_it->type==GOTO && icbmc_it->guard.is_true()==false)
    {
      temp=icbmc_it;
      temp++;
      temp->has_icbmc_guard=true;
      temp->icbmc_guard=icbmc_it->guard; temp->icbmc_guard.negate();
    }
  }

  //Skip the Cprover in-built stuff
  while(!goto_it->pc->source_location.need_to_print())
  {
    goto_it++;
  }

  while(num_instructions>0)
  { 
    #if 0
    std::cout << "\nORIGINAL" << std::endl;
    std::cout << "instruction type is " << icbmc_it->type << " " << icbmc_it->location_number << std::endl;
    std::cout << "Location: " << icbmc_it->source_location << std::endl;
    std::cout << "Guard: " << from_expr(ns, "", icbmc_it->guard) << std::endl;
    std::cout << "Code: " << from_expr(ns, "", icbmc_it->code) << std::endl;
    #endif 
    if (failed_assertion_reached==true)
    {
      trace_instructions.pop_front();
      num_instructions-=1;
      icbmc_it=trace_instructions.begin();
      continue;
    }

    if (icbmc_it->location_number==failed_assertion_number)
    {
      failed_assertion_reached=true;
      trace_instructions.push_back(*icbmc_it);
      trace_instructions.pop_front();
      num_instructions-=1;
      icbmc_it=trace_instructions.begin();
      continue;
    }


    goto_programt::instructiont instruct = *icbmc_it;
    if (instruct.has_icbmc_guard==true)
    {
      goto_programt::instructiont assume_instruction(ASSUME);
      convert_instruction(instruct, assume_instruction);
      assume_instruction.make_assumption(instruct.icbmc_guard);
      trace_instructions.push_back(assume_instruction);
    }

    switch(instruct.type)
    {
      case GOTO:
	if (!instruct.guard.is_true())
	{
	  goto_programt::instructiont assume_instruction(ASSUME);
	  convert_instruction(instruct, assume_instruction);
	  assume_instruction.make_assumption(instruct.guard);
	  trace_instructions.push_back(assume_instruction);
	}
	break;

      default:
	trace_instructions.push_back(instruct);
    }
    cnt=advance_iterators(icbmc_it, goto_it);
    num_instructions-=cnt;
    while (cnt--) trace_instructions.pop_front();
  }
  
  for (std::list<class goto_programt::instructiont>::iterator
      	icbmc_it = trace_instructions.begin();
	icbmc_it != trace_instructions.end();
	icbmc_it++)
  {
    std::cout << "\ninstruction type is " << icbmc_it->type << " " << icbmc_it->location_number << std::endl;
    std::cout << "Location: " << icbmc_it->source_location << std::endl;
    std::cout << "Guard: " << from_expr(ns, "", icbmc_it->guard) << std::endl;
    std::cout << "Code: " << from_expr(ns, "", icbmc_it->code) << std::endl;
  }

}


