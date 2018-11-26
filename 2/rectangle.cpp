#include "rectangle.h"

Rectangle::Rectangle():p(0,0),width(0),height(0)
{

}

Rectangle::Rectangle(Point p,double width,double height):p(p),width(width),height(height)
{

}

double Rectangle::area()
{
    return width*height;
}

bool Rectangle::hasGreaterArea(Polygon &r)
{
    return this->area()>r.area();
}
