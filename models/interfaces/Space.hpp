#ifndef SPACE_H
#define SPACE_H

#include "./Object.hpp"
#include "./Square.hpp"


class Space : public Square
{
private:
    /* data */
public:
    virtual Object* getContent() = 0;
};

#endif