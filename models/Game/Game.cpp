#include "./Game.hpp"

void Game::NewGame(){

    map = new Map(20);

}

void Game::Start(){

    map -> Draw();

}