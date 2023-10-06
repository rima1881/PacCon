#include "./Map.hpp"
#include "../Wall/Wall.hpp"
#include "../Room/Room.hpp"
#include <iostream>


Map::Map(int size){

    data = new Square* [size * ( size + 1 )];

    for(int i=0;i < size;i++)
        data[i] = new Wall();
    
    data[size] = nullptr;

    for(int i=1;i<(size + 1) * ( size - 1);i++){

        if((i-1) % size == 0 || (i + 1) % size == 0)
            data[i] = new Wall();
        else if(i % size == 0)
            data[i] = nullptr;
        else
            data[i] = new Room(nullptr);

    }






}

void Map::Draw(){

    for(int i=0;i<size;i++)
        if(data[i] == nullptr)
            std::cout << "\n";
        else
            data[i] -> Draw();

}