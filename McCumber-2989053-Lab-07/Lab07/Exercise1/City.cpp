/*-----------------------------------------------------------
*File Name: City.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab07
*Description: This program will use recursion and backtracking for a blob spreader.
*Date: 10/26/2021
*
-----------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>
#include "City.h"

City::City(std::string filename){
    fileName = filename;
}

bool City::validMove(int row, int col){
    if(row >= 0  && row < m_rows && col >= 0 && col < m_cols){
        if(m_city[row][col] == 'S' || m_city[row][col] == 'P' || m_city[row][col] == '@'){
            return(true);
        }
        else{
            return(false);
        }
    }
    else{
        return(false);
    }
}

void City::blobbify(int row, int col){
    if(m_city[row][col] == 'S'){
        m_city[row][col] = 'B';
    }
    if(m_city[row][col] == 'P'){
        m_city[row][col] = 'B';
        people++;
    }
    if(m_city[row][col] == '@'){
        m_is_sewers = true;
    }
    if(validMove(row-1, col)){
        blobbify(row-1, col);
    }
    if(validMove(row, col+1)){
        blobbify(row, col+1);
    }
    if(validMove(row, col-1)){
        blobbify(row, col-1);
    }
    if(validMove(row+1, col)){
        blobbify(row+1, col);
    }
}

void City::blobbifyCity(){
    if(m_start_x >= 0  && m_start_x < m_rows && m_start_y >= 0 && m_start_y < m_cols){
        blobbify(m_start_x, m_start_y);
        if(m_is_sewers){
            for(int i=0; i < m_rows; i++){
                for(int j=0; j < m_cols; j++){
                    if(m_city[i][j] == '@'){
                        blobbify(i, j);
                    }
                }
            }
        }
    }
}

void City::print(){
    for(int i=0; i < m_rows; i++){
        for(int j=0; j< m_cols; j++){
            std::cout << m_city[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "Total Eaten: " << people << "\n";
}

void City::run(){
    char temp;
    std::ifstream inFile;
    inFile.open(fileName);
    if(!inFile.is_open()){
        std::cout << "File not found.\n";
        m_city = nullptr;
    }
    else{
        inFile >> m_rows;
        inFile >> m_cols;
        inFile >> m_start_x;
        inFile >> m_start_y;
        if(m_start_x < 0 || m_start_x >= m_rows || m_start_y < 0 || m_start_y >= m_cols){
            std::cout << "Not a valid position.\n";
        }
        if(m_start_x < -1){
            std::cout << "Error, rows is less than 1.\n";
        }
        if(m_start_y < -1){
            std::cout << "Error, columns is less than 1.\n";
        }
        if(m_rows >= 1 && m_cols >= 1){
            m_city = new char*[m_rows];
            for(int i=0; i<m_rows; i++){
                m_city[i] = new char[m_cols];
            }
            for(int i=0; i<m_rows; i++){
                for(int j=0; j<m_cols; j++){
                    inFile >> temp;
                    m_city[i][j] = temp;
                }
            }
            blobbifyCity();
            print();
        }
    }
    inFile.close();
}

City::~City(){
    for(int i=0; i< m_rows; i++){
        delete[] m_city[i];
    }
    delete[] m_city;
}