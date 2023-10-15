#include "../interfaces/Object.hpp"
#include "../Location/Location.hpp"

class Point : public Object
{
private:

    Location location;
    std::string name;

public:
    Point(int x,int y);

    //object
    virtual void Draw();
    virtual Location getLocation();
    virtual void setLocation(int x,int y);
    virtual void setLocation(Location loc);
    virtual std::string getName(); 

};
