/*-----------------------------------------------------------
*File Name: Executive.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use LinkedList for a program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Browser.h"
#include <fstream>

class Executive{
    private:
    Browser browser;
    LinkedList<std::string> cList;
    std::string fileName;
    public:
    Executive(std::string fileName);
    ~Executive();
    void run();
};
#endif