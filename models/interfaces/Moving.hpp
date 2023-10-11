#ifndef MOVING_H
#define MOVING_H
#include "../enums/Direction.hpp"
#include "./Object.hpp"

class Moving : public Object{
    public:
        virtual void Move(Direction d, bool (*checkSquare(int x,int y))) = 0;
        virtual int getX() = 0;
        virtual int getY() = 0;
};

#endif