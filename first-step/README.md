This folder contains the first refactoring changes I made (most refactoring was done here).

I created an abstract base class call lexpr. All logical expressions must have lexpr as a base class.
The << operator was modified in such a way that it called a pure virtual function called print, and each class that inherits from lexpr
has to define its own print function.

lbinary is an abstract class that inherits from lexpr and represents all binary expressions (and, or, and eventually implies).
lbinary contains two lexpr, one called left, and one called right. Each operator that inherits implements its own evaluate() method.

lunary is an abstract calls that inherits from lexpr and represents all unary expression (only not for now).
lunary contains one lexpr, called expression. Each operator that inherits implements its own evaluate() method.

var was also modified to inherit directly from lexpr and implements its own print method.