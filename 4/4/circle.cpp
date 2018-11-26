#include "circle.h"
#include <math.h>
#include "badcoordinates.h"

Circle::Circle():r(0)
{

}

Circle::Circle(Point<2> board,double r):p(board),r(r)
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
