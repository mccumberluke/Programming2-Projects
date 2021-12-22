/*-----------------------------------------------------------
*File Name: Browser.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use LinkedList for a program.
*Date: 9/30/2021
*
-----------------------------------------------------------*/
#ifndef BROWSER_H
#define BROWSER_H
#include "BrowserHistoryInterface.h"
#include "LinkedList.h"
#include <iostream>

class Browser : public BrowserHistoryInterface{
    private:
    int index;
    LinkedList<std::string> list;
    public:
    /** 
    * @pre None
    * @post sets index to -1
    * @param none
    * @throw None
    **/
    Browser();
    /** 
    * @pre None
    * @post none
    * @param none
    * @throw None
    **/
    ~Browser();

    /** 
    * @pre takes in the index and url
    * @post inserts and then removes 
    * @param url
    * @throw None
    **/
    void navigateTo(std::string url);

    /** 
    * @pre None
    * @post increases index
    * @param none
    * @throw None
    **/
    void forward();

    /** 
    * @pre None
    * @post decreases index
    * @param none
    * @throw None
    **/
    void back();

    /** 
    * @pre None
    * @post returns current index
    * @param none
    * @throw None
    **/
    std::string current() const;

    /** 
    * @pre copies the list
    * @post copies the list and then assigns destination and prints
    * @param destination
    * @throw None
    **/
    void copyCurrentHistory(ListInterface<std::string>& destination);
};
#endif
