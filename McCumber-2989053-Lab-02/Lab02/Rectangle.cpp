/*-----------------------------------------------------------
*File Name: Rectangle.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/14/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
#include <string>

Rectangle::Rectangle(double length, double height){
  m_length = length;
  m_height = height;
}

double Rectangle::area() const{
  return(m_length*m_height);
}

std::string Rectangle::shapeName() const{
  return("Rectangle");
}

Rectangle::~Rectangle(){
  
}
