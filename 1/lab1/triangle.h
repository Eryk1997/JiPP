#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

class Triangle
{
private:
    Point p;
    int width;
    int height;
public:
    Triangle();
    Triangle(Point,int,int);
    int getWidth();
    int getHeight();
    void setWidth(int);
    void setHeight(int);
    void display();
};

#endif // TRIANGLE_H
