/*-----------------------------------------------------------
*File Name: City.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab07
*Description: This program will use recursion and backtracking for a blob spreader.
*Date: 10/26/2021
*
-----------------------------------------------------------*/
#ifndef CITY_H
#define CITY_H
#include <fstream>
#include <string>

class City{
    private:
    char** m_city;
    int m_rows;
    int m_cols;
    int m_start_x;
    int m_start_y;
    bool m_is_sewers;
    int people = 0;
    std::string fileName;
    public:
    //Makes city
    //Param: fileName
    City(std::string fileName);
    //Deletes m_city
    ~City();
    //covers all tiles with B
    //post: array is modified
    void blobbifyCity();
    //blobbifys city excpet for sewers and gets starting point
    //along with how to move
    void blobbify(int row, int col);
    //determine if it is a valid move
    bool validMove(int row, int col);
    //prints city
    void print();
    void run();
};
#endif