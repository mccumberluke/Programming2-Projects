/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface for Executive.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#include "Executive.h"
#include "ShapeContainer.h"
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string fileName){
  filename = fileName;
  container = nullptr;
  myShape = nullptr;
}
void Executive::run(){
    std::ifstream inFile;
    inFile.open(filename);
    inFile >> size;
    ShapeContainer* container = new ShapeContainer(size);
    while(inFile.is_open()){
        try{
            inFile >> function;
            if(function == "ADD"){
              inFile >> index;
              inFile >> shape;
              if(shape == "CIR"){
                inFile >> data1;
                myShape = new Circle(data1);
                container->add(myShape, index);
              }
              if(shape == "TRI"){
                inFile >> data1;
                inFile >> data2;
                myShape = new Triangle(data1,data2);
                container->add(myShape, index);
              }
              if(shape == "REC"){
                inFile >> data1;
                inFile >> data2;
                myShape = new Rectangle(data1, data2);
                container->add(myShape, index);
              }
            }
            if(function == "DELETE"){
              inFile >> index;
              container->remove(index);
            }
            if(function == "PRINT"){
              inFile >> index;
              std::cout << "Shape at index " << index << ": " << container->shapeName(index) << " area = "<< container->area(index) << "\n";
            }
            if(function == "EXIT"){
              std::cout << "Exiting...\n";
              break;
            }
          }
          catch(std::exception& e){
            std::cout << e.what() << "\n";
          }
        }
        inFile.close();
      }
  Executive::~Executive(){
    delete container;
  }
