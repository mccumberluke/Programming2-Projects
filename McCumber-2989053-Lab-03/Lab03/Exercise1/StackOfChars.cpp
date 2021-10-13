/*-----------------------------------------------------------
*File Name: StackOfChars.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use stacks of chars for a stack.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include "StackOfChars.h"
#include <iostream>
#include <stdexcept>

StackOfChars::StackOfChars(){
  m_top = nullptr;
}

/*StackOfChars::StackOfChars(const StackOfChars& orig){
}*/

/*void StackOfChars::operator=(const StackOfChars& rhs){

}*/

void StackOfChars::push(char entry){
  Node* newTop = new Node (entry);
  newTop->setNext(m_top);
  m_top = newTop;
}

void StackOfChars::pop(){
  if(m_top != nullptr){
    Node* newTop = nullptr;
    newTop = m_top;
    m_top = m_top->getNext();
    delete newTop;
  }
  else{
    throw std::runtime_error("Stack is empty");
  }
}

char StackOfChars::peek() const{
  if(m_top != nullptr){
    return(m_top->getEntry());
  }
  else{
    throw std::runtime_error("Stack is empty");
  }
}

bool StackOfChars::isEmpty() const{
  if(m_top != nullptr){
    return(false);
  }
  else{
    return(true);
  }
}

StackOfChars::~StackOfChars(){
  while(m_top != nullptr){
    Node* newTop = m_top;
    m_top = m_top->getNext();
    delete newTop;
  }
}
