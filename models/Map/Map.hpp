#ifndef MAP_H
#define MAP_H
#include "../interfaces/Square.hpp"

class Map
{
private:
    
    Square** data;
    int size;

public:

    Map(int size);

    void Draw();


};

#endif