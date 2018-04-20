#ifndef LUNARY_H
#define LUNARY_H

#include "lexpr.h"

class lunary : public lexpr{
protected:
	lexpr* expression;
public:
	lexpr* getExpression();
	lunary(lexpr*);
};

#endif