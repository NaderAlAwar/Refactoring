#pragma once
#include "var.h"
#include "lexpr.h"
#include "lunary.h"
#include "lbinary.h"

class LAnd : public lbinary {
public:
  LAnd(lexpr* left, lexpr* right);
  virtual TriValue evaluate();
  void print(std::ostream& os);
}; 

