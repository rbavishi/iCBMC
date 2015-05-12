/*******************************************************************\

Module:

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

#include <ostream>

#include "source_location.h"

/*******************************************************************\

Function: source_locationt::as_string

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

std::string source_locationt::as_string() const
{
  std::string dest;

  const irep_idt &file=get_file();
  const irep_idt &line=get_line();
  const irep_idt &column=get_column();
  const irep_idt &function=get_function();

  if(file!="") { if(dest!="") dest+=' '; dest+="file "+id2string(file); }
  if(line!="") { if(dest!="") dest+=' '; dest+="line "+id2string(line); }
  if(column!="") { if(dest!="") dest+=' '; dest+="column "+id2string(column); }
  if(function!="") { if(dest!="") dest+=' '; dest+="function "+id2string(function); }

  return dest;
}

/*******************************************************************\
 
Function: source_locationt::line_number_only

  Purpose: Get line number only

\*******************************************************************/

std::string source_locationt::line_number_only() const
{ 
  std::string line_num;
  const irep_idt &line=get_line();
  const irep_idt &file=get_file();

  if (file[0]!='<' && file!="") line_num+=id2string(line)+"\n";

  return line_num;
}

bool source_locationt::need_to_print() const
{
  const irep_idt &file=get_file();
  if (file!="" && file[0]!='<') return true;
  return false;

}

std::string source_locationt::print_function() const
{
  std::string func_name;
  const irep_idt &func=get_function();
  const irep_idt &file=get_file();

  if (file[0]!='<' && file!="") func_name += id2string(func);

  return func_name;
}

/*******************************************************************\

Function: operator<<

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

std::ostream &operator << (
  std::ostream &out,
  const source_locationt &source_location)
{
  if(source_location.is_nil()) return out;

  out << source_location.as_string();
  
  return out;
}

