/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use complexity for a function.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#include "Executive.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>

void Executive::getFirst(){
    std::ofstream fout("Clock_GetFirst.csv");
    mElements = 1000;

    while(mElements <= 100000){
        LinkedList<int> myList;
        for(int i=0; i<mElements; i++){
            myList.insert(0, 0);
        }
        mStartClock = clock();
        myList.getEntry(0);
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::getLast(){
    std::ofstream fout("Clock_GetLast.csv");
    mElements = 1000;

    while(mElements <= 100000){
        LinkedList<int> myList;
        for(int i=0; i<mElements; i++){
            myList.insert(0,0);
        }
        mStartClock = clock();
        myList.getEntry(mElements-1);
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::queueEnqueue(){
    std::ofstream fout("Clock_Enqueue.csv");
    mElements = 1000;

    while(mElements <= 100000){
        Queue<int> myQueue;
        for(int i=0; i<mElements; i++){
            myQueue.enqueue(1);
        }
        mStartClock = clock();
        myQueue.enqueue(mElements);
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::stackPop(){
    std::ofstream fout("Clock_StackPop.csv");
    mElements = 1000;


    while(mElements <= 100000){
        Stack<int> myStack;
        for(int i=0; i<mElements; i++){
            myStack.push(0);
        }
        mStartClock = clock();
        myStack.pop();
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::stackDestructor(){
    std::ofstream fout("Clock_StackDestructor.csv");
    mElements = 1000;

    while(mElements <= 100000){
        Stack<int> myStack;
        for(int i=0; i<mElements; i++){
            myStack.push(0);
        }
        mStartClock = clock();
        myStack.~Stack();
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::printList(){
    std::ofstream fout("Clock_PrintList.csv");
    mElements = 1000;
    mStartClock = clock();
    while(mElements <= 100000){
        LinkedList<int> myList;
        for(int i=0; i<mElements; i++){
            myList.insert(0, 0);
        }
        mEndClock = clock();
        mTime = double (mEndClock - mStartClock);
        fout << mElements << "\t";
        fout << mTime << "\n";
        mElements += 1000;
        
    }
    fout.close();
}

void Executive::run(){
    getFirst();
    getLast();
    queueEnqueue();
    stackPop();
    stackDestructor();
    printList();
}