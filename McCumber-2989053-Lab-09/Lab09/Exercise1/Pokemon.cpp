/*-----------------------------------------------------------
*File Name: Pokemon.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use binary trees for pokemon.
*Date: 10/26/2021
*
-----------------------------------------------------------*/
#include "Pokemon.h"

Pokemon::Pokemon(){
    m_id = 0;
    m_americanName = "";
    m_japaneseName = "";
}

bool Pokemon::operator==(int id){
    if(m_id==id){
        return(true);
    }
    else{
        return(false);
    }
}

bool Pokemon::operator>(int id){
    if(m_id>id){
        return(true);
    }
    else{
        return(false);
    }
}

bool Pokemon::operator==(const Pokemon& rhs){
    if(m_id==rhs.m_id){
        return(true);
    }
    else{
        return(false);
    }
}

bool Pokemon::operator>(const Pokemon& rhs){
    if(m_id>rhs.m_id){
        return(true);
    }
    else{
        return(false);
    }
}

int Pokemon::getID(){
    return(m_id);
}
void Pokemon::setID(int entry){
    m_id = entry;
}
std::string Pokemon::getAmericanName(){
    return(m_americanName);
}
void Pokemon::setAmericanName(std::string entry){
    m_americanName = entry;
}
std::string Pokemon::getJapanName(){
    return(m_japaneseName);
}
void Pokemon::setJapanName(std::string entry){
    m_japaneseName = entry;
}