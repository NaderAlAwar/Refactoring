#include <iostream>
#include <string>
#include <vector>
using namespace std; 

#include "var.h"
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "LImplies.h"
#include "solve.h"

int 
main() {
   Var v1("x0"); 
   Var v2("x1"); 
   LAnd a1(&v1,&v2); 
  LAnd a2(&a1,&v2); 
  LOr o1(&a2,&v1); 
  LNot n1(&o1); 
  cout << n1 << endl; 

  v1.setValue(tt);
  v2.setValue(ff);
  // the following works because I defined a streaming operator for TriValue in var.h and var.cpp
  cout << a1 << " " << a1.evaluate() << endl; 
  cout << a2 << " " << a2.evaluate() << endl; 
  cout << o1 << " " << o1.evaluate() << endl; 
  TriValue val = n1.evaluate(); 
  cout << n1 << "evaluates to " << val << endl; 

  v2.setValue(tt);
  val = n1.evaluate(); 
  cout << "now " << n1 << "evaluates to " << nameOfValue(val) << endl; 

  v1.setValue(uu);
  val = n1.evaluate(); 
  cout << "now " << n1 << "evaluates to " << nameOfValue(val) << endl; 
  // try also evaluating a1, a2 and o1. 
  // try your own formulae

  Var v3("x3");
  Var v4("x4");
  v3.setValue(tt);
  v4.setValue(tt);
  LImplies i1(&v3, &v4);
  val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;
  v4.setValue(ff);
  val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;
  v4.setValue(uu);
  val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;

  vector<Var*> temp;
  i1.getVars(temp);
  cout << "# of variables in " << i1 << " is " << temp.size() << endl;
  LAnd i2(&i1, &a2);
  vector<Var*> temp2;
  i2.getVars(temp2);
  cout << "# of variables in " << i2 << " is " << temp2.size() << endl;
  LAnd i3(&i2, &a2);
  vector<Var*> temp3;
  i3.getVars(temp3);
  cout << "# of variables in " << i3 << " is " << temp3.size() << endl;
  cout << "solving i2: " << i2 << endl;
  solve(i2);

  return 0;
}

