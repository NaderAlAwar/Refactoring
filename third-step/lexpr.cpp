#include "lexpr.h"
#include <vector>
#include <algorithm>


std::ostream & operator << (std::ostream & os, lexpr & v){
	v.print(os);
	return os;
} 


