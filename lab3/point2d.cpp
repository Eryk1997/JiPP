#include "point2d.h"

Point2D::Point2D():x(0),y(0)
{

}
Point2D::Point2D(double x,double y):x(x),y(y)
{

}
double Point2D::GetX(){
    return x;
}

double Point2D::GetY(){
    return y;
}
