#ifndef GAME_H
#define GAME_H
#include "../Map/Map.hpp"
#include <iostream>

class Game
{
private:
    Map* map;
public:

    static bool Load(std::string fileAddress);
    void Save();
    void NewGame();
    void Start();

};


#endif