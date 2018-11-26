#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
public:
    virtual bool hasGreaterArea(Polygon &)=0;
    virtual double area()=0;
};

#endif // POLYGON_H
