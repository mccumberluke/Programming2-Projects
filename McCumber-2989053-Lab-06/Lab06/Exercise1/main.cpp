/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab06 Exercise1
*Description: This program will use recursion for a parenthesis checker.
*Date: 10/19/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <string>

int count = 0;
int checker = 0;
bool balFunc(std::string paraen){
    if(paraen.at(count) == '('){
        count++;
        if(paraen.at(paraen.length() - count) == ')'){
            checker--;
            balFunc(paraen);
            return(true);
        }
    }
    else{
        return(false);
    }
}

int main(int argc, char* argv[]){
    if(argc < 2){
        std::cout << "Incorrect number of parameters!\n";
    }
    else{
        std::string paraen = argv[1];
        checker = paraen.length();
        if(!(balFunc(paraen))){
            std::cout << "The sequence " << paraen << " is not balanced\n";
        }
        else{
            std::cout << "The sequence " << paraen << " is balanced\n";
        }
    }
}