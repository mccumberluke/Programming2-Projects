/*-----------------------------------------------------------
*File Name: Node.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab08
*Description: This program will use Nodes for a time operation.
*Date: 11/8/2021
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