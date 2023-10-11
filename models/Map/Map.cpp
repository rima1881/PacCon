#include "./Map.hpp"
#include "../Wall/Wall.hpp"
#include "../Room/Room.hpp"
#include <iostream>



Map::Map(int size){

    this -> size = size * (size + 1);

    data = new Square* [size * ( size + 1 )];

    for(int i=0;i < size;i++)
        data[i] = new Wall();

    for(int i=size; i < (size)*size ; i++)
        if( (i + 1) % (size + 1) == 0)
            data[i] = nullptr;
        else if((i) % (size+1) == 0 || (i + 2)% (size+1) == 0)
            data[i] = new Wall();
        else
            data[i] = new Room(nullptr);
        
    for(int i = size*size;i<(size+1)*size - 1;i++)
        data[i] = new Wall();



}

void Map::Draw(){ 


    for(int i=0;i<size;i++)
        if(data[i] == nullptr)
            std::cout << "\n";
        else
            data[i] -> Draw();

}