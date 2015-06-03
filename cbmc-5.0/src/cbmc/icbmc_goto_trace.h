#ifndef ICBMC_GOTO_TRACE_H
#define ICBMC_GOTO_TRACE_H

#include <goto-programs/goto_program.h>
#include <goto-programs/goto_trace.h>
#include <list>
#include <map> 

class icbmc_goto_tracet
{
public:
  std::list <class goto_programt::instructiont> symex_execution_trace;
  std::list <class goto_programt::instructiont> counterexample_trace;

  typedef std::map< irep_idt, std::list<irep_idt> > var_mapt;
  typedef goto_tracet::stepst::const_iterator goto_targett;
  void advance_iterators(
      const namespacet &ns,
      const goto_tracet &goto_trace,
      goto_programt::targett &icbmc_it, 
      goto_tracet::stepst::const_iterator &goto_it,
      var_mapt &current_map);

  void preprocess(
      const namespacet &ns,
      const goto_tracet &goto_trace);

  void process_function_call(
      const namespacet &ns,
      const goto_tracet &goto_trace,
      goto_programt::targett &icbmc_it,
      goto_targett &goto_it,
      var_mapt &calling_map);

  void output(
      const namespacet &ns);
 
};

#endif
