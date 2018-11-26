#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"
#include "rectangle.h"
#include "circle.h"
#include "polygon.h"

class Triangle:public Polygon
{
private:
    Point p;
    double width;
    double height;
public:
    Triangle();
    Triangle(Point,double,double);
    double getWidth();
    double getHeight();
    void setWidth(double);
    void setHeight(double);
    void display();
    virtual double area();
    virtual void draw(){std::cout<<"Trójkąt ";}
    virtual const char* what() const throw();

};

#endif // TRIANGLE_H
