#include <iostream>
#include "square.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "exception.h"
#include "cfile.h"
#include <vector>
template <typename T>
int max(std::vector<T> vec){

}

using namespace std;

int main()
{
    //const char *sciezka="plik.txt"
    //CFile plik(sciezka);
    CFile plik("plik.txt");
    plik.write("Krystian Mielec xxxDx");
//    Triangle(Point2D(0.0,0.0),0,0);

/*
    try
    {
        throw 10;
    }
    catch(int a)
    {
        cout<<a<<endl;
    }
*/










    BadCoordinates ex;
    try
    {
        //throw ex;
        Triangle(Point2D(0.0,0.0),5,10);
    }
    catch(BadCoordinates &e)
    {
        cout<<e.what()<<endl;
    }




    return 0;

}
