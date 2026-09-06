CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g 

programa: main.o punto.o
	$(CXX) $(CXXFLAGS) main.o punto.o -o programa.exe

main.o: main.cpp punto.h 
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

punto.o: punto.cpp punto.h
	$(CXX) $(CXXFLAGS) -c punto.cpp -o punto.o

.PHONY: clean
clean: 	
	rm -f *.o programa.exe