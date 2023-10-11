#ifndef MORTAL_H
#define MORTAL_H

#include "./Object.hpp"

class Mortal : public Object
{
private:
    /* data */
public:
    virtual int getLife() = 0;
    virtual void GetDamage() = 0;
    virtual void Die() = 0;
};

#endif