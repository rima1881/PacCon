#ifndef POINT_H
#define POINT_H
#include "../interfaces/Object.hpp"
#include "../Location/Location.hpp"

class Point : public Object
{
private:


public:
    Point();

    //object
    virtual void Draw();

};

#endif
