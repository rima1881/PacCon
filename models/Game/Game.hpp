#ifndef GAME_H
#define GAME_H
#include "../Map/Map.hpp"
#include "../Player/Player.hpp"
#include "../Bot/Bot.hpp"
#include <iostream>
#include <vector>

class Game
{
public:

    static std::vector<Bot> bots;
    static Map map;
    static Player player;
    static std::string msg;

    static bool MoveAttempt(Location Loc,Direction d);

    static bool LoadMap(std::string fileAddress);
    static void Save();
    static void NewGame(std::string name);
    static void Start();
    static void Render();
    static void Interact();



};


#endif