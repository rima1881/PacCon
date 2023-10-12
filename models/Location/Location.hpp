#ifndef LOCATION_H
#define LOCATION_H

#include "../enums/Direction.hpp"
class Location
{
private:

    struct Cordinates
    {
        int x;
        int y;
    } data;
    

public:
    Location();
    Location(int x,int y);
    Location Destination(Direction dir);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    Cordinates getCordinates();

};

#endif