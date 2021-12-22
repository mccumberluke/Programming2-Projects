/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use Binary Search Trees for Pokemon.
*Date: 11/30/2021
*
-----------------------------------------------------------*/
#include "Executive.h"
#include "BST.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string filename){
    fileName = filename;
}

void Executive::pokemonPrinter(Pokemon p){
    std::cout << "American name: " << p.getAmericanName() << "\n";
    std::cout << "Pokedex number: " << p.getID() << "\n";
    std::cout << "Japanese name: " << p.getJapanName() << "\n";
}

void Executive::addPokemon(){
    std::string americanName;
    int pokedex;
    std::string japaneseName;
}

void Executive::traversal(){
    int choice;
    std::cout << "Choose a Traversal order: \n";
    std::cout << "1) Pre-Order\n";
    std::cout << "2) In-Order\n";
    std::cout << "3) Post-Order\n";
    std::cout << "Option: ";
    std::cin >> choice;
    if(choice == 1){
        bst.visitPreOrder(pokemonPrinter);
    }
    if(choice == 2){
        bst.visitInOrder(pokemonPrinter);
    }
    if(choice == 3){
        bst.visitPostOrder(pokemonPrinter);
    }
}

void Executive::run(){
        std::ifstream inFile;
        inFile.open(fileName);
        if(!inFile.is_open()){
            std::cout << "File could not open!\n";
        }
        else{
            std::string americanName;
            int pokedex;
            std::string japaneseName;
            while(inFile >> americanName >> pokedex >> japaneseName){
                Pokemon pokemon;
                pokemon.setAmericanName(americanName);
                pokemon.setID(pokedex);
                pokemon.setJapanName(japaneseName);
                bst.add(pokemon);
            }
            inFile.close();
            while(true){
                try{
                    int choice;
                    std::cout << "Select an option: \n";
                    std::cout << "1) Search: \n";
                    std::cout << "2) Add: \n"; 
                    std::cout << "3) Print: \n";
                    std::cout << "4) Exit\n";
                    std::cout << "Option: ";
                    std::cin >> choice;
                    if(choice == 1){
                        int number = 0;
                        std::cout << "Enter a pokedex number: \n";
                        std::cin >> number;
                        pokemonPrinter(bst.search(number));
                    }
                    if(choice == 2){
                        std::string americanName;
                        std::string japaneseName;
                        int pokedex;
                        std::cout << "Enter a American Pokemon name: \n";
                        std::cin >> americanName;
                        std::cout << "Enter a Japanese Pokemon name: \n";
                        std::cin >> japaneseName;
                        std::cout << "Enter a Pokedex number: \n";
                        std::cin >> pokedex;
                        Pokemon temp;
                        temp.setAmericanName(americanName);
                        temp.setJapanName(japaneseName);
                        temp.setID(pokedex);
                        bst.add(temp);
                    }
                    if(choice == 3){
                        traversal();
                    }
                    if(choice == 4){
                        break;
                    }
                }
                catch(std::exception& e){
                    std::cout << e.what() << "\n";
                }
            }
        }
    }

Executive::~Executive(){
    
}