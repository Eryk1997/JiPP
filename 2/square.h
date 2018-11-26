#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square:public Rectangle
{

public:
    Square();
    Square(Point p,double width);
};

#endif // SQUARE_H
