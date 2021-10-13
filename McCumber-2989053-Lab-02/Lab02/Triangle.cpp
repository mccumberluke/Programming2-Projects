/*-----------------------------------------------------------
*File Name: Triangle.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface to implement a Triangle.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#include "Triangle.h"

Triangle::Triangle(double base, double height){
  m_base = base;
  m_height = height;
}

double Triangle::area() const{
  return(0.5*m_base*m_height);
}

std::string Triangle::shapeName() const{
  return("Triangle");
}

Triangle::~Triangle(){

}
