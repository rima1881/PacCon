#ifndef Player_H
#define Player_H
#include <iostream>
#include "../interfaces/Mortal.hpp"
#include "../interfaces/Moving.hpp"
#include "../interfaces/Object.hpp"
#include "../Location/Location.hpp"

class Player : public Mortal , public Moving {

    public:

        Player();

        int getScore();
        void addScore();
        void EatPoint(Location loc);

        //Mortal
        virtual void GetDamage();
        virtual void Die();
        virtual int getLife();

        //Moving
        virtual void Move(Direction d);
        virtual void setName(std::string name);
        virtual std::string getName();
        virtual Location getLocation();
        virtual void setLocation(int x,int y);
        virtual void setLocation(Location loc);

        //Object
        virtual void Draw();


    private:

        std::string name;
        int life;
        int score;
        Location location;

};


#endif