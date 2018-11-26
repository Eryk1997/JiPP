#include "triangle.h"
#include <iostream>
using namespace std;
#include "badcoordinates.h"

Triangle::Triangle():width(0),height(0)
{

}

Triangle::Triangle(Point p,double height,double width):p(p),width(width),height(height)
{
    Triangle error;
    if(width==0 || height==0)
        throw error;



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

const char* Triangle::what() const throw()
{
    return "Błędnie podane dane podczas tworzenia Trójkata";
}
