/*-----------------------------------------------------------
*File Name: parser.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use a parser mode for a stack.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include "StackParser.h"
#include "StackOfChars.h"
#include <iostream>
#include <string>

StackParser::StackParser(){

}
void StackParser::runParsers(){
    StackOfChars parser;
    std::string bracket = "";
    std::cout << "Enter your sequence: ";
    std::cin >> bracket;
    if(bracket.at(0) != '}'){
        for(int i=0; i<bracket.length(); i++){
            if(bracket.at(i) == '{'){
              parser.push('{');
            }
            if(bracket.at(i) == '}'){
                parser.pop();
            }
        }
        if(parser.isEmpty()==true){
         std::cout << "Sequence is balanced.\n";
        }
        else{
            std::cout << "Sequence is not balanced.\n";
        }
    }
    else{
        std::cout << "Sequence is not balanced.\n";
    }
}
