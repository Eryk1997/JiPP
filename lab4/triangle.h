#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point2d.h"
#include "polygon.h"
#include "drawable.h"
class Triangle :public Polygon
{
    Point2D p;
    double width;
    double height;
public:
    Triangle();
    Triangle(Point2D p, double width, double height);
    double area();

    //bool hasGreaterArea(Polygon* p)
   // {return this->area() > p->area();}

    void draw(){std::cout<<"Rysuje trojkat"<<std::endl;}
};

#endif // TRIANGLE_H
