/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab06 Exercise3
*Description: This program will use recursion for a Fibonacci program.
*Date: 10/19/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <string>

int fibFunc(int num){
    if(num == 0 || num == 1){
        return(num);
    }
    else{
        return(fibFunc(num-1)+fibFunc(num-2));
    }
}

bool checkFib(int num){
    int count = 0;
    while(fibFunc(count) <= num){
        if(fibFunc(count) == num){
            return(true);
        }
        count++;
    }
    return(false);
}

int main(int argc, char* argv[]){

    if(argc < 3){
        std::cout << "Incorrect number of parameters!\n";
    }
    else{
        std::string select = argv[1];
        int num = std::atoi(argv[2]);
        if(select == "-i"){
            std::cout << fibFunc(num) << "\n";
        }
        if(select == "-v"){
            if(checkFib(num) != true){
                std::cout << num << " is not in the sequence\n";
            }
            else{
                std::cout << num << " is in the sequence\n";
            }
        }
    }
}