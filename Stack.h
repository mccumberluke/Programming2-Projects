#ifndef STACK_H
#define STACK_H
#include "StackInterface.h"
#include "Node.h"

template <typename T>
class Stack : public StackInterface<T>
{
    private:
    Node<T>* m_top;
    int count;
    
    public:

    /** 
    * @pre None
    * @post creates m_top and count 
    * @param none
    * @throw None
    **/

    Stack();

    /** 
    * @pre None
    * @post none
    * @param none
    * @throw None
    **/
    ~Stack();

    /** 
    * @pre none
    * @post entry is added to top of the stack
    * @param entry, the element to be added to the stack
    * @throw None
    **/
    virtual void push(T entry);

    /** 
    * @pre stack is non-empty
    * @post Top element is removed from the stack
    * @param none
    * @throw std::runtime_error if pop attempted on empty stack
    **/
    virtual void pop();

    /**
    * @pre checks to see if stack is empty or not 
    * @post IF stack is empty returns true, if stack is not empty returns false
    * @param none
    * @throw None
    **/
    virtual bool isEmpty() const;

    /** 
    * @pre stack is non-empty
    * @post top element is getting peek 
    * @param none
    * @throw std::runtime_error if peek attempted on empty stack
    **/
    virtual T peek() const;

    /** 
    * @pre none
    * @post returns the count on the stack
    * @param none
    * @throw None
    **/
    int getCount();
};
#include "Stack.cpp"
#endif