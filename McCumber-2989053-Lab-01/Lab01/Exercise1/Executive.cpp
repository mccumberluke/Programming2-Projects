#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Executive.h"

Executive::Executive(std::string fileName){
  std::ifstream inFile;
  size = 0;
  inFile.open(fileName);
  inFile >> size;
  game = new BoardGame* [size];
  std::string gameName = "";
  double gibbons_rating = 0;
  double people_rating = 0;
  int year = 0;
  int players = 0;
  int time = 0;
  if(inFile.is_open()){
    for(int i=0; i<size; i++){
      inFile >> gameName;
      inFile >> gibbons_rating;
      inFile >> people_rating;
      inFile >> year;
      inFile >> players;
      inFile >> time;
      game[i] = new BoardGame(gameName, gibbons_rating, people_rating, year, players, time);
    }
  }
  else{
    std::cout << "File could not be opened\n";
  }
  inFile.close();
}

void Executive::run(){
  int choice;
  do {
    std::cout << "Select an option: \n";
    std::cout << "1) Print all Games\n";
    std::cout << "2) Print all games from a year.\n";
    std::cout << "3) Print a ranking range.\n";
    std::cout << "4) Print The People VS Gibbons.\n";
    std::cout << "5) Print base on play time.\n";
    std::cout << "6) Exit.\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    while(std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Sorry, your input did not seem to be an int. Try again: \n";
      std::cin >> choice;
    }
    while (choice < 1 || choice >6) {
      std::cout << "Sorry, your input did not seem correct. Try again: \n";
      std::cin >> choice;
    }
    if (choice == 1) {
      for(int i=0; i<size; i++){
        std::cout << game[i]->getGameName() << " (" << game[i]->getYear() << ") ";
        std::cout << "[GR=" << game[i]->getGibbonsRating() << ", " << "PR=";
        std::cout << game[i]->getPeopleRating() << ", " << "MP=" << game[i]->getPlayers() << ", ";
        std::cout << "MT=" << game[i]->getTime() << "]\n";
      }
    }
    if(choice == 2){
      int decade = 0;
      bool checker = false;
      std::cout << "What year do you want: ";
      std::cin >> decade;
      for(int i=0; i<size; i++){
        if(decade == game[i]->getYear()){
          std::cout << game[i]->getGameName() << " " << game[i]->getYear() << "\n";
          checker = true;
        }
      }
      if(!(checker)){
        std::cout << "No games found.\n";
      }
    }
    if(choice == 3){
      double rank = 0;
      std::cout << "What Gibbons rating do you want to see: ";
      std::cin >> rank;
      for(int i=0; i<size; i++){
        if(rank == game[i]->getGibbonsRating()){
          std::cout << game[i]->getGameName() << " (" << game[i]->getGibbonsRating() << ")\n";
        }
      }
      if(rank < 1 || rank > 10){
        std::cout << "Choose a valid rank between 1 and 10.\n";
      }
    }
    if(choice == 4){
      double disagree = 0;
      double count = 0;
      double num = 0;
      std::cout << "What amount of disagreement from People VS Gibbons do you want: ";
      std::cin >> disagree;
      if(disagree < 1 || disagree > 10){
        std::cout << "Not a valid value.\n";
        num++;
      }
      for(int i=0; i<size; i++){
        if(num == 0){
          count = (game[i]->getGibbonsRating()-game[i]->getPeopleRating());
          if(count < 0){
            count = (count*-1);
          }
          if(disagree <= count){
            std::cout << game[i]->getGameName() << "\n";
          }
        }
      }
    }
    if(choice == 5){
      int amount = 0;
      std::cout << "What play time do you want: ";
      std::cin >> amount;
      for(int i=0; i<size; i++){
        if(amount >= game[i]->getTime()){
          std::cout << game[i]->getGameName() << " (" << game[i]->getTime() << ")\n";
        }
      }
    }
  } while(choice != 6);
}

Executive::~Executive(){
  delete[] game;
}
