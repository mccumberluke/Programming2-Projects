/*-----------------------------------------------------------
*File Name: StackOfChars.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will have the methods for StackOfChars.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef STACKOFCHARS_H
#define STACKOFCHARS_H
#include "StackInterface.h"
#include "Node.h"
//Our stack will implement the StackInterface but of a stack specifically filled with chars.
//We'll learn in lecture how to make a templated Node and then a templated Stack
class StackOfChars : public StackInterface<char>
{
	private:
	Node* m_top;

	public:
	StackOfChars();
	StackOfChars(const StackOfChars& orig);
       ~StackOfChars();
	void operator=(const StackOfChars& rhs);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @param entry, the element to be added to the stack
       * @throw None
       **/
	void push(char entry);

      /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre Stack is non-empty
       * @post Top element is removed from the stack
       * @param None
       * @throw std::runtime_error if pop attempted on empty stack
       **/
	void pop();

       /**
       * @pre Stack is non-empty
       * @post Top element is getting peek
       * @param None
       * @throw std::runtime_error if peek attempted on empty stack
       **/
	char peek() const;

       /**
       * @pre Checks to see is stack is empty or not
       * @post If stack is empty returns true, if stack is not empty returns false
       * @param None
       * @throw None
       **/
	bool isEmpty() const;

};
#endif
