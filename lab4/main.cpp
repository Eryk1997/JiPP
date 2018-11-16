#include <iostream>
#include "square.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "drawable.h"
#include "polygon.h"
using namespace std;

int main()
{
    Square s;
    Rectangle r;
    Triangle t;
    Circle c;

    Polygon *p[4]={&s,&r,&t,&c};
//  Polygon **p= new Polygon*[4]; !!!!!!!


    cout<<"s  "<<p[0]->hasGeaterArea(p[1])<<"  r"<<endl;
    cout<<"s  "<<p[0]->hasGeaterArea(p[2])<<"  t"<<endl;
    cout<<"s  "<<p[0]->hasGeaterArea(p[3])<<"  c"<<endl;
    cout<<"s  "<<p[0]->hasGeaterArea(p[1])<<"  r"<<endl;
    s.draw();
    r.draw();
    ((Drawable*)(p[2]))->draw();
    p[3]->draw();
    return 0;

}
