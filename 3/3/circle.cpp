#include "circle.h"
#include <math.h>
#include "badcoordinates.h"

Circle::Circle():p(0,0),r(0)
{

}

Circle::Circle(Point p,double r):p(p),r(r)
{
    Circle error;
    if(r==0)
        throw error;
}

double Circle::area()
{

    return r*r*M_PI;
}

const char* Circle::what() const throw()
{
    return "Błędnie podane dane podczas tworzenia Koła";
}
