#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "../Location/Location.hpp"

class Object {
    public:
        virtual void Draw() = 0;
        virtual std::string getName() = 0;
        virtual Location getLocation() = 0;
};

#endif