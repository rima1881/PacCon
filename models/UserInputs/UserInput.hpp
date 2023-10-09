#ifndef USERINPUT_H
#define USERINPUT_H

#include <array>


class UserInput
{
private:

    enum class Actions {
        north,
        south,
        west,
        east        
    };

    struct bindings
    {
        Actions action,
        char key
    };

    std::array<UserInput::bindings , 4> keyBindings();

public:
    UserInput(/* args */);
    ~UserInput();
};


#endif