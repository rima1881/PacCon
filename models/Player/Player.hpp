#ifndef Player_H
#define Player_H
#include <iostream>
#include "../interfaces/Mortal.hpp"
#include "../interfaces/Moving.hpp"
#include "../Location/Location.hpp"

class Player : public Mortal , public Moving {

    public:

        Player();

        std::string getName();
        void setName(std::string name);
        
        //Mortal
        virtual void GetDamage();
        virtual void Die();
        virtual int getLife();

        //Moving
        virtual void Move(Direction d);

        //Object
        virtual void Draw();
        virtual Location getLocation();


    private:

        std::string name;
        int life;
        Location location;

};


#endif