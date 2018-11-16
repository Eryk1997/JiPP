#include "square.h"

Square::Square():Rectangle(Point2D(0, 0), 100, 100)
{

}

Square::Square(Point2D p, double width, double height):Rectangle(p, width, width){

}
