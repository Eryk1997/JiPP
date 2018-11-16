#ifndef CIRCLE_H
#define CIRCLE_H
#include "point2d.h"

class Circle
{
private:
    Point2D center;
    double r;
public:
    Circle();
    Circle(Point2D,double);
    double area();
};

#endif // CIRCLE_H
