#include "./Player.hpp"
#include "../Game/Game.hpp"
#include "../UserInput/UserInput.hpp"

Player::Player(){
}

void Player::setName(std::string name){
    this -> name = name;
}



void Player::Move(Direction d){

    if(Game::MoveAttempt(location,d))
        location = location.Destination(d);

}

void Player::Die(){
    std::cout << "player :" << this -> getName() << "die!!!";
}

std::string Player::getName(){
    return this -> name;
}

void Player::GetDamage(){
    
    this ->  life --;

    if(this -> life < 1)
        Player::Die();

}

int Player::getLife(){
    return this -> life;
}

void Player::Draw(){
    std::cout << "\033[1;33mC\033[0m\n";
}

Location Player::getLocation(){
    return this -> location;
}