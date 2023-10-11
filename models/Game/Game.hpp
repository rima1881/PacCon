#ifndef GAME_H
#define GAME_H
#include "../Map/Map.hpp"
#include "../Player/Player.hpp"
#include <iostream>

class Game
{
public:

    
    static Map map;
    static Player player;

    static bool LoadMap(std::string fileAddress);
    static void Save();
    static void NewGame(std::string name);
    static void Start();
    static void Render();
    static void Interact();


};


#endif