#include "square.h"

Square::Square():Rectangle(Point2D(0,0),100,100)
{

}

Square::Square(Point2D p, double x):Rectangle(p,x,x)
{

}
