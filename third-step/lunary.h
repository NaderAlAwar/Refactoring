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
	virtual void getVars(std::vector<Var*>& vars);
};

#endif