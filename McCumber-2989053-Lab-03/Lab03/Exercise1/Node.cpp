/*-----------------------------------------------------------
*File Name: Node.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use Nodes on stacks.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include "Node.h"

Node::Node(char entry){
  m_entry = entry;
  m_next = nullptr;
}

char Node::getEntry() const{
  return(m_entry);
}

void Node::setEntry(char entry){
  m_entry = entry;
}

Node* Node::getNext() const{
  return(m_next);
}

void Node::setNext(Node* next){
  m_next = next;
}
