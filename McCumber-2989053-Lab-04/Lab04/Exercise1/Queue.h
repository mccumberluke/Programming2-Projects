/*-----------------------------------------------------------
*File Name: Queue.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use Queues for an elevator.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include "QueueInterface.h"

template <typename T>
class Queue : public QueueInterface<T>
{
    private:
    Node<T>* m_front;
    Node<T>* m_back;
    int count;

    public:
    Queue();

    /**
    * @pre None
    * @post none
    * @param none
    * @throw None
    **/
    ~Queue();

    /** 
    * @pre None
    * @post add to the back of queue and counts 
    * @param entry, the element to be added to the queue
    * @throw None
    **/
    void enqueue(T entry);

    /** 
    * @pre queue full
    * @post remove from the front of the queue
    * @param none
    * @throw None
    **/
    void dequeue();

    /** 
    * @pre checks to see if queue is empty
    * @post if queue is empty returns ture if not returns false
    * @param none
    * @throw none
    **/
    bool isEmpty() const;

    /** 
    * @pre queue is non-empty
    * @post looks at front most value
    * @param none
    * @throw None
    **/
    T peekFront() const;

    /** 
    * @pre None
    * @post returns the count on queue
    * @param none
    * @throw None
    **/
    int getCount();
};
#include "Queue.cpp"
#endif