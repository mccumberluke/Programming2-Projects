/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use Linkedlist and Browser histroy.
*Date: 10/5/2021
*
-----------------------------------------------------------*/
#include "Executive.h"

int main(int argc, char* argv[]){
  if(argc < 2){
    std::cout << "Incorrect number of parameters!\n";
  }
  else{
    std::string fileName = argv[1];
    Executive exec(fileName);
    exec.run();
  }
  return(0);
}
