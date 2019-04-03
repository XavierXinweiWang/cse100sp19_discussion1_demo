#Conventional Macros for C++ below
CXX=g++
CXXFLAGS=-std=c++11 -g -Wall
LDFLAGS=-g

main: Student.o

Student.o: Student.hpp

clean:
	rm -rf main *.o core* *.gch