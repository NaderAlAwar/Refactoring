#ifndef LEXPR_H
#define LEXPR_H

#include <iostream>
#include <vector>
#include <string>

enum TriValue : int;

class lexpr{
public:
	virtual TriValue evaluate() = 0;
	virtual void print(std::ostream &) = 0;
	virtual void getVars(std::vector<std::string>& vars) = 0;
};

std::ostream & operator << (std::ostream & os, lexpr & v);

#endif