#include "./Room.hpp"
#include <iostream>


Room::Room(Object *c,Moving *m){
    this -> content = c;
    this -> moving = m;
}


void Room::Draw(){

    if(nullptr != moving) 
        moving -> Draw();
    else if(nullptr != content)
        content -> Draw();
    else
        std::cout << " ";

}


bool Room::hasSpace(){

    return nullptr == moving;

}

Object* Room::getContent(){
    return this -> content;
}

void Room::setContent(Object* obj){
    this -> content = obj;
}


Moving* Room::getMoving(){
    return this -> moving;
}

void Room::setMoving(Moving * mov){
    this -> moving = mov;
}