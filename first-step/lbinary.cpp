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

