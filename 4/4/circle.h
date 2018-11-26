#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>
#include "point.h"
#include "polygon.h"

class Circle:public Polygon
{
private:
    Point<2> p;
    double r;

public:
    Circle();
    Circle(Point<2>,double);
    virtual double area();
    virtual void draw(){std::cout<<"Koło";}
    virtual const char* what() const throw();


};

#endif // CIRCLE_H
