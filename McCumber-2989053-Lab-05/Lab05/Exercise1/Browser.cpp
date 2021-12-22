/*-----------------------------------------------------------
*File Name: Browser.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab05
*Description: This program will use LinkedList for a program.
*Date: 10/18/2021
*
-----------------------------------------------------------*/
#include "Browser.h"

Browser::Browser(){
    index = -1;
}


void Browser::navigateTo(std::string url){
    ++index;
    list.insert(index, url);
    for(int i=list.length() - 1; i > index; i--){
        list.remove(i);
    }
}


void Browser::forward(){
    if(list.length()-1 > index){
        ++index;
    }
}


void Browser::back(){
    if(index > 0){
        --index;
    }
}


std::string Browser::current() const{
    return(list.getEntry(index));
}


void Browser::copyCurrentHistory(ListInterface<std::string>& destination){
    int count = 0;
    std::cout << "Oldest\n";
    std::cout << "===========\n";
    while(destination.length() < list.length()){
        destination.insert(count, list.getEntry(count)); 
        ++count;
    }
    for(int i=0; i<destination.length(); i++){
        if(i == index){
            std::cout << destination.getEntry(index) << "  <==current\n";
        }
        else{
            std::cout << destination.getEntry(i) << "\n";
        }
    }
    std::cout << "===========\n";
    std::cout << "Newest\n\n";
    destination.clear();
}


Browser::~Browser(){

}