#include "circle.h"
#include <math.h>

Circle::Circle():p(0,0),r(0)
{

}

Circle::Circle(Point p,double r):p(p),r(r)
{

}

double Circle::area()
{
    return r*r*M_PI;
}


bool Circle::hasGreaterArea(Polygon &c)
{
    return this->area()>c.area();
}
