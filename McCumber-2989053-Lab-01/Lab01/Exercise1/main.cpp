/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab01
*Description: This program will interact with board games.
*Date: 8/31/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include "BoardGame.h"
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
