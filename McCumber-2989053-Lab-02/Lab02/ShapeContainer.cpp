/*-----------------------------------------------------------
*File Name: ShapeContainer.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#include "ShapeContainer.h"

ShapeContainer::ShapeContainer(int size){
  m_size = size;
  m_arrayOfShapes = new Shape*[m_size];
  for(int i=0; i<m_size; i++){
    m_arrayOfShapes[i] = nullptr;
  }
}

double ShapeContainer::area(int index) const{
  if(index > m_size){
    throw(std::runtime_error("Does not exist."));
  }
  else if(m_arrayOfShapes[index] == nullptr){
    throw(std::runtime_error("Does not exist."));
  }
  else{
    return m_arrayOfShapes[index]->area();
  }
}

std::string ShapeContainer::shapeName(int index) const{
  if(index > m_size){
    throw(std::runtime_error("Does not exist."));
  }
  if(m_arrayOfShapes[index] == nullptr){
    throw(std::runtime_error("Does not exist."));
  }
  else{
    return m_arrayOfShapes[index]->shapeName();
  }
}

void ShapeContainer::add(Shape* shapePtr, int index){
  if(index > m_size){
    throw(std::runtime_error("Does not exist."));
  }
  else if(shapePtr == nullptr){
    throw(std::runtime_error("Does not exist."));
  }
  else{
    m_arrayOfShapes[index] = shapePtr;
  }
}

void ShapeContainer::remove(int index){
  if(index > m_size){
    throw(std::runtime_error("Does not exist."));
  }
  else if(m_arrayOfShapes[index] == nullptr){
    throw(std::runtime_error("Does not exist."));
  }
  else{
    delete m_arrayOfShapes[index];
    m_arrayOfShapes[index] = nullptr;
  }
}

ShapeContainer::~ShapeContainer(){
  for(int i=0; i<m_size; i++){
    delete m_arrayOfShapes;
  }
  delete[] m_arrayOfShapes;
}
