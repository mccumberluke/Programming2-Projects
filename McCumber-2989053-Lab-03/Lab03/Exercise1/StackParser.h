/*-----------------------------------------------------------
*File Name: StackParser.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will have the methods for StackParser.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#ifndef STACKPARSER_H
#define STACKPARSER_H

class StackParser{
    public:
    /**
       * @pre none
       * @post none
       * @param none
       * @throw none
       **/
    StackParser();

    /**
       * @pre creates empty parser
       * @post gets brackets and decides if it is balanced or not
       * @param entry
       * @throw none
       **/
    void runParsers();
};
#endif
