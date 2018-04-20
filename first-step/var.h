#pragma once
#include "lexpr.h"
#include <iostream>

enum TriValue : int{
  uu, tt, ff 
}; 
enum LType{
  VarT, LAndT, LOrT, LNotT
}; 

string nameOfValue(TriValue v); 
class Var : public lexpr{
public:
  string name;
  TriValue value; 
  Var(char n[]);
  void setValue(TriValue v);
  TriValue evaluate();
  virtual void print(std::ostream&); 
}; 
