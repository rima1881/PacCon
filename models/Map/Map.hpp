#ifndef MAP_H
#define MAP_H
#include "../interfaces/Square.hpp"
#include <vector>

class Map
{
private:
    
    std::vector<std::vector<Square *>> data;
    int size;

public:

    Map(std::vector<std::vector<Square *>> initialMap);
    Map();

    void SetData(std::vector<std::vector<Square *>> initialMap);

    void Draw();


};

#endif