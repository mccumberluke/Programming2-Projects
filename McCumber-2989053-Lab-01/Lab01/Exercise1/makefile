Exercise1: main.o BoardGame.o Executive.o
	g++ -std=c++11 -g -Wall main.o BoardGame.o Executive.o -o Exercise1

main.o: main.cpp BoardGame.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

BoardGame.o: BoardGame.h BoardGame.cpp
	g++ -std=c++11 -g -Wall -c BoardGame.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o Exercise1
