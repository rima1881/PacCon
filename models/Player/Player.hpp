#ifndef Player_H
#define Player_H
#include <iostream>
#include "../interfaces/Mortal.hpp"
#include "../interfaces/Moving.hpp"

class Player : public Mortal , public Moving {

    public:

        Player(std::string name);


        std::string getName();

        void Controll();

        //Mortal
        virtual void GetDamage();
        virtual void Die();
        virtual int getLife();

        //Moving
        virtual void Move(Direction d);


        //Object
        virtual void Draw();

    private:

        std::string name;
        int life;



};


#endif