#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;
#include "drawable.h"
#include "badcoordinates.h"

class Polygon:public Drawable,public BadCoordinates
{
public:
    bool hasGreaterArea(Polygon &element)
    {
        return this->area()>element.area();
    }
    virtual double area()=0;

    //virtual void draw()=0;
};

#endif // POLYGON_H
