#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>
#include "point.h"
#include "polygon.h"

class Circle:public Polygon
{
private:
    Point p;
    double r;

public:
    Circle();
    Circle(Point,double);
    virtual double area();
    virtual bool hasGreaterArea(Polygon &adres);

};

#endif // CIRCLE_H
