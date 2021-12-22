/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use LinkedList for a program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#include "Executive.h"


Executive::Executive(std::string filename){
    fileName = filename;
}

void Executive::run(){
    std::string function;
    std::string url;
    std::ifstream inFile;
    inFile.open(fileName);
    while(inFile >> function){
        try{
            if(function == "NAVIGATE"){
                inFile >> url;
                browser.navigateTo(url);
            }
            else if(function == "BACK"){
                browser.back();
            }
            else if(function == "FORWARD"){
                browser.forward();
            }
            else if(function == "HISTORY"){
                browser.copyCurrentHistory(cList);
            }
        }
        catch(std::exception& e){
            std::cout << e.what() << "\n";
        }
    }
    inFile.close();
}

Executive::~Executive(){

}