#ifndef WALL_H
#define WALL_H
#include "../interfaces/Square.hpp"


class Wall : public Square
{
public:

    Wall();


    //Square
    virtual void Draw();
    virtual bool hasSpace();


};

#endif