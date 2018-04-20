
#include <iostream>
#include <string>
using namespace std; 
#include "var.h"

string nameOfValue(TriValue v){
  static string nameOfValueTable[]={"uu", "tt", "ff"}; 
  return nameOfValueTable[v]; 
}

void Var::print(ostream & os) {
  os << name ;//<< "has value " << nameOfValue(v.value) << endl;
}

Var::Var(char n[]) : name (n), value (uu) 
{
}

void Var :: setValue(TriValue v) {
  value = v; 
}

TriValue Var :: evaluate() {
  return value; 
}
