#include "efekt5.h"

Efekt5::Efekt5(){
    this->sprawdz=false;
}

void Efekt5::apply(int x,int y,int dx,int dy,int tablica[16][16]){
    int i;
    int j;
    if(sprawdz==false){
        for(i=0;i<16;i++){
            for(j=0;j<16;j++)
                tab_pom[i][j]=tablica[i][j];
        }
        sprawdz=true;
    }
    else{
        for(i=x;i<=dx;i++){
            for(j=y;j<=dy;j++){
                   if(tab_pom[i][j]==0 && tablica[i][j]==1)
                         tablica[i][j]=1;
                    else if(tab_pom[i][j]==1 && tablica[i][j]==0)
                         tablica[i][j]=1;
                    else if(tab_pom[i][j]==1 && tablica[i][j]==1)
                         tablica[i][j]=0;
                    else if(tab_pom[i][j]==0 && tablica[i][j]==0)
                         tablica[i][j]=0;
            }
        }
     sprawdz=false;
    }
}
