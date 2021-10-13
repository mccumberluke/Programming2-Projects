Lab02: main.o Shape.o Circle.o Rectangle.o Triangle.o ShapeContainer.o Executive.o
	g++ -std=c++11 -g -Wall main.o Shape.o Circle.o Rectangle.o Triangle.o ShapeContainer.o Executive.o -o Lab02

main.o: main.cpp Shape.h Circle.h Rectangle.h Triangle.h ShapeContainer.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Rectangle.o: Rectangle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

Triangle.o: Triangle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Shape.o: Shape.h Shape.cpp
	g++ -std=c++11 -g -Wall -c Shape.cpp
clean:
	rm *.o Lab02
