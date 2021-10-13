/*-----------------------------------------------------------
*File Name: StackTester.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will have the methods for StackTester.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#ifndef STACKTESTER_H
#define STACKTESTER_H

class StackTester
{
    public:

    StackTester();

    //This will call all your test methods
    void runTests();

    private:

    /**
    * @brief Creates an empty stack and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
    **/
    void test03();

    /**
    * @brief Creates an empty stack, then push 3 values, pops 1 value and peeks at lasted pushed value
    **/
    void test04();

    /**
    * @brief Creates an empty stack, then pushes once, then peeks at stack, and verifies isEmpty returns false
    **/
    void test05();

    /**
    * @brief Creates an empty stack, then pushes 4 values, then peeks to verify stack is in order
    **/
    void test06();
};
#endif
