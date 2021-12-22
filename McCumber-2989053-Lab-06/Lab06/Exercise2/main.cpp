/*-----------------------------------------------------------
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab06 Exercise2
*Description: This program will use recursion for a Outbreak program.
*Date: 10/19/2021
*
-----------------------------------------------------------*/
#include <iostream>

int outbreakFunc(int n){
    if(n == 1){
        return(1);
    }
    else if(n == 2){
        return(8);
    }
    else if(n == 3){
        return(22);
    }
    else{
        return(outbreakFunc(n-1)+outbreakFunc(n-2)+outbreakFunc(n-3));
    }
}

int main(){
    int day = 0;
    std::cout << "OUTBREAK!\n";
    std::cout << "What day do you want a sick count for?: ";
    std::cin >> day;
    if(day <= 0){
        std::cout << "Invalid day\n";
    }
    if(day == 1){
        std::cout << "Total people with flu: " << outbreakFunc(1) << "\n";
    }
    if(day == 2){
        std::cout << "Total people with flu: " << outbreakFunc(2) << "\n";
    }
    if(day == 3){
        std::cout << "Total people with flu: " << outbreakFunc(3) << "\n";
    }
    if(day > 3){
        std::cout << "Total people with flu: " << outbreakFunc(day-1)+outbreakFunc(day-2)+outbreakFunc(day-3) << "\n";
    }
}