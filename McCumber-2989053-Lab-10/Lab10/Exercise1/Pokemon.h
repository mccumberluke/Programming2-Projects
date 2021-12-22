/*-----------------------------------------------------------
*File Name: Pokemon.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab10
*Description: This program will use binary trees for pokemon.
*Date: 12/6/2021
*
-----------------------------------------------------------*/
#ifndef POKEMON_H
#define POKEMON_H
#include "BNode.h"
#include "BSTInterface.h"
#include <string>

class Pokemon{
    private: 
        int m_id;
        std::string m_americanName;
        std::string m_japaneseName;
    public:
        Pokemon(); 
        bool operator==(int id);
        bool operator>(int id);
        bool operator==(const Pokemon& rhs);
        bool operator>(const Pokemon& rhs);
        bool operator<(int id);
        bool operator<(const Pokemon& rhs);
        int getID();
        void setID(int entry);
        std::string getAmericanName();
        void setAmericanName(std::string entry);
        std::string getJapanName();
        void setJapanName(std::string entry);
};
#endif
