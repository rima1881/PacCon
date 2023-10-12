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
    Cordinates getCordinates();

};
