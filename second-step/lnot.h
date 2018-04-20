#pragma once
#include "var.h"
#include "lexpr.h"
#include "lunary.h"
#include "lbinary.h"

class LNot : public lunary {
public:
  LNot(lexpr* expr);
  virtual TriValue evaluate();
  void print(std::ostream& os);
}; 
