#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"
#include "polygon.h"


class Rectangle:public Polygon
{
private:
    Point<2> p;
    double width;
    double height;

public:
    Rectangle();
    Rectangle(Point<2>,double,double);
    virtual double area();
    virtual void draw(){std::cout<<"Prostokąt ";}
    virtual const char* what() const throw();


};

#endif // RECTANGLE_H
