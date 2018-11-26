#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square:public Rectangle
{

public:
    Square();
    Square(Point p,double width);
    virtual void draw(){std::cout<<"Kwadrat ";}
    virtual const char* what() const throw();

};

#endif // SQUARE_H
