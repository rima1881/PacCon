#include "./Player.hpp"
#include "../UserInput/UserInput.hpp"

Player::Player(std::string name){
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

}

void Player::GetDamage(int d){
    
    this ->  life -= d;

    if(this -> life < 1)
        Player::Die();

}