#include "rectangle.h"

Rectangle::Rectangle():p(0,0),width(100),height(200)
{

}


Rectangle::Rectangle(Point2D p,double width,double height)
{
    this ->p=p;
    this ->width=width;
    this ->height=height;
}

double Rectangle::area()
{
    return width*height;
}
