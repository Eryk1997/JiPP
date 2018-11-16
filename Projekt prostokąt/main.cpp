#include <iostream>
#include "geometry.h"
#include <string>

using namespace std;

int main()
{
    double x,y,width,height;
    geometry s1;
    geometry s2;
    geometry s3(0,0,0,0);

    cin >> x>>y>>width>>height;
    s1.set(x,y,width,height);

    cin >> x>>y>>width>>height;
    s2.set(x,y,width,height);

    s3.check(s1,s2);                      //sprawdzenie czy prostokaty się zawierają w sobie
    s3.calculate (s1,s2,&s3);               //wyliczenie x y szerokość oraz wysokość prostokąta należącego



    cout << s3.getX() <<" " << s3.getY() << " " << s3.getWidth() << " " << s3.getHeight() << endl;


    return 0;
}
