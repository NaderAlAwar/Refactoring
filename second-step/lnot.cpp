#include <iostream>
#include <string>
using namespace std; 
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "lbinary.h"
#include "lexpr.h"

void LNot::print(ostream& os){
  os << "( ! "; // print left parenthesis
  os << *expression;
  os << " )";   
}

LNot::LNot(lexpr* expr)
  :
  lunary(expr)
{
  
}

TriValue LNot :: evaluate() {
  //apply truth table of logical not. 
  TriValue val = expression->evaluate();
  if (val == tt) {
    return ff;
  }
  if (val == ff) {
    return tt; 
  }
  return uu; 
}
