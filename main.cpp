#include <iostream>
#include "./models/Game/Game.hpp"


int main(){

    using namespace std;

    cout << "************************************************\n";
    cout << "Welcome to the Game\n";
    cout << "************************************************\n";


    Game game;

    game.NewGame();

    game.Start();


    return 0;
}