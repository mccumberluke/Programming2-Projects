/*-----------------------------------------------------------
*File Name: Executvie.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use complexity to time functions.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Node.h"
#include "Queue.h"
#include "LinkedList.h"
#include "Stack.h"
#include "ListInterface.h"
#include "StackInterface.h"
#include "QueueInterface.h"

class Executive{
    private:
    int mElements = 0;
    int mEndClock = 0; 
    int mStartClock = 0;
    int mTime = 0;
    public:
    //creates List object 
    //get Entry's and print to output file
    void getFirst();
    //creates List object 
    //get Entry's at elements-1 for the last 
    //and print to output file
    void getLast();
    //creates Queue object 
    //enqueues and prints to output file
    void queueEnqueue();
    //creates Stack object 
    //pushs elements then pops 
    //and print to output file
    void stackPop();
    //creates stack object 
    //push then destructs and print to output file
    void stackDestructor();
    //creates List object 
    //starts clock and then prints elements
    void printList();
    //runs all the functions
    void run();
};
#endif