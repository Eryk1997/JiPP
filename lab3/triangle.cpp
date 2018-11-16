#include "triangle.h"

Triangle::Triangle()
{
    p1=Point2D(0,0);
    width=100;
    height=200;

}

Triangle::Triangle(Point2D p,double width,double height)
{
    this ->p1=p;
    this ->width=width;
    this ->height=height;

}

double Triangle::area()
{
    return width * height /2;
}

bool Triangle::hasGreaterArea(Rectangle r)
{
    return this->area() > r.area();
}

bool Triangle::hasGreaterArea(Circle c)
{
    return this->area() > c.area();
}
