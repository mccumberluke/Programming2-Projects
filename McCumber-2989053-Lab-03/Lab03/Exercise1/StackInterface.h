/*-----------------------------------------------------------
*File Name: StackInterface.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will have the methods for StackInterface.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class StackInterface
{
	public:
	virtual void push(T entry) = 0;
	virtual void pop() = 0;
	virtual T peek() const = 0;
	virtual bool isEmpty() const = 0;
  	virtual ~StackInterface() {} //virtual destructor

};

#endif
