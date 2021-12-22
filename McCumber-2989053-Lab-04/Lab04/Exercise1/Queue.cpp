/*-----------------------------------------------------------
*File Name: Queue.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use Queues for an elevator program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <stdexcept>
#include "Queue.h"

template <typename T>
Queue<T>::Queue(){
    m_front = nullptr;
    m_back = nullptr;
    count = 0;
}

template <typename T>
void Queue<T>::enqueue(T entry){
    Node<T>* tempNode = new Node<T>(entry);
    if(isEmpty()){
        m_back = tempNode;
        m_front = m_back;
        ++count;
    }
    else{
        m_back->setNext(tempNode);
        m_back = tempNode;
        ++count;
    }
}

template <typename T>
void Queue<T>::dequeue(){
    if(m_front != nullptr){
        Node<T>* temp = m_front;
        m_front = m_front->getNext();
        delete temp;
        --count;
    }
    else if(m_front == m_back){
        delete m_front;
        m_front = nullptr;
        m_back = nullptr;
        m_back = m_front;
        --count;
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
int Queue<T>::getCount(){
    return(count);
}

template <typename T>
Queue<T>::~Queue(){
    while(m_front != nullptr){
        Node<T>* newFront = m_front;
        m_front = m_front->getNext();
        delete newFront; 
        --count;   
    }
}