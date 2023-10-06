#include "./Room.hpp"
#include <iostream>

void Room::Draw(){

    if(nullptr == content)
        std::cout << " ";
    else
        content -> Draw();

}


bool Room::hasSpace(){

    return nullptr == content;

}