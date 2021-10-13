/*-----------------------------------------------------------
*File Name: Circle.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface for a circle.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include "Shape.h"

class Circle : public Shape
{
  private:
    double m_radius;
  public:
    Circle(double radius);
    /**
    * @pre->takes in radius
    * @post->assigns radius
    * @return->none
    **/
    double area() const;
    /**
    * @pre->member variables should be postive
    * @post->multiples radius
    * @return->the radius
    **/
    std::string shapeName() const;
    /**
    * @pre->obtains shape name
    * @post->prints name
    * @return->circle
    **/
    ~Circle();
    /**
    * @pre->none
    * @post->none
    * @return->none
    **/
};
#endif
