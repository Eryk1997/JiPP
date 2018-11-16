#include "triangle.h"
#include "exception.h"
Triangle::Triangle():p(0, 0), width(100), height(100)
{

}




Triangle::Triangle(Point2D p, double width, double height) throw():p(p), width(width), height(height)
{
    int a;
    int *pa=new int;
    if(width==0 || height==0)
    {
        BadCoordinates exx;
        throw exx;
    }
    delete pa;
}


double Triangle::area(){
    return (width * height) / 2;
}
