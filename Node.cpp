/*-----------------------------------------------------------
*File Name: Node.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab04
*Description: This program will use Nodes for stacks and queues.
*Date: 9/30/2021
*
-----------------------------------------------------------*/

template <typename T>
Node<T>::Node(T entry){
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const{
    return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry){
    m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const{
    return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
    m_next = next;
}