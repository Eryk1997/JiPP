#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle():width(0),height(0)
{

}

Triangle::Triangle(Point p,int height,int width):p(p),width(width),height(height)
{

}

int Triangle::getHeight()
{
    return height;
}

int Triangle::getWidth()
{
    return width;
}

void Triangle::setHeight(int aHeight)
{
    this->height=aHeight;
}

void Triangle::setWidth(int aWidth)
{
    this->width=aWidth;
}

void Triangle::display()
{
    cout << "Trójkąt" << endl;
}
