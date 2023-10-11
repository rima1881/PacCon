#include "./Game.hpp"
#include<string>
#include <iostream>

void Game::NewGame(std::string name){

    map = new Map(20);

    this -> player = new Player(name);

}

void Game::Start(){

    while(true){
        
        Render();
        Interact();
    }


}

void Game::Render(){

    system("cls"); 
    map -> Draw();


}

void Game::Interact(){



}