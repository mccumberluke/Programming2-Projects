Exercise1: main.o Executive.o Browser.o
	g++ -std=c++11 -g -Wall main.o Executive.o Browser.o -o Exercise1
	
main.o: main.cpp Node.h BrowserHistoryInterface.h ListInterface.h LinkedList.h Executive.h Browser.h 
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Browser.o: Browser.h Browser.cpp 
	g++ -std=c++11 -g -Wall -c Browser.cpp

clean:
	rm *.o Exercise1