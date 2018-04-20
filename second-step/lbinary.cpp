#include "lbinary.h"

lexpr* lbinary::getLeftExpression(){
	return leftExpression;
}

lexpr* lbinary::getRightExpression(){
	return rightExpression;
}

lbinary::lbinary(lexpr* left, lexpr* right){
	leftExpression = left;
	rightExpression = right;
}

void lbinary::getVars(std::vector<std::string>& vars){
	rightExpression->getVars(vars);
	leftExpression->getVars(vars);
}

