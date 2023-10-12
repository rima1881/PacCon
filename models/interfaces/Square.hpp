#ifndef SQUARE_H
#define SQUARE_H

class Square{
    public:
        virtual void Draw() = 0;
        virtual bool hasSpace() = 0;
        virtual Object* getContent() = 0;
        virtual void setContent(Object* obj) = 0;
};

#endif