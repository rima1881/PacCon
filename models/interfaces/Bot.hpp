#ifndef BOT_H
#define BOT_H

class Bot
{
private:
    /* data */
public:
    virtual int Attack() = 0;
    virtual int getRange() = 0;
};

#endif