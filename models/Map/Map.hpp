#ifndef MAP_H
#define MAP_H
#include "../interfaces/Square.hpp"

class Map
{
private:
    
    Square** data;

public:

    Map(/* args */);

    void Draw();

};

#endif