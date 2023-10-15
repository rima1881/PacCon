#include "./Wall.hpp"
#include <iostream>


void Wall::Draw(){
    std::cout << "\033[1;34m#\033[0m";
}


bool Wall::hasSpace(){
    return false;
}

Object* Wall::getContent(){
    return nullptr;
}

void Wall::setContent(Object* obj){
    throw 403;
}

void Wall::setMoving(Moving* mov){
    throw 403;
}

Moving* Wall::getMoving(){
    return nullptr;
}