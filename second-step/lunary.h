#ifndef LUNARY_H
#define LUNARY_H

#include "lexpr.h"
#include <vector>
#include <string>

class lunary : public lexpr{
protected:
	lexpr* expression;
public:
	lexpr* getExpression();
	lunary(lexpr*);
	void getVars(std::vector<std::string>& vars);
};

#endif