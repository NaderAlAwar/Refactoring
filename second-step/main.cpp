#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std; 

#include "var.h"
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "LImplies.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

int 
main(int argc, char* argv[]) {

  if(argc < 2)
    cout << "Please enter a test number";
  else{
  if(strcmp(argv[1], "1") == 0)
    test1();
  else if(strcmp(argv[1], "2") == 0)
    test2();
  else if(strcmp(argv[1], "3") == 0)
    test3();
  else if(strcmp(argv[1], "4") == 0)
    test4();
  else if(strcmp(argv[1], "5") == 0)
    test5();
  else if(strcmp(argv[1], "6") == 0)
    test6();
  
  }
  // try also evaluating a1, a2 and o1. 
  // try your own formulae
  return 0;
}

void test1(){
  Var v1("x0"); 
  Var v2("x1"); 
  LAnd a1(&v1,&v2); 
  LAnd a2(&a1,&v2); 
  LOr o1(&a2,&v1); 
  LNot n1(&o1); 
  cout << n1 << endl;
}

void test2(){
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
}

void test3(){
  Var v1("x0"); 
  Var v2("x1"); 
  LAnd a1(&v1,&v2); 
  LAnd a2(&a1,&v2); 
  LOr o1(&a2,&v1); 
  LNot n1(&o1);
v1.setValue(tt);
  v2.setValue(ff);
   v2.setValue(tt);
  TriValue val = n1.evaluate(); 
  cout << "now " << n1 << "evaluates to " << nameOfValue(val) << endl; 
}

void test4(){
  Var v1("x0"); 
  Var v2("x1"); 
  LAnd a1(&v1,&v2); 
  LAnd a2(&a1,&v2); 
  LOr o1(&a2,&v1); 
  LNot n1(&o1);
v1.setValue(tt);
  v2.setValue(ff);
   v2.setValue(tt);
   v1.setValue(uu);
  TriValue val = n1.evaluate(); 
  cout << "now " << n1 << "evaluates to " << nameOfValue(val) << endl; 
}

void test5(){
  Var v3("x3");
  Var v4("x4");
  v3.setValue(tt);
  v4.setValue(tt);
  LImplies i1(&v3, &v4);
  TriValue val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;
  v4.setValue(ff);
  val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;
  v4.setValue(uu);
  val = i1.evaluate();
  cout << "now " << i1 << "evaluates to " << nameOfValue(val) << endl;
}

void test6(){
  Var v1("x0"); 
  Var v2("x1"); 
  LAnd a1(&v1,&v2); 
  LAnd a2(&a1,&v2);
   Var v3("x3");
  Var v4("x4");
  v3.setValue(tt);
  v4.setValue(tt);
  LImplies i1(&v3, &v4);
 vector<string> temp;
  i1.getVars(temp);
  cout << "# of variables in " << i1 << " is " << temp.size() << endl;
  LAnd i2(&i1, &a2);
  vector<string> temp2;
  i2.getVars(temp2);
  cout << "# of variables in " << i2 << " is " << temp2.size() << endl;
  LAnd i3(&i2, &a2);
  vector<string> temp3;
  i3.getVars(temp3);
  cout << "# of variables in " << i3 << " is " << temp3.size() << endl;
}