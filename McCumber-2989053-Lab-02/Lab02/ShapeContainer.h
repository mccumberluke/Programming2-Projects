/*-----------------------------------------------------------
*File Name: ShapeContainer.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use shaper interface.
*Date: 9/20/2021
*
-----------------------------------------------------------*/
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <stdexcept>

class ShapeContainer
{
   public:
   ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
   /**
   * @pre->size has to be an int.
   * @post->makes array of size and adds to nullptr;
   * @return->nothing
   **/
   ~ShapeContainer();
   /**
   * @pre->array has values or nullptr.
   * @post->delete m_arrayOfShapes
   * @return->none
   **/
   double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   /**
   * @pre->obtaing each shape and using respective area.
   * @post->print areas
   * @return->double of the area of shape
   **/
   std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   /**
   * @pre->obtains the shape name
   * @post->prints names.
   * @return->name of shape.
   **/
   void add(Shape* shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
   /**
   * @pre->obtains index
   * @post->prints index
   * @return->none
   **/
   void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete
   /**
   * @pre->index valid 
   * @post->removes index
   * @return->none
   **/
   private:
   Shape** m_arrayOfShapes;
   int m_size;
};
#endif
