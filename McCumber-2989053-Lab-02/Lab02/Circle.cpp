/*-----------------------------------------------------------
*File Name: Circle.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#include "Circle.h"
#include <string>

Circle::Circle(double radius){
  m_radius = radius;
}

double Circle::area() const{
  return(3.1416*m_radius*m_radius);
}

std::string Circle::shapeName() const{
  return("Circle");
}

Circle::~Circle(){

}
