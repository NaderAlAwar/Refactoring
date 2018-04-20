#include <iostream>
#include <string>
using namespace std; 
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "lbinary.h"
#include "lexpr.h"

void LAnd::print(ostream& os){
  os << "( "; // print left parenthesis
  os << *leftExpression;
  os << " & "; 
  os << *rightExpression;
  os << " )";   
}

LAnd::LAnd(lexpr* left, lexpr* right)
  :
  lbinary(left, right)
{
  
}

TriValue LAnd :: evaluate() {
  TriValue lval = leftExpression->evaluate(); 
  TriValue rval = rightExpression->evaluate();
  //apply truth table. 
  if (lval == ff || rval == ff) {
    return ff; 
  }
  if (lval == uu || rval == uu) {
    return uu; 
  }
  // only case left is both are tt
  return tt;
}
