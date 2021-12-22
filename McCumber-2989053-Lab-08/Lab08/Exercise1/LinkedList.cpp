/*-----------------------------------------------------------
*File Name: LinkedList.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use LinkedList for a program.
*Date: 11/8/2021
*
-----------------------------------------------------------*/
#include <iostream>

template <typename T>
LinkedList<T>::LinkedList(){
  m_length = 0;
  m_front = nullptr;
}

template <typename T>
T LinkedList<T>::getEntry(int index) const{
  Node<T>* jumper = m_front;
  if(index > -1 && index < m_length){
    for(int i=0; i<index; i++){
      jumper = jumper->getNext();
    }
    return(jumper->getEntry());
  }
  else{
    throw std::runtime_error("Nothing");
  }
}

template <typename T>
void LinkedList<T>::remove(int index){
  if(index < 0 || index >= m_length){
    throw std::runtime_error("Invalid index");
  }
  else if(index == 0){
    Node<T>* target = m_front;
    m_front = m_front->getNext();
    delete target;
    m_length--;
  }
  else if(index < m_length){
    Node<T>* target = m_front;
    Node<T>* oneBefore = nullptr;
    Node<T>* oneAfter = nullptr;
    for(int i=0; i<index; i++){
      oneBefore = target;
      target = target->getNext();
      oneAfter = target->getNext();
    }
    delete target;
    oneBefore->setNext(oneAfter);
    m_length--;
  }
}

template <typename T>
void LinkedList<T>::insert(int index, T entry){
  Node<T>* workingNode = m_front;
  Node<T>* priorNode;
  if(index == 0){
    Node<T>* newEntry = new Node<T>(entry);
    newEntry->setNext(workingNode);
    m_front = newEntry;
    m_length++;
  }
  else if(index == m_length){
    for(int i=0; i<index-1; i++){
      workingNode = workingNode->getNext();
    }
    Node<T>* newEntry = new Node<T>(entry);
    workingNode->setNext(newEntry);
    m_length++;
  }
  else if(index > m_length || index<0){
    throw std::runtime_error("Invalid Index");
  }
  else{
    for(int i=0; i<index; i++){
      priorNode = workingNode;
      workingNode = workingNode->getNext();
    }
    Node<T>* newEntry = new Node<T>(entry);
    newEntry->setNext(workingNode);
    priorNode->setNext(newEntry);
    m_length++;
  }
}

template <typename T>
int LinkedList<T>::length() const{
  return(m_length);
}

template <typename T>
void LinkedList<T>::setEntry(int index, T entry){
  Node<T>* temp = m_front;
  if(index > 0 && index < m_length){
    for(int i=0; i<index; i++){
      temp = temp->getNext();
    }
    temp->setEntry(entry);
  }
  else{
    throw std::runtime_error("Invalid index");
  }
}

template <typename T>
void LinkedList<T>::clear(){
  while(m_length > 0){
    Node<T>* temp = m_front;
    m_front = m_front->getNext();
    delete temp;
    --m_length;
  }
}

template <typename T>
LinkedList<T>::~LinkedList(){
  clear();
}