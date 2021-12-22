/*-----------------------------------------------------------
*File Name: Node.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use Nodes for a timing operation.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node{
    private:
    T m_entry;
    Node<T>* m_next;

    public:
    Node(T entry);
    T getEntry() const;
    void setEntry(T entry);
    Node<T>* getNext() const;
    void setNext(Node<T>* next);
};
#include "Node.cpp"
#endif