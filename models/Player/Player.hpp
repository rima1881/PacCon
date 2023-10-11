#ifndef Player_H
#define Player_H
#include <iostream>
#include "../interfaces/Mortal.hpp"
#include "../interfaces/Moving.hpp"

class Player : public Mortal , public Moving {

    public:

        Player();

        std::string getName();
        void setName(std::string name);

        void Controll();

        //Mortal
        virtual void GetDamage();
        virtual void Die();
        virtual int getLife();

        //Moving
        virtual void Move(Direction d,bool (*checkSquare(int i,int x)));
        virtual int getX();
        virtual int getY();

        //Object
        virtual void Draw();


    private:

        std::string name;
        int life;

        int posX;
        int posY;

};


#endif