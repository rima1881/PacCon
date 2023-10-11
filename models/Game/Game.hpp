#ifndef GAME_H
#define GAME_H
#include "../Map/Map.hpp"
#include "../Player/Player.hpp"
#include <iostream>

class Game
{
private:

    Map* map;
    Player* player;
    Object** objects;

public:

    bool LoadMap(std::string fileAddress);
    void Save();
    void NewGame(std::string name);
    void Start();
    void Render();
    void Interact();


};


#endif