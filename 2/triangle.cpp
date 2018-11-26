#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle():width(0),height(0)
{

}

Triangle::Triangle(Point p,double height,double width):p(p),width(width),height(height)
{

}

double Triangle::getHeight()
{
    return height;
}

double Triangle::getWidth()
{
    return width;
}

void Triangle::setHeight(double aHeight)
{
    this->height=aHeight;
}

void Triangle::setWidth(double aWidth)
{
    this->width=aWidth;
}

void Triangle::display()
{
    cout << "Trójkąt" << endl;
}

double Triangle::area()
{
    return width*height/2;
}

bool Triangle::hasGreaterArea(Polygon &r)
{
    return this->area()>r.area();
}


