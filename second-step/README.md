The code in this folder implements the LImplies class and the getVars method.

The Limplies class inherits from lbinary and implements its own evaluation method.

The getVars method is implemented as a pure virtual function in lexpr. It takes in a vector of strings in order to hold the variable names.
lbinary defines getVars by recursively calling getVars on its left and right lexpr's.
lunary calls getVars on its only lexpr.
Var also defines getVars and inserts the variable name only if it does not already exist in the vector.