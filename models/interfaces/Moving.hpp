#ifndef MOVING_H
#define MOVING_H

#include "./Object.hpp"

class Moving : public Object{
    public:
        virtual void Move() = 0;
};

#endif