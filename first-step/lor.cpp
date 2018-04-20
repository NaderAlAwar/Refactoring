#include <iostream>
#include <string>
using namespace std; 
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "lbinary.h"
#include "lexpr.h"

void LOr::print(ostream& os){
  os << "( "; // print left parenthesis
  os << *leftExpression;
  os << " | "; 
  os << *rightExpression;
  os << " )";   
}

LOr::LOr(lexpr* left, lexpr* right)
  :
  lbinary(left, right)
{
  
}

TriValue LOr :: evaluate() {
  TriValue lval = leftExpression->evaluate(); 
  TriValue rval = rightExpression->evaluate(); 
  //apply truth table of logical or. 
  if (lval == tt || rval == tt) {
    return tt; 
  }
  if (lval == uu || rval == uu) {
    return uu; 
  }
  // only case left is both are ff
  return ff;
}
