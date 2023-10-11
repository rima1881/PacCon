#include "./Game.hpp"
#include<string>
#include "../Room/Room.hpp"
#include "../Wall/Wall.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include<windows.h>

Player Game::player;
Map Game::map;

void Game::NewGame(std::string name){

    Game::player.setName(name);

}

bool Game::LoadMap(std::string fileAddress){



    std::ifstream mapFile(fileAddress);

    std::string line;
    int height=0;

    std::vector<std::vector<Square *>> loadedMap;

    {


        while (getline(mapFile,line)){

            std::vector<Square *> row;

            for(char c : line)
                if(c == '#')
                    row.push_back(new Wall());
                else
                    row.push_back(new Room(nullptr));

            loadedMap.push_back(row);

        }
    }


    Game::map.SetData(loadedMap);


    return true;
}

void Game::Start(){

    while(true){
        
        Render();
        Interact();


    }


}

void Game::Render(){

    system("cls");
    Game::map.Draw();



}

void Game::Interact(){

    char a;
    std::cin >> a;
    while(a != '\n'){
        std::cout << a;
        std::cin >> a;
    }

}