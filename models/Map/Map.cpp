#include "./Map.hpp"
#include "../Wall/Wall.hpp"
#include "../Room/Room.hpp"
#include <iostream>



Map::Map(std::vector<std::vector<Square *>> initialMap){

    data = initialMap;

}

void Map::Draw(){ 

    for(std::vector<Square*> row : data){

        for(Square * Square : row)
            Square -> Draw();

        std::cout << "\n";
    }

}