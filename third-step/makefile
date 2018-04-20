CXX = g++

main: main.o var.o land.o lor.o lnot.o lbinary.o lunary.o lexpr.o LImplies.o
	$(CXX) -o main main.o var.o land.o lor.o lnot.o lbinary.o lunary.o lexpr.o LImplies.o

main.o: main.cpp var.h land.h lor.h lnot.h lbinary.h lunary.h lexpr.h LImplies.h solve.h
	$(CXX) -c main.cpp

var.o: var.h lexpr.h

land.o: land.h var.h lbinary.h lunary.h lexpr.h

lnot.o: lnot.h var.h lbinary.h lunary.h lexpr.h

lor.o: lor.h var.h lbinary.h lunary.h lexpr.h

lexpr.o: lexpr.h var.h

LImplies.o: LImplies.h var.h lbinary.h lunary.h lexpr.h

lbinary.o: lbinary.h lexpr.h

lunary.o: lunary.h lexpr.h