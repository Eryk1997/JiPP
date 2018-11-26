#include "rectangle.h"

Rectangle::Rectangle():p(0,0),width(0),height(0)
{

}

Rectangle::Rectangle(Point p,double width,double height):p(p),width(width),height(height)
{
    Rectangle error;
    if(width==0 || height==0)
        throw error;
}

double Rectangle::area()
{
    return width*height;
}

const char* Rectangle::what() const throw()
{
    return "Błędnie podane dane podczas tworzenia Prostokąta";
}
