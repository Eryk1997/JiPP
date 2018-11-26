#include <iostream>
#include "point.h"
#include "triangle.h"

using namespace std;

int main()
{
    Point tr1(0,0);
    Point tr2(5,5);
    Triangle trojkat(tr1,5,7);
    trojkat.setHeight(5);
    trojkat.setWidth(10);
    Triangle trojkat2(tr2,15,20);
    cout <<"X=" << tr1.getX() <<" y=" << tr1.getY() << " wysokość= " << trojkat.getHeight() << "  szerokość=" << trojkat.getWidth() << endl;
    trojkat.display();
    cout <<"X=" << tr2.getX() <<" y=" << tr2.getY() << " wysokość= " << trojkat2.getHeight() << "  szerokość=" << trojkat2.getWidth() << endl;




    return 0;
}
