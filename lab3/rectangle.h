#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point2d.h"

class Rectangle
{
private:
    Point2D p;
    double width;
    double height;

public:
    Rectangle();
    Rectangle(Point2D p,double width,double height);
    double area();
};

#endif // RECTANGLE_H
