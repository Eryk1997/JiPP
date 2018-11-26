#include <iostream>
#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "polygon.h"
#include "badcoordinates.h"
#include "cfile.h"

using namespace std;

int main()
{
    Point point1(0,0);
    Point point2(5,5);
    Triangle trojkat(point1,5,7);
    Triangle tr({2,3},20,30);
    trojkat.setHeight(15);
    trojkat.setWidth(10);
    Triangle trojkat2(point2,15,20);

    Circle c(point1,20);

    Rectangle p(point1,5,10);

    Square s(point1,5);


    cout <<"X=" << point1.getX() <<" y=" << point1.getY() << " wysokość= " << trojkat.getHeight() << "  szerokość=" << trojkat.getWidth() << endl;
   // trojkat.display();
    cout <<"X=" << point2.getX() <<" y=" << point2.getY() << " wysokość= " << trojkat2.getHeight() << "  szerokość=" << trojkat2.getWidth() << endl;

    cout << "Pole trójkąta1= " << trojkat.area() << endl;

    cout << "Pole koła=" << c.area() << endl;

    cout << "Pole prostokąta=" << p.area() << endl;

    cout << "Pole kwadratu=" << s.area() << endl;

    if(trojkat.hasGreaterArea(p)==1)
        cout << "Pole Trójkąta jest większe od pola Prostokąta" << endl;
    else
        cout << "Pole Trójkąta jest mniejsze od pola Prostokąta" << endl;
    if(trojkat.hasGreaterArea(c)==1)
        cout << "Pole trójkąta jest większe od pola koła" << endl;
    else
        cout << "Pole trójkąta jest mniejsze od pola koła" << endl;
    if(trojkat.hasGreaterArea(s)==1)
        cout << "Pole trójkąta jest większe od pola kwadratu" << endl;
    else
        cout << "Pole trójkąta jest mniejsze od pola kwadratu" << endl;

    cout << "Zajmowana pamięc przez trójkąt= " << sizeof (trojkat) << endl;
    cout << "Zajmowana pamięc przez prostokąt= " << sizeof (p) << endl;
    cout << "Zajmowana pamięc przez koło= " << sizeof (c) << endl;
    cout << "Zajmowana pamięc przez kwadrat= " << sizeof (s) << endl;

    Polygon **polygon=new Polygon*[4];
    polygon[0]=&trojkat;
    polygon[1]=&c;
    polygon[2]=&p;
    polygon[3]=&s;

    for(int i=0;i<4;i++)
    {
        cout << "Trójkat " << polygon[0]->hasGreaterArea(*polygon[i]);
        polygon[i]->draw();
        cout << endl;
    }



    try {
       // Circle kolo({0,0},0);
       // Triangle xx({0,0},2,0);
       // Square({0,0},0);
        Rectangle({0,0},0,5);
    }
    catch (BadCoordinates &e) {
        cout << e.what() << endl;
    }


    CFile  file("tekst.txt");
    Triangle t({0,0},1,1);
    file.write("12345");

    CFile *plik=new CFile();
    *plik="xx.txt";
    plik->write("xxxx");
    delete plik;

    return 0;
}
