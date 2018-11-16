#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point2d.h"
#include "polygon.h"
#include "drawable.h"
class Rectangle:public Polygon
{
protected:
    Point2D p;
    double width;
    double height;
public:
    Rectangle();
    Rectangle(Point2D p, double width, double height);
    double area();

    void draw(){std::cout<<"Rysuje prostokat"<<std::endl;}
};

#endif // RECTANGLE_H
