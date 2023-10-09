#ifndef Player_H
#define Player_H
#include <iostream>
#include "../enums/icons.hpp"
#include "../interfaces/Mortal.hpp"
#include "../interfaces/Moving.hpp"

class Player : public Mortal , public Moving {

    public:

        Player(std::string name);

        void Controll();

        //killable
        virtual void GetDamage(int d);


        //Moving
        virtual void Move();


    private:

        std::string name;
        Icon icon;
        int life;



};


#endif