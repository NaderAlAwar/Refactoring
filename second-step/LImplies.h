#pragma once

#include "var.h"
#include "lexpr.h"
#include "lunary.h"
#include "lbinary.h"

class LImplies : public lbinary {
public:
  LImplies(lexpr* left, lexpr* right);
  virtual TriValue evaluate();
  void print(std::ostream& os);
}; 