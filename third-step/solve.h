#include <vector>
#include <algorithm>
#include "lexpr.h"
#include "var.h"

void solve(lexpr& myexpr){
	std::vector<Var*> v;
	myexpr.getVars(v);
	int size = v.size();
	std::vector<bool> myBools(size);						
    std::fill(myBools.begin(), myBools.end(), true);					//generate a vector of booleans, all initialized to true
    bool found = false;

    do {
        for (int i = 0; i < size; i++) {
        	if(myBools[i] == true)
        		v[i]->setValue(tt);
            else
            	v[i]->setValue(ff);
        }
        TriValue result = myexpr.evaluate();
        if(result == tt){
        	found = true;
        	std::cout << "Variable values that satisfy this assignment are: " << std::endl;
        	for(int i = 0; i < size; i++){
        		std::cout << v[i]->name << " with value " << v[i]->value <<std::endl;
        	}
        	break;
        }
    } while (std::next_permutation(myBools.begin(), myBools.end()));
	if(found == false)
		std::cout << "No solution found" << std::endl;
}