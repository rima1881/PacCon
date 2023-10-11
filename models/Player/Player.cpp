#include "./Player.hpp"
#include "../UserInput/UserInput.hpp"

Player::Player(){
}

void Player::setName(std::string name){
    this -> name = name;
}


void Player::Controll(){

    char input;

    while (true)
    {
        std::cin >> input;
        
        UserInput uInput(input);
        
        Move(uInput.getDirction());
        

    }
    

}

void Player::Move(Direction d){

        
    if(d == Direction::north)
        posY --;
    else if(d == Direction::west)
        posX --;
    else if(d == Direction::east)
        posX ++;
    else if(d == Direction::south)
        posY ++;


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
int Player::getX(){
    return this -> posX;
}
int Player::getY(){
    return this -> posY;
}

int Player::getLife(){
    return this -> life;
}

void Player::Draw(){
    std::cout << "\033[1;33mC\033[0m\n";
}