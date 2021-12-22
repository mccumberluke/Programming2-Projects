/*-----------------------------------------------------------
*File Name: LinkedList.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use LinkedList for a program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"
#include "ListInterface.h"

template <typename T>
class LinkedList : public ListInterface<T>
{
  private:
    Node<T>* m_front;
    int m_length;

    public:
    LinkedList();
    ~LinkedList();
    T getEntry(int index) const;
    void remove(int index);
    void insert(int index, T entry);
    void clear();
    void setEntry(int index, T entry);
    int length() const;
};
#include "LinkedList.cpp"
#endif
