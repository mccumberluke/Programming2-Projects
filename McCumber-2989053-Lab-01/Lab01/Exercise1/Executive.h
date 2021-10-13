#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "BoardGame.h"

class Executive{
  private:
    BoardGame** game;
    int size;
  public:
    Executive(std::string fileName);
    ~Executive();
    void run();
};
#endif
