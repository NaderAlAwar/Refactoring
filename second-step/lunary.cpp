#include "lunary.h"

lexpr* lunary::getExpression(){
	return expression;
}

lunary::lunary(lexpr* expr){
	expression = expr;
}

void lunary::getVars(std::vector<std::string>& vars){
	expression->getVars(vars);
}