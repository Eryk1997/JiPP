#include <iostream>
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

using namespace std;

int main()
{
    Triangle t;
    Rectangle r;
    t.hasGreaterArea(r);
    Circle c;
    Square xx(Point2D(0,0),10);

    cout << t.area() << endl;
    cout << r.area() << endl;
    cout << t.hasGreaterArea(r) << endl;
    cout << c.area() << endl;
    cout << t.hasGreaterArea(r) << endl;
    cout << xx.area() << endl;
    cout << t.hasGreaterArea(xx) << endl;

    cout << sizeof(t) << endl;
    cout << sizeof(r) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(xx) << endl;

    return 0;
}
