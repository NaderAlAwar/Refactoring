#include "lexpr.h"

std::ostream & operator << (std::ostream & os, lexpr & v){
	v.print(os);
	return os;
} 