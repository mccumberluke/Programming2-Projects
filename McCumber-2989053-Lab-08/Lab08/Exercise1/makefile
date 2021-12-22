Exercise1: main.o Executive.o
	g++ -std=c++11 -g -Wall main.o Executive.o -o Exercise1

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp 
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o Exercise1
