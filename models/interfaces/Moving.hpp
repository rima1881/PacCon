#ifndef MOVING_H
#define MOVING_H
#include "../enums/Direction.hpp"
#include "./Object.hpp"

class Moving : virtual public Object{
    public:
        virtual void Move(Direction d) = 0;
};

#endif