#ifndef LBINARY_H
#define LBINARY_H

#include "lexpr.h"
#include <string>

class lbinary : public lexpr {
	protected:
		lexpr* leftExpression;
		lexpr* rightExpression;
	public:
		lexpr* getLeftExpression();
		lexpr* getRightExpression();
		lbinary(lexpr*, lexpr*);
		void getVars(std::vector<std::string>& vars);
};

#endif