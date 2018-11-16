#include <iostream>
#include "pole.h"
#include "efekty.h"
#include "efekt0.h"
#include "efekt1.h"
#include "efekt2.h"
#include "efekt3.h"
#include "efekt4.h"
#include "efekt5.h"
#include "efekt6.h"

using namespace std;

int main()
{

    Pole **plansza=new Pole*[2];
    Efekty **efekt=new Efekty*[7];

    int x=0;
    int y=0;
    int dx=0;
    int dy=0;
    int d=0;
    int e=0;

    Efekt0 ef0;
    Efekt1 ef1;
    Efekt2 ef2;
    Efekt3 ef3;
    Efekt4 ef4;
    Efekt5 ef5;
    Efekt6 ef6;

    efekt[0]= &ef0;
    efekt[1]= &ef1;
    efekt[2]= &ef2;
    efekt[3]= &ef3;
    efekt[4]= &ef4;
    efekt[5]= &ef5;
    efekt[6]= &ef6;

    Pole plansza0;
    Pole plansza1;
    plansza[0]=&plansza0;
    plansza[1]=&plansza1;


    while (!cin.eof()){
        while(cin>>x>>y>>dx>>dy>>e>>d)
            if((x>=0 && x<=15) && (dx>=0 && dx<=15) && (x<=dx) && (y>=0 && y<=15) && (dy>=0 && dy<=15) && (y<=dy) && (e>=0 && e<=6) && (d==0 || d==1))
                plansza[d]->apply(x,y,dx,dy,*efekt[e]);
    }
    plansza[d]->wyswietl();

    return 0;
}
