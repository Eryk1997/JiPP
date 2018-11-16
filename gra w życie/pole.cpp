#include "pole.h"
#include <iostream>
using namespace std;

Pole::Pole(){
    int zero=0;
    for(int i=0;i<16;i++)
        for(int j=0;j<16;j++)
            tablica[i][j]=zero;

}

void Pole::wyswietl(){
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            cout << tablica[i][j];
        }
    cout << endl;
    }

}

void Pole::apply(int x,int y,int dx,int dy,Efekty &efekt){
    efekt.apply(x,y,dx,dy,tablica);
}


