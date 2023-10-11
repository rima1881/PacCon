#include "./Game.hpp"
#include<string>
#include "../Room/Room.hpp"
#include "../Wall/Wall.hpp"
#include <iostream>
#include <fstream>
#include <vector>

void Game::NewGame(std::string name){

    this -> player = new Player(name);

}

bool Game::LoadMap(std::string fileAddress){



    std::ifstream mapFile(fileAddress);

    std::string line;
    int height=0;

    std::vector<std::vector<Square *>> loadedMap;

    {
        std::cout << "fuck me";


        while (getline(mapFile,line)){

            std::cout << "fuck you";
            std::cout << line;
            std::vector<Square *> row;

            for(char c : line)
                if(c == '#')
                    row.push_back(new Wall());
                else
                    row.push_back(new Room(nullptr));

            loadedMap.push_back(row);

        }
    }

    std::cout << "ninini";

    this -> map = new Map(loadedMap);


    return true;
}

void Game::Start(){

    while(true){
        
        Render();
        Interact();


    }


}

void Game::Render(){

    map -> Draw();


}

void Game::Interact(){



}