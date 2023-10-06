#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>

class Object {
    public:
        virtual void Draw() = 0;
        virtual std::string getName() = 0;
};

#endif