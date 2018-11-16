#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"


class Square : public Rectangle
{
public:
    Square();
    Square(Point2D p,double x);
};

#endif // SQUARE_H
