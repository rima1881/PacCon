#include "./Point.hpp"
#include <iostream>

Point::Point(int x,int y){

    this -> location.setX(x);
    this -> location.setY(y);
    this -> name = "point";

}

void Point::Draw(){
    std::cout << ".";
}

void Point::setLocation(Location loc){
    this -> location = loc;
}

void Point::setLocation(int x,int y){

    this -> location.setX(x);
    this -> location.setY(y);

}

Location Point::getLocation(){
    return this -> location;
}

std::string Point::getName(){
    return this -> name;
}