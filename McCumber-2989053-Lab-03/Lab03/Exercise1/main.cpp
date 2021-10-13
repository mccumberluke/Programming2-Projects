/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use stacks.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include "StackTester.h"
#include "StackOfChars.h"
#include "StackParser.h"
#include "Node.h"
#include <string>
int main(int argc, char* argv[]){
  if(argc < 2){
    std::cout << "Incorrect number of parameters!\n";
  }
  else{
    std::string select = argv[1];
    if(select == "-t"){
      StackTester Object;
      Object.runTests();
    }
    if(select == "-p"){
      StackParser Object;
      Object.runParsers();
    }
  }
}
