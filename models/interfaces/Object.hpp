#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "../Location/Location.hpp"

class Object {
    public:
        virtual void Draw() = 0;
};

#endif