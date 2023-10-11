#include <iostream>
#include "./models/Game/Game.hpp"


int main(){

    using namespace std;

    cout << "************************************************\n";
    cout << "Welcome to the Game\n";
    cout << "************************************************\n";



    Game::NewGame("amir");

    Game::LoadMap("./db/map1.txt");

    Game::Start();


    return 0;
}