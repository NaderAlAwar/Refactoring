CXX = g++

main: main.o var.o land.o lor.o lnot.o 
	$(CXX) -o main main.o var.o land.o lor.o lnot.o 

main.o: main.cpp var.h land.h lor.h lnot.h
	$(CXX) -c main.cpp

var.o: var.h

land.o: land.h var.h 

lnot.o: lnot.h var.h 

lor.o: lor.h var.h 