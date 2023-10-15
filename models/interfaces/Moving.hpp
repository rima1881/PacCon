#ifndef MOVING_H
#define MOVING_H
#include "../enums/Direction.hpp"
#include "./Object.hpp"

class Moving : virtual public Object{
    public:
        virtual std::string getName() = 0;
        virtual void Move(Direction d) = 0;
        virtual Location getLocation() = 0;
        virtual void setLocation(int x,int y) = 0;
        virtual void setLocation(Location loc) = 0;
};

#endif