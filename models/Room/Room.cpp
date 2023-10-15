#include "./Room.hpp"
#include <iostream>


Room::Room(Object *c){
    this -> content = c;
}


void Room::Draw(){

    if(nullptr == content)
        std::cout << " ";
    else
        content -> Draw();

}


bool Room::hasSpace(){

    return nullptr == content || content->getName() == "point";

}

Object* Room::getContent(){
    return this -> content;
}

void Room::setContent(Object* obj){
    this -> content = obj;
}