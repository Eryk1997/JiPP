#include "geometry.h"
#include <iostream>
#include <string>

using namespace std;

geometry::geometry()
{

}


void geometry::check(geometry s1, geometry s2)
{
    if((s1.x+s1.width)<s2.x || (s1.y+s1.height)<s2.y || s1.x>(s2.x+s2.width) || s1.y>(s2.y+s2.height))
    {
        cout << "0 0 0 0 " << endl;
        exit(0);
    }

}


void geometry::calculate (geometry s1,geometry s2,geometry *s3)
{
    if(s1.x<s2.x && s1.y < s2.y)
    {
        s3->x=s2.x;
        s3->y=s2.y;
    }
    else
    {
        s3->x=s1.x;
        s3->y=s1.y;
    }

    if(s1.x<s2.x && (s1.y+s1.height)>s2.y && (s1.x+s1.width)>(s2.x+s2.width) )
    {
        s3->width=s2.width;
        s3->height=s2.height;
    }
    else
    {
        s3->width=(s1.width+s1.x)-s2.x;
        s3->height=(s1.height+s1.y)-s2.y;

    }



}

//settery
geometry::geometry(double ,double ,double ,double ):x(0),y(0),width(0),height(0)
{

}

void geometry::set(double x,double y,double width,double height)
{

    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;

}


// gettery
double geometry::getX()
{
    return x;
}

double geometry::getY()
{
    return y;
}

double geometry::getWidth()
{
    return width;
}

double geometry::getHeight()
{
    return height;
}




geometry::~geometry()
{


}
