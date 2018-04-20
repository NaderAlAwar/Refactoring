CXX = g++

main: main.o var.o land.o lor.o lnot.o lbinary.o lunary.o lexpr.o
	$(CXX) -o main main.o var.o land.o lor.o lnot.o lbinary.o lunary.o lexpr.o

main.o: main.cpp var.h land.h lor.h lnot.h lbinary.h lunary.h lexpr.h
	$(CXX) -c main.cpp

var.o: var.h lexpr.h

land.o: land.h var.h lbinary.h lunary.h lexpr.h

lnot.o: lnot.h var.h lbinary.h lunary.h lexpr.h

lor.o: lor.h var.h lbinary.h lunary.h lexpr.h

lexpr.o: lexpr.h var.h

lbinary.o: lbinary.h lexpr.h

lunary.o: lunary.h lexpr.h