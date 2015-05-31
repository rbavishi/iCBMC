#ifndef ICBMC_GOTO_TRACE_H
#define ICBMC_GOTO_TRACE_H

#include <goto-programs/goto_program.h>
#include <goto-programs/goto_trace.h>
#include <list>
class icbmc_goto_tracet
{
public:
  std::list <class goto_programt::instructiont> trace_instructions;
  void preprocess(
      const namespacet &ns,
      const goto_tracet &goto_trace);
 
};

#endif
