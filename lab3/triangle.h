#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point2d.h"
#include "rectangle.h"
#include "circle.h"

class Triangle
{
private:
    Point2D p1;
    double width;
    double height;
public:
    Triangle();
    Triangle(Point2D,double , double);
    double area();
    bool hasGreaterArea(Rectangle r);
    bool hasGreaterArea(Circle c);

};

#endif // TRIANGLE_H
