/*-----------------------------------------------------------
*File Name: Stack.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab03
*Description: This program will use stacks for an elevator.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include "StackInterface.h"
#include "Stack.h"
#include <stdexcept>

template <typename T>
Stack<T>::Stack(){
    m_top = nullptr;
    count = 0;
}

template <typename T>
void Stack<T>::push(T entry){
    if(count == 0){
        m_top = new Node<T>(entry);
        ++count;
    }
    else if(count > 6){
        throw std::runtime_error("Full");
    }
    else{
        Node<T>* newTop = new Node<T>(entry);
        newTop->setNext(m_top);
        m_top = newTop;
        ++count; 
    }  
}

template <typename T>
void Stack<T>::pop(){
    if(m_top != 0){
        Node<T>* newTop = nullptr;
        newTop = m_top;
        m_top = m_top->getNext();
        delete newTop;
        --count;
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
T Stack<T>::peek() const{
    if(m_top != 0){
        return(m_top->getEntry());
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
bool Stack<T>::isEmpty() const{
    if(m_top != 0){
        return(false);
    }
    else{
        return(true);
    }
}

template <typename T>
int Stack<T>::getCount(){
    return(count);
}

template <typename T>
Stack<T>::~Stack(){
    while(m_top != 0){
        Node<T>* newTop = m_top;
        m_top = m_top->getNext();
        delete newTop; 
        --count;   
    }
}