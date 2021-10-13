/*-----------------------------------------------------------
*File Name: StackTester.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab02
*Description: This program will use a tester mode for stacks.
*Date: 9/28/2021
*
-----------------------------------------------------------*/
#include "StackTester.h"
#include "StackOfChars.h"
#include <iostream>

StackTester::StackTester(){

}

void StackTester::test01(){
  StackOfChars test;
  std::cout << "Test #1: New stack is empty: ";
  if(test.isEmpty()==true){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::test02(){
  StackOfChars test;
  test.push('t');
  std::cout << "Test #2: Push on empty stack makes it non-empty: ";
  if(test.isEmpty()!=true){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::test03(){
  StackOfChars test;
  test.push('t');
  test.pop();
  std::cout << "Test #3: Popping all elements makes stack empty: ";
  if(test.isEmpty()==true){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::test04(){
  StackOfChars test;
  test.push('t');
  test.push('d');
  test.push('s');
  test.pop();
  std::cout << "Test #4: 3 values pushed onto a new stack, one popped, then peeks top value: ";
  if(test.peek() == 'd'){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::test05(){
  StackOfChars test;
  test.push('t');
  test.peek();
  std::cout << "Test #5: Peeking at stack to verify it is non-empty: ";
  if(test.isEmpty()!=true){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::test06(){
  StackOfChars test;
  test.push('t');
  test.push('o');
  test.push('p');
  test.push('s');
  std::cout << "Test #6: Pushes 4 values on stack and checks they are in order: ";
  if(test.peek() == 's'){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}

void StackTester::runTests(){
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
}
