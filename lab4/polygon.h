#ifndef POLYGON_H
#define POLYGON_H
#include "drawable.h"
class Polygon:public Drawable
{
public:
    virtual double area() = 0;
    //virtual void draw() = 0;
    bool hasGeaterArea(Polygon* p)
    {
        return this->area() > p->area();
    }
};

#endif // POLYGON_H
