#ifndef MORTAL_H
#define MORTAL_H

#include "./Object.hpp"

class Mortal : public Object
{
private:
    /* data */
public:
    virtual void getLife() = 0;
    virtual void GetDamage(int d) = 0;
    virtual void Die() = 0;
};

#endif