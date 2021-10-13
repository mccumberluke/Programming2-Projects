/*-----------------------------------------------------------
*File Name: Executive.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface for Executive.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include "ShapeContainer.h"

class Executive{
  private:
    ShapeContainer* container = nullptr;
    int size;
    std::string function;
    int index;
    std::string shape;
    double data1;
    double data2;
    std::string filename;
    Shape* myShape = nullptr;
  public:
    Executive(std::string fileName);
    /**
    * @pre->obtains filename
    * @post->uses file
    * @return->none
    **/
    ~Executive();
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
    void run();
    /**
    * @pre->file names are valid
    * @post->runs code
    * @return->none
    **/
};
#endif
