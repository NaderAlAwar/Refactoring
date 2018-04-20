#include "lunary.h"

lexpr* lunary::getExpression(){
	return expression;
}

lunary::lunary(lexpr* expr){
	expression = expr;
}