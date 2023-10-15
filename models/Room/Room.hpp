#include "../interfaces/Square.hpp"
#include "../interfaces/Object.hpp"
#include "../interfaces/Moving.hpp"

class Room : public Square
{
private:

    Object *content;
    Moving *moving;
    
    struct Position
    {
        int x;
        int y;
    } position;
    

public:

    Room(Object *c,Moving *m);

    //Square
    virtual void Draw();
    virtual bool hasSpace();
    virtual Object* getContent();
    virtual void setContent(Object* obj);
    virtual void setMoving(Moving * moving);
    virtual Moving * getMoving();

};

