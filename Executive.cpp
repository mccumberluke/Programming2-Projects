/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use queues and stacks for an elevator.
*Date: 10/4/2021
*
-----------------------------------------------------------*/
#include "Executive.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <string>

std::string fileName;
Executive::Executive(std::string filename){
    fileName = filename;
}

void Executive::run(){
    std::ifstream inFile;
    inFile.open(fileName);
    while(inFile.is_open() && !inFile.eof()){
        try{
            inFile >> function;
            if(function == "WAIT"){
                inFile >> name;
                queue.enqueue(name);
            }
            else if(function == "PICK_UP"){
                while(true){
                    stack.push(queue.peekFront());
                    queue.dequeue();
                }
            }
            else if(function == "DROP_OFF"){
                inFile >> n;
                for(int i=0; i<n; i++){
                    stack.pop();
                }
            }
            else if(function == "INSPECTION"){
                std::cout << "Elevator status: \n";
                if(stack.isEmpty()){
                    std::cout << "The elevator is empty.\n";
                }
                else{
                    std::cout << "Elevator is not empty.\n";
                }
                std::cout << stack.peek() << " will be the next person to leave the elevator.\n";
                std::cout << queue.peekFront() << " will be the next person to get on the elevator.\n"; 
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