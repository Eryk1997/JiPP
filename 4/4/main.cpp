#include <iostream>
#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "polygon.h"
#include "badcoordinates.h"
#include "cfile.h"
#include <vector>

using namespace std;


template <typename T>
T max(vector <T> tablica)
{
    T max=tablica[0];
    T index=0;
    for(int i=0;i<tablica.size();i++)
        if(tablica[i]>max){
            max=tablica[i];
            index=i;
        }
            return  index;
}

template <typename T>
T max(T a,T b)
{
    return (a>b)?a:b;
}

template <typename T>
T *max(T *a,T *b)
{
    return ((*a)>(*b))?a:b;
}

//template<ty>
string max(string a,string b)
{
    return a.compare(b)>0?a:b;
}


int main()
{

               Point<2> obiekt2D(2,5);

               Triangle trojkat(obiekt2D,5,7);
               Triangle tr({2,3},20,30);
               trojkat.setHeight(15);
               trojkat.setWidth(10);
               Triangle trojkat2(obiekt2D,15,20);

               Circle c(obiekt2D,20);

               Rectangle p(obiekt2D,5,10);

               Square s(obiekt2D,5);


               cout <<"X=" << obiekt2D.getValue(0) <<" y=" << obiekt2D.getValue(1) << " wysokość= " << trojkat.getHeight() << "  szerokość=" << trojkat.getWidth() << endl;
              // trojkat.display();


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

               vector<int> tablica={2,4,6,7};
                   cout << "Index=" << max(tablica) << endl;

                   vector<double> tablicaDouble={2.4,5.2,5.6,3.4};
                   cout << "Index max=" << max(tablicaDouble) << endl;


      Point<4> obiekt1_4D(0,0,0,0);
      Point<4> obiekt2_4D(10,10,10,10);

      cout << "Dystans= " << obiekt1_4D.distance(obiekt2_4D) << endl;

      string tekst1="erykk";
      string tekst2="eryyk";

      char *teks1="tekst";
      char *teks2="takst";
      cout << max(tekst1,tekst2) << endl;
      cout << max(teks1,teks2) << endl;



    return 0;
}
