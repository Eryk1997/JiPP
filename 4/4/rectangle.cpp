#include "rectangle.h"


Rectangle::Rectangle():p(0,0),width(0),height(0)
{

}


Rectangle::Rectangle(Point<2> board,double width,double height):p(board),width(width),height(height)
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
