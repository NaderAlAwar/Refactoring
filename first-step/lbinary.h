#ifndef LBINARY_H
#define LBINARY_H

#include "lexpr.h"

class lbinary : public lexpr {
	protected:
		lexpr* leftExpression;
		lexpr* rightExpression;
	public:
		lexpr* getLeftExpression();
		lexpr* getRightExpression();
		lbinary(lexpr*, lexpr*);
};

#endif