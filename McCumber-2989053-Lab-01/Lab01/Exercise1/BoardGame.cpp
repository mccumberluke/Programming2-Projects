#include "BoardGame.h"

BoardGame::BoardGame(std::string g_Name, double g_rating, double p_rating, int new_Year, int new_Players, int new_Time){
  gameName = g_Name;
  gibbons_rating = g_rating;
  people_rating = p_rating;
  year = new_Year;
  players = new_Players;
  time = new_Time;
}
void BoardGame::setGameName(std::string newGameName){
  gameName = newGameName;
}
std::string BoardGame::getGameName(){
  return(gameName);
}
void BoardGame::setGibbonsRating(double newGibbonsRating){
  gibbons_rating = newGibbonsRating;
}
double BoardGame::getGibbonsRating(){
  return(gibbons_rating);
}
void BoardGame::setPlayerRating(double newPeopleRating){
  people_rating = newPeopleRating;
}
double BoardGame::getPeopleRating(){
  return(people_rating);
}
void BoardGame::setYear(int newYear){
  year = newYear;
}
int BoardGame::getYear(){
  return(year);
}
void BoardGame::setPlayers(int newPlayers){
  players = newPlayers;
}
int BoardGame::getPlayers(){
  return(players);
}
void BoardGame::setTime(int newTime){
  time = newTime;
}
int BoardGame::getTime(){
  return(time);
}
