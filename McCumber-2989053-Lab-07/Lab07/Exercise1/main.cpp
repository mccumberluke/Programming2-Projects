/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab07
*Description: This program will use recursion and backtracking for a blob spreader.
*Date: 10/26/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>
#include "City.h"

int main(int argc, char* argv[]){
  if(argc < 2){
    std::cout << "Incorrect number of parameters!\n";
  }
  else{
    std::string fileName = argv[1];
    City city(fileName);
    city.run();
  }
  return(0);
}
