/*-----------------------------------------------------------
*File Name: Executive.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use Binary Search Trees for Pokemon.
*Date: 12/6/2021
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

void Executive::copyTraversal(){
    int choice;
    std::cout << "Choose a Traversal order: \n";
    std::cout << "1) Pre-Order\n";
    std::cout << "2) In-Order\n";
    std::cout << "3) Post-Order\n";
    std::cout << "Option: ";
    std::cin >> choice;
    if(choice == 1){
        copyTree->visitPreOrder(pokemonPrinter);
    }
    if(choice == 2){
        copyTree->visitInOrder(pokemonPrinter);
    }
    if(choice == 3){
        copyTree->visitPostOrder(pokemonPrinter);
    }
}

void Executive::clear(){
    bst.clear();
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
            bool copyCreated = false;
            while(true){
                try{
                    int count = 0;
                    int choice;
                    std::cout << "Select an option: \n";
                    std::cout << "1) Search: \n";
                    std::cout << "2) Add: \n"; 
                    std::cout << "3) Print: \n";
                    std::cout << "4) Copy: \n";
                    std::cout << "5) Remove: \n";
                    std::cout << "6) Exit\n";
                    std::cout << "Option: ";
                    std::cin >> choice;
                    if(choice == 1){
                            if(copyCreated == true){
                                int cTree = 0;
                                std::cout << "Do you want to search to the Original or Copy Tree: \n";
                                std::cout << "1) Original: \n";
                                std::cout << "2) Copy: \n";
                                std::cin >> cTree;
                            if(cTree == 1){
                                int number = 0;
                                std::cout << "Enter a pokedex number: \n";
                                std::cin >> number;
                                pokemonPrinter(bst.search(number));
                            }
                            if(cTree == 2){
                                int number = 0;
                                std::cout << "Enter a pokedex number: \n";
                                std::cin >> number;
                                pokemonPrinter(copyTree->search(number));
                            }
                        }
                        else{
                            int number = 0;
                            std::cout << "Enter a pokedex number: \n";
                            std::cin >> number;
                            pokemonPrinter(bst.search(number));
                        }
                    }
                    if(choice == 2){
                        std::string americanName;
                        std::string japaneseName;
                        int pokedex;
                        if(copyCreated == true){
                            int cTree = 0;
                            std::cout << "Do you want to add to the Original or Copy Tree: \n";
                            std::cout << "1) Original: \n";
                            std::cout << "2) Copy: \n";
                            std::cin >> cTree;
                            if(cTree == 1){
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
                            if(cTree == 2){
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
                                copyTree->add(temp);
                            }
                        }
                        else{
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
                    }
                    if(choice == 3){
                        if(copyCreated == true){
                            int cTree = 0;
                            std::cout << "Do you want to print to the Original or Copy Tree: \n";
                            std::cout << "1) Original: \n";
                            std::cout << "2) Copy: \n";
                            std::cin >> cTree;
                            if(cTree == 1){
                                traversal();
                            }
                            if(cTree == 2){
                                //try{
                                    copyTraversal();
                                //}
                                //catch(std::exception &e){
                                    //std::cout << e.what() << "\n";
                                //}
                            }
                        }
                        else{
                            traversal();
                        }
                    }
                    if(choice == 4){
                        count++;
                        if(count == 1){
                            copyTree = new BST<Pokemon, int>(bst);
                            std::cout << "Copy created.\n";
                            copyCreated = true;
                        }
                        else{
                            std::cout << "Already have a copy.\n";
                        }
                    }
                    if(choice == 5){
                        if(copyCreated == true){
                            int cTree = 0;
                            std::cout << "Do you want to remove to the Original or Copy Tree: \n";
                            std::cout << "1) Original: \n";
                            std::cout << "2) Copy: \n";
                            std::cin >> cTree;
                            if(cTree == 1){
                                int toRemove = 0;
                                std::cout << "Enter Pokedex to remove: ";
                                std::cin >> toRemove;
                                bst.remove(toRemove);
                            }
                            if(cTree == 2){
                                int toRemove = 0;
                                std::cout << "Enter Pokedex to remove: ";
                                std::cin >> toRemove;
                                copyTree->remove(toRemove);
                            }
                        }
                        else{
                            int toRemove = 0;
                            std::cout << "Enter Pokedex to remove: ";
                            std::cin >> toRemove;
                            bst.remove(toRemove);
                        }
                    }
                    if(choice == 6){
                        exit(1);
                    }
                }
                catch(std::exception& e){
                    std::cout << e.what() << "\n";
                }
            }
            delete copyTree;
        }
    }

Executive::~Executive(){
    clear();
}