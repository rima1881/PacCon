#ifndef BOT_H
#define BOT_H

#include "../interfaces/Moving.hpp"
#include "../Location/Location.hpp"
#include "../interfaces/Hostile.hpp"

class Bot : public Moving , public Hostile
{
private:
    std::string name;
    Location location;
    int id;
    static int num;

public:
    Bot(int x,int y);

    //hostile
    virtual void Attack();
    int getId();

    //moving
    virtual void setName(std::string name);
    virtual std::string getName();
    virtual void Move(Direction d);
    virtual Location getLocation();
    virtual void setLocation(int x,int y);
    virtual void setLocation(Location loc);


    //Object
    virtual void Draw();

};

#endif