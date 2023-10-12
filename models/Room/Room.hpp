#include "../interfaces/Square.hpp"
#include "../interfaces/Object.hpp"


class Room : public Square
{
private:

    Object *content;
    
    struct Position
    {
        int x;
        int y;
    } position;
    

public:

    Room(Object *c);

    //Space
    virtual Object* getContent();
    virtual void setContent(Object* obj);

    //Square
    virtual void Draw();
    virtual bool hasSpace();

};

