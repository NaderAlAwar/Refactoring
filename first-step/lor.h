#pragma once
#include "var.h"
#include "lexpr.h"
#include "lunary.h"
#include "lbinary.h"

class LOr : public lbinary {
public:
  LOr(lexpr* left, lexpr* right);
  virtual TriValue evaluate();
  void print(std::ostream& os);
}; 
 
