/*-----------------------------------------------------------
*File Name: StackInterface.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will be the virtual methods for StackInterface.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef STACK_INTERFACE_H
#define STACK_INTERFACE_H
#include <stdexcept>

template <typename T>
class StackInterface{
  public:
    virtual ~StackInterface() {};
    virtual bool isEmpty() const = 0;
    virtual void push(const T value) = 0;
    virtual void pop() = 0;
    virtual T peek() const = 0;
};
#endif
