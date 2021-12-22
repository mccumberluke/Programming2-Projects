/*-----------------------------------------------------------
*File Name: BNode.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab10
*Description: This program will use Nodes for pokemon.
*Date: 12/6/2021
*
-----------------------------------------------------------*/
#ifndef BNODE_H
#define BNODE_H
#include "Pokemon.h"
template <typename T>
class BNode{
    private:
    T m_entry;
    BNode<T>* m_left;
    BNode<T>* m_right;

    public:
    BNode(T entry);
    T getEntry() const;
    void setEntry(T entry);
    BNode<T>* getLeft() const;
    void setLeft(BNode<T>* left);
    BNode<T>* getRight() const;
    void setRight(BNode<T>* right);
};
#include "BNode.cpp"
#endif
