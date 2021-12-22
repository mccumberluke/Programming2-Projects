/*-----------------------------------------------------------
*File Name: QueueInterface.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use queue methods for stacks.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef QUEUE_INTERFACE_H
#define QUEUE_INTERFACE_H
#include <stdexcept>

template <typename T>
class QueueInterface{
  public:
    virtual ~QueueInterface() {};
    virtual bool isEmpty() const = 0;
    virtual void enqueue(const T value) = 0;
    virtual void dequeue() = 0;
    virtual T peekFront() const = 0;
};
#endif
