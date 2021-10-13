/*-----------------------------------------------------------
*File Name: Shape.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape{
  public:
    virtual double area() const = 0;
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
    virtual std::string shapeName() const = 0;
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
    virtual ~Shape() {}
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
};
#endif
