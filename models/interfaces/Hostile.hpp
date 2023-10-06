#ifndef HOSTILE_H
#define HOSTILE_H

class Hostile
{
public:
    virtual int Attack() = 0;
    virtual int getAttackRange() = 0;
};

#endif