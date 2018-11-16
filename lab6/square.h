#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"
#include "polygon.h"
//#include "drawable.h"

class Square : public Rectangle
{
public:
    Square();
    Square(Point2D p, double width, double height);

    //bool hasGreaterArea(Polygon* p)
    //{return this->area() > p->area();}

    void draw(){std::cout<<"Rysuje kwadrat"<<std::endl;}
};

#endif // SQUARE_H
