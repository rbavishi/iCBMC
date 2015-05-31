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


void icbmc_goto_tracet::preprocess(
    const namespacet &ns,
    const goto_tracet &goto_trace) 
{
  int num_instructions=trace_instructions.size();
  std::list<class goto_programt::instructiont>::iterator icbmc_it=trace_instructions.begin();
  std::list<class goto_programt::instructiont>::iterator temp;
  goto_tracet::stepst::const_iterator goto_it=goto_trace.steps.begin();
  unsigned int taken_location_number, not_taken_location_number;
  bool failed_assertion_reached=false;
  unsigned int failed_assertion_number=goto_trace.steps.back().pc->location_number;

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
    switch (icbmc_it->type)
    {
      case GOTO:
	if(!(instruct.guard.is_true())) 
	 {
	   goto_programt::instructiont assume_addition(ASSUME);
	   temp=icbmc_it; temp++;
	   taken_location_number=instruct.location_number;
	   not_taken_location_number=temp->location_number;

	   while (goto_it!=goto_trace.steps.end()) 
	   {
	     if(goto_it->pc->location_number == taken_location_number)
	     {
	       exprt new_guard=instruct.guard;
	       assume_addition.make_assumption(new_guard);
	       convert_instruction(instruct, assume_addition);
	       trace_instructions.push_back(assume_addition);
	       goto_it++;
	       taken_location_number=goto_it->pc->location_number;
	       while (icbmc_it->location_number!=taken_location_number)
	       {
		 trace_instructions.pop_front();
		 num_instructions-=1;
           	 icbmc_it=trace_instructions.begin();
	       }
	       break;
	     }
	     else if (goto_it->pc->location_number == not_taken_location_number) 
	     {
	       exprt new_guard=instruct.guard;
	       new_guard.negate();
	       assume_addition.make_assumption(new_guard);
	       convert_instruction(instruct, assume_addition);
	       trace_instructions.push_back(assume_addition);
               trace_instructions.pop_front();
               num_instructions-=1;
               icbmc_it=trace_instructions.begin();
	       break;
	     }
	     goto_it++;
	   }
	 }
	else 
	{
	  while (goto_it!=goto_trace.steps.end()) 
	  {
	    #if 0
    		std::cout << "\n\nGOTO_TRUE_trace... Number:" << goto_it->pc->location_number << std::endl;
		std::cout << "Type: " << goto_it->pc->type << std::endl;
 	        std::cout << "Code: " << from_expr(ns, "", goto_it->pc->code) << std::endl;
    		std::cout << "Guard: " << from_expr(ns, "", goto_it->pc->guard) << std::endl;
	    #endif
	    if (goto_it->pc->location_number==instruct.location_number)
	    {
	      goto_it++;
	      break;
	    }
	    goto_it++;
	  }

	  while (icbmc_it->location_number!=goto_it->pc->location_number)
	  {
	    trace_instructions.pop_front();
	    num_instructions-=1;
	    icbmc_it=trace_instructions.begin();
	  }
	}
	break;

      case DEAD:
        trace_instructions.pop_front();
        num_instructions-=1;
        icbmc_it=trace_instructions.begin();
	break;

      default:
	trace_instructions.push_back(instruct);
        trace_instructions.pop_front();
        num_instructions-=1;
        icbmc_it=trace_instructions.begin();
	break;
    }   
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


