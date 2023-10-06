#include "../interfaces/Space.hpp"
#include "../interfaces/Object.hpp"


class Room : public Space
{
private:

    Object *content;

public:

    Room(Object *c);

    //Space
    virtual Object* getContent();

    //Square
    virtual void Draw();

};

