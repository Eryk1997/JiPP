#include "rectangle.h"

Rectangle::Rectangle():p(0, 0), width(200), height(100)
{

}

Rectangle::Rectangle(Point2D p, double width, double height):p(p), width(width), height(height)
{

}

double Rectangle::area(){
    return this->width * this->height;
}
