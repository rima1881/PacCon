#include "./UserInput.hpp"


UserInput::UserInput(Direction action , char c){

    this -> key = c;

}

UserInput::UserInput(char c){

    int i = 0;

    for(;i<KeyMap.size();i++)
        if(KeyMap[i].getKey() == c)
            break;
    
    this ->direction = KeyMap[i].getDirction();
    this ->key = c;


}


std::array<UserInput, 4> UserInput::KeyMap = { 
    UserInput(Direction::north, 'w') , 
    UserInput(Direction::south,'s') , 
    UserInput(Direction::west , 'a') ,
    UserInput(Direction::east, 'd') 
};

Direction UserInput::getDirction(){
    return this -> direction;
}

char UserInput::getKey(){
    return this -> key;
}