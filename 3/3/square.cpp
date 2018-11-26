#include "square.h"

Square::Square()
{

}

Square::Square(Point p,double width):Rectangle (p,width,width)
{
    Square error;
    if(width==0)
        throw error;
}

const char* Square::what() const throw()
{
    return "Błędnie podane dane podczas tworzenia Kwadratu";
}
