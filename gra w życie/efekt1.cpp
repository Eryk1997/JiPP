#include "efekt1.h"

void Efekt1::apply(int x,int y,int dx,int dy,int tablica[16][16]){
    for(int i=x;i<=dx;i++)
        for(int j=y;j<=dy;j++)
            tablica[i][j]=1;
}
