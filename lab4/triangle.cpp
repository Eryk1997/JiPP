#include "triangle.h"

Triangle::Triangle():p(0, 0), width(100), height(100)
{

}

Triangle::Triangle(Point2D p, double width, double height):p(p), width(width), height(height){}


double Triangle::area(){
    return (width * height) / 2;
}
