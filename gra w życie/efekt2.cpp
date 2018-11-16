#include "efekt2.h"

void Efekt2::apply(int x,int y,int dx,int dy,int tablica[16][16]){
    for(int i=x;i<=dx;i++){
        for(int j=y;j<=dy;j++)
            if(tablica[i][j]==0)
                tablica[i][j]=1;
            else
                tablica[i][j]=0;
    }
}
