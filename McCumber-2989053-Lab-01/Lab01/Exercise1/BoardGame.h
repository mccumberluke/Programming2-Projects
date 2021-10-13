#ifndef BOARD_GAME_H
#define BOARD_GAME_H
#include <string>

class BoardGame{
  private:
    std::string gameName;
    double gibbons_rating;
    double people_rating;
    int year;
    int players;
    int time;
  public:
    BoardGame(std::string g_Name, double g_rating, double p_rating, int new_Year, int new_Players, int new_Time);
    std::string getGameName();
    double getGibbonsRating();
    double getPeopleRating();
    int getYear();
    int getPlayers();
    int getTime();
    void setGameName(std::string newGameName);
    void setGibbonsRating(double newGibbonsRating);
    void setPlayerRating(double newPeopleRating);
    void setYear(int newYear);
    void setPlayers(int newPlayers);
    void setTime(int newTime);
};
#endif
