/*-----------------------------------------------------------
*File Name: BNode.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use Nodes for Pokemon.
*Date: 11/29/2021
*
-----------------------------------------------------------*/

template <typename T>
BNode<T>::BNode(T entry){
    m_entry = entry;
    m_left = nullptr;
    m_right = nullptr;
}

template <typename T>
T BNode<T>::getEntry() const{
    return(m_entry);
}

template <typename T>
void BNode<T>::setEntry(T entry){
    m_entry = entry;
}

template <typename T>
BNode<T>* BNode<T>::getLeft() const{
    return(m_left);
}

template <typename T>
void BNode<T>::setLeft(BNode<T>* left){
    m_left = left;
}

template <typename T>
BNode<T>* BNode<T>::getRight() const{
    return(m_right);
}

template <typename T>
void BNode<T>::setRight(BNode<T>* right){
    m_right = right;
}