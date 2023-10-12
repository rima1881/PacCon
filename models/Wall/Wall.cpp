#include "./Wall.hpp"
#include <iostream>


void Wall::Draw(){
    std::cout<<"#";
}


bool Wall::hasSpace(){
    return false;
}

Object* Wall::getContent(){
    return nullptr;
}

void Wall::setContent(Object* obj){
    throw -403;
}