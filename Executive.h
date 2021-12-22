/*-----------------------------------------------------------
*File Name: Executive.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use queues and stack for an elevator program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include "QueueInterface.h"
#include "StackInterface.h"
#include <string>
#include <fstream>

class Executive{
    private:
    std::string name;
    std::string function;
    int n;
    public:
    Executive(std::string fileName);
    ~Executive();
    void run();
    Stack <std::string> stack;
    Queue <std::string> queue;
};
#endif 