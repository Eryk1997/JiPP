#include "square.h"

Square::Square()
{

}


Square::Square(Point<2> board,double width):Rectangle (board,width,width)
{
    Square error;
    if(width==0)
        throw error;
}

const char* Square::what() const throw()
{
    return "Błędnie podane dane podczas tworzenia Kwadratu";
}
