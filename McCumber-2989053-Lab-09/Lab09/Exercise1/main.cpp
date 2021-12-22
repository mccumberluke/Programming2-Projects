/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use binary trees to find pokemon.
*Date: 11/23/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>
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