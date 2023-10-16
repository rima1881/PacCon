#include "./Bot.hpp"
#include <iostream>
#include <string>

int Bot::num = 0;

Bot::Bot(int x,int y){

    this -> location.setX(x);
    this -> location.setY(y);
    this -> name = "bot " + std::to_string(++num);
}

void Bot::Draw(){
    std::cout << "\033[1;31mB\033[0m";;
}

void Bot::Attack(){

}

int Bot::getId(){
    return id;
}

void Bot::setName(std::string name){
    this -> name = name;
}

std::string Bot::getName(){
    return this -> name;
}

void Bot::Move(Direction d){

}

Location Bot::getLocation(){
    return this -> location;
}

void Bot::setLocation(Location loc){
    this -> location = loc;
}

void Bot::setLocation(int x,int y){
    this -> location.setX(x);
    this -> location.setY(y);
}