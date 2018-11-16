#include <iostream>
#include "square.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "exception.h"
#include "cfile.h"
using namespace std;

int main()
{
//    CFile plik("plik.txt");
//    Triangle(Point2D(0.0,0.0),0,0);


    try
    {
        throw 10;
    }
    catch(int a)
    {
        cout<<a<<endl;
    }











    //BadCoordinates ex;
//    try
//    {
//        //throw ex;
//        Triangle(Point2D(0.0,0.0),0,0);
//    }
//    catch(BadCoordinates &e)
//    {
//        cout<<e.what()<<endl;
//    }




    return 0;

}
