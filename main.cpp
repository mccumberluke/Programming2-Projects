/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use queues and stacks for an elevator.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include "Executive.h"

int main(int argc, char* argv[]){
  if(argc < 2){
    std::cout << "Incorrect number of parameters!\n";
  }
  else{
    Executive exec(argv[1]);
    exec.run();
  }
  return(0);
}
