The code in this folder implements the solve routine (defined in solve.h)

I changed the way getVars works. It now takes in a vector fo Var pointers instead of strings. This will help
in setting the values in the solve routine.

Solve tries all possible combinations of values for the variables until one that returns true is found.