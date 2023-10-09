#ifndef USERINPUT_H
#define USERINPUT_H
#include<array>
#include "../enums/Direction.hpp"

class UserInput
{
private:


    char key;
    Direction direction;


    UserInput(Direction action , char c);


public:

    static std::array<UserInput , 4> KeyMap;

    UserInput(char c);
    UserInput(const UserInput &input);  

    Direction getDirction();
    char getKey();


};


#endif