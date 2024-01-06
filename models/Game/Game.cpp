#include "./Game.hpp"
#include<string>
#include <conio.h>
#include "../Point/Point.hpp"
#include "../Room/Room.hpp"
#include "../Wall/Wall.hpp"
#include "../UserInput/UserInput.hpp"
#include <iostream>
#include <vector>
#include<windows.h>

Player Game::player;
Map Game::map;

void Game::NewGame(std::string name){

    Game::player.setName(name);

}

bool Game::LoadMap(){

    std::string line;

    std::vector<std::vector<Square *>> loadedMap;

    {



        std::string map[16] = {
            "################",
            "#              #",
            "#              #",
            "####      ######",
            "#  #           #",
            "#  ###    #    #",
            "#  #      ##   #",
            "#  #    C  #   #",
            "#  # ######### #",
            "#  #  #  #     #",
            "#  #  #  # #####",
            "#        #     #",
            "## ####### #   #",
            "#    #  #    # #",
            "#  #      #    #",
            "################"
            };

        int y = 0,x;
        while (y < 16){
            
            line = map[y];
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
                    row.push_back(new Room(nullptr,&Game::player));
                    break;
                default:
                    row.push_back(new Room(new Point(),nullptr));
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
    std::cout << "\n" << "Score : " << Game::player.getScore() << "\n";

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

        Moving* obj = map[Loc] -> getMoving();

        map[destination] -> setMoving(obj);
        map[Loc]->setMoving(nullptr);


        return true;
    }

    return false;

}
