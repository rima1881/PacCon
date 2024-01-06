#include <iostream>
#include "./models/Game/Game.hpp"


int main(){

    using namespace std;

    cout << "************************************************\n";
    cout << "Welcome to the PacCon\n";
    cout << "************************************************\n\n";


    string name;
    cout << "please enter a username: ";
    cin >> name;


    Game::NewGame(name);

    Game::LoadMap();

    Game::Start();


    return 0;
}