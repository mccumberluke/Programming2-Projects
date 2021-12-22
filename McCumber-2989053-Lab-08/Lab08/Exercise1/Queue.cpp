/*-----------------------------------------------------------
*File Name: Queue.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use Queues for a function program.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <stdexcept>
#include "Queue.h"

template <typename T>
Queue<T>::Queue(){
    m_front = nullptr;
    m_back = nullptr;
}

template <typename T>
void Queue<T>::enqueue(T entry){
    Node<T>* tempNode = new Node<T>(entry);
    if(isEmpty()){
        m_back = tempNode;
        m_front = m_back;
    }
    else{
        m_back->setNext(tempNode);
        m_back = tempNode;
    }
}

template <typename T>
void Queue<T>::dequeue(){
    if(m_front != nullptr){
        Node<T>* temp = m_front;
        m_front = m_front->getNext();
        delete temp;
    }
    else if(m_front == m_back){
        delete m_front;
        m_front = nullptr;
        m_back = nullptr;
        m_back = m_front;
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
bool Queue<T>::isEmpty() const{
    if(m_front != nullptr){
        return(false);
    }
    else{
        return(true);
    }
}

template <typename T>
T Queue<T>::peekFront() const{
    if(m_back != nullptr){
        return(m_front->getEntry());
    }
    else{
        throw std::runtime_error("empty");
    }
}

template <typename T>
Queue<T>::~Queue(){
    while(m_front != nullptr){
        Node<T>* newFront = m_front;
        m_front = m_front->getNext();
        delete newFront;    
    }
}