#include "./Game.hpp"
#include<string>
#include <conio.h>
#include "../Room/Room.hpp"
#include "../Wall/Wall.hpp"
#include "../UserInput/UserInput.hpp"
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

        int y = 0,x;
        while (getline(mapFile,line)){
            
            x = 0;
            std::vector<Square *> row;

            for(char c : line){

                switch (c)
                {
                case '#':
                    row.push_back(new Wall());
                    break;
                case 'C':
                    player.setLocation(y,x);
                    row.push_back(new Room(&Game::player));
                    break;
                default:
                    row.push_back(new Room(nullptr));
                }
                x++;
            }
            loadedMap.push_back(row);
            y++;
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
    system("CLS");
    Game::map.Draw();
}

void Game::Interact(){


    char input;

    input = getch();
        
    UserInput uInput(input);

    Game::player.Move(uInput.getDirction());

}

bool Game::MoveAttempt(Location Loc,Direction d){

    Location destination = Loc.Destination(d);

    if(map[destination] -> hasSpace()){

        Object* obj = map[Loc] -> getContent();

        map[destination] -> setContent(obj);

        map[Loc] -> setContent(nullptr);

        return true;
    }

    return false;

}