#ifndef GAME_H
#define GAME_H
#include "../Map/Map.hpp"
#include "../Player/Player.hpp"
#include <iostream>

class Game
{
private:

    Map* map;
    Player* Player;

public:

    static bool Load(std::string fileAddress);
    void Save();
    void NewGame();
    void Start();

};


#endif