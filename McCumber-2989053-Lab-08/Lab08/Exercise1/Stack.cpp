/*-----------------------------------------------------------
*File Name: Stack.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use stacks for an elevator.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include "Stack.h"
#include "StackInterface.h"
#include <stdexcept>

template <typename T>
Stack<T>::Stack(){
    m_top = nullptr;
}

template <typename T>
void Stack<T>::push(T entry){
    Node<T>* newTop = new Node<T>(entry);
    newTop->setNext(m_top);
    m_top = newTop;  
}

template <typename T>
void Stack<T>::pop(){
    if(m_top != nullptr){
        Node<T>* newTop = nullptr;
        newTop = m_top;
        m_top = m_top->getNext();
        delete newTop;
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
T Stack<T>::peek() const{
    if(m_top != nullptr){
        return(m_top->getEntry());
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
bool Stack<T>::isEmpty() const{
    if(m_top != nullptr){
        return(false);
    }
    else{
        return(true);
    }
}

template <typename T>
Stack<T>::~Stack(){
    while(m_top != nullptr){
        Node<T>* newTop = m_top;
        m_top = m_top->getNext();
        delete newTop;
    }
}