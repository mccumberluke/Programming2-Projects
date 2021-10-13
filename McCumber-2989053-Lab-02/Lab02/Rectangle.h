/*-----------------------------------------------------------
*File Name: Rectangle.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "Shape.h"

class Rectangle: public Shape{
  private:
    double m_length;
    double m_height;
  public:
    Rectangle(double length, double height);
    /**
    * @pre->obtains double length and height
    * @post->assigns values
    * @return->none
    **/
    double area() const;
    /**
    * @pre->obtains values fro area
    * @post->multiply area
    * @return->return area
    **/
    std::string shapeName() const;
    /**
    * @pre->obtain shape
    * @post->assigns shape
    * @return->return shape name.
    **/
    ~Rectangle();
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
};
#endif
