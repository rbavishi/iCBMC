#include <iostream>
#include <util/irep.h>
#include "cbe.h"
void exprt_visit(const exprt &expr)
{
  const typet &type=expr.type();
  if (expr.id() == ID_symbol)
    std::cout << to_symbol_expr(expr).get_identifier() << std::endl;
  else
    std::cout << expr.id() << "\n";
  std::cout << "ID: " << id2string(expr.id()) << "\n";
  if (type.id()==ID_signedbv) {
    exprt trial=expr;
    typet new_type(ID_signedbv);
    to_signedbv_type(new_type).set_width(64);
    trial.make_typecast(new_type);
    trial.operands()=expr.operands();
    std::cout << type.id() << to_signedbv_type(type).get_width() << std::endl;
  }
  else if (type.id()==ID_unsignedbv)
    std::cout << type.id() << to_unsignedbv_type(type).get_width() << std::endl;
  else
    std::cout << type.id() << std::endl;
  forall_operands(it, expr)
    exprt_visit(*it);

}
  
