#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "../Location/Location.hpp"

class Object {
    public:
        virtual std::string getName() = 0;
        virtual void Draw() = 0;
        virtual Location getLocation() = 0;
        virtual void setLocation(int x,int y) = 0;
        virtual void setLocation(Location loc) = 0;
};

#endif