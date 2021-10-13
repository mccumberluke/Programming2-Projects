Exercise1: main.o StackInterface.o StackOfChars.o StackParser.o Node.o StackTester.o
	g++ -std=c++11 -g -Wall main.o StackInterface.o StackOfChars.o StackParser.o Node.o StackTester.o -o Exercise1

main.o: main.cpp StackInterface.h StackOfChars.h StackParser.h Node.h StackTester.h
	g++ -std=c++11 -g -Wall -c main.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp
	g++ -std=c++11 -g -Wall -c StackOfChars.cpp

StackParser.o: StackParser.h StackParser.cpp
	g++ -std=c++11 -g -Wall -c StackParser.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

StackTester.o: StackTester.h StackTester.cpp
	g++ -std=c++11 -g -Wall -c StackTester.cpp

StackInterface.o: StackInterface.h StackInterface.cpp
	g++ -std=c++11 -g -Wall -c StackInterface.cpp

clean:
	rm *.o Exercise1
