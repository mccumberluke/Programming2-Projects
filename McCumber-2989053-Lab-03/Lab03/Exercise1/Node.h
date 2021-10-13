/*-----------------------------------------------------------
*File Name: Node.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will have the methods for Node.h.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef NODE_H
#define NODE_H

class Node
{
	private:
	char m_entry;
	Node* m_next;

	public:
	/**
       * @pre takes an entry
       * @post sets next to nullptr
       * @param entry
       * @throw none
       **/
	Node(char entry);

	/**
       * @pre gets constant entry
       * @post returns entry
       * @param none
       * @throw none
       **/
	char getEntry() const;

	/**
       * @pre takes an entry
       * @post sets entry to a new entry
       * @param entry
       * @throw none
       **/
	void setEntry(char entry);

	/**
       * @pre gets node
       * @post returns next node
       * @param none
       * @throw none
       **/
	Node* getNext() const;

	/**
       * @pre gets node
       * @post sets previous node to next node
       * @param node
       * @throw none
       **/
	void setNext(Node* next);

};
#endif
