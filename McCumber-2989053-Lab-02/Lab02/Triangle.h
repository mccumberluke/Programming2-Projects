/*-----------------------------------------------------------
*File Name: Triangle.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface for Triangle.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Shape.h"

class Triangle : public Shape
{
  private:
    double m_base;
    double m_height;
  public:
    Triangle(double base, double height);
    /**
    * @pre->takes in base and height
    * @post->assigns past and height
    * @return->none
    **/
    double area() const;
    /**
    * @pre->member variables should be postive
    * @post->multiples area
    * @return->the area
    **/
    std::string shapeName() const;
    /**
    * @pre->obtains shape name
    * @post->prints Triangle
    * @return->Triangle
    **/
    ~Triangle();
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
};
#endif
