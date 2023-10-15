#ifndef SQUARE_H
#define SQUARE_H
#include "./Object.hpp"
#include "./Moving.hpp"

class Square{
    public:
        virtual void Draw() = 0;
        virtual bool hasSpace() = 0;
        virtual Object* getContent() = 0;
        virtual Moving* getMoving() = 0;
        virtual void setMoving(Moving* mov) = 0;
        virtual void setContent(Object* obj) = 0;
};

#endif