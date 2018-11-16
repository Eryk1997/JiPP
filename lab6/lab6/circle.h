#ifndef CIRCLE_H
#define CIRCLE_H

#include "point2d.h"
#include "polygon.h"
#include "drawable.h"

class Circle :public Polygon
{
    Point2D center;
    double r;
public:
    Circle();
    Circle(Point2D center, double r);
    double area();

    void draw(){std::cout<<"Rysuje kolo"<<std::endl;}


    //bool hasGreaterArea(Polygon* p)
    //{return this->area() > p->area();}
};

#endif // CIRCLE_H
