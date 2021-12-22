/*-----------------------------------------------------------
*File Name: Executive.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab10
*Description: This program will use Binary Search trees for Pokemon.
*Date: 12/6/2021
*
-----------------------------------------------------------*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "BNode.h"
#include "Pokemon.h"
#include "BST.h"
#include <fstream>
#include <string>

class Executive{
    private:
    std::string americanName;
    int pokedex;
    std::string japaneseName;
    std::string fileName;
    public:
        BST<Pokemon, int> bst;
        BST<Pokemon, int>* copyTree = nullptr;
        //Prints the pokemon 
        static void pokemonPrinter(Pokemon p); //prints a single pokemon. does NOT use any member variables/methods of Executive
        //adds the pokemon to the Binary tree
        void addPokemon();
        //Prints the pokemon inthe traversal order that the user chooses
        void traversal();
        void copyTraversal();
        void clear();
        Executive(std::string fileName);
        ~Executive();
        void run();
};
#endif
