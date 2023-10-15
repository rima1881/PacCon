#ifndef WALL_H
#define WALL_H
#include "../interfaces/Square.hpp"
#include "../interfaces/Object.hpp"
#include "../interfaces/Moving.hpp"

class Wall : public Square
{
public:

    Wall(){};


    //Square
    virtual void Draw();
    virtual bool hasSpace();
    virtual Object* getContent();
    virtual void setContent(Object* obj);
    virtual void setMoving(Moving* mov);
    virtual Moving* getMoving();

};

#endif