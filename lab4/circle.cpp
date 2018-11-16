#include "circle.h"
#include "math.h"
Circle::Circle():center(0, 0), r(100)
{

}

Circle::Circle(Point2D center, double r):center(center), r(r){


}

double Circle::area(){
    return  M_PI * pow(r, 2);
}
