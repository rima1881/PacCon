#include "./Player.hpp"
#include "../Game/Game.hpp"
#include "../UserInput/UserInput.hpp"

Player::Player(){
    this -> life = 3;
    this -> score = 0;
}

void Player::setName(std::string name){
    this -> name = name;
}

int Player::getScore(){
    return this -> score;
}

void Player::addScore(){
    score++;
}

void Player::Move(Direction d){


    if(Game::MoveAttempt(location,d)){
        location = location.Destination(d);
        if(Game::map[location] -> getContent() != nullptr)
            Player::EatPoint(location);
    }

}

void Player::EatPoint(Location loc){
    Game::player.addScore();
    Game::map[loc] -> setContent(nullptr);
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
    std::cout << "\033[1;33mC\033[0m";
}

Location Player::getLocation(){
    return this -> location;
}

void Player::setLocation(int x,int y){


    this -> location.setX(x);
    this -> location.setY(y);

}

void Player::setLocation(Location loc){
    this -> location = loc;
}