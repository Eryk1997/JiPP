#include "efekt4.h"

void Efekt4::apply(int x,int y,int dx,int dy,int tablica[16][16]){
    int i;
    int  j;
    int suma=0;

    int tab_pom[16][16];

        for(i=0;i<16;i++){
            for(j=0;j<16;j++){
                tab_pom[i][j]=tablica[i][j];
            }
        }

        for(i=x;i<=dx;i++){
            for(j=y;j<=dy;j++){
                if(tab_pom[i][j]==0){
                    suma=0;
                    //srodek srodek
                    if(i>0 && i<15 && j>0 && j<15){
                    if(tab_pom[i-1][j-1]==1) suma++;
                    if(tab_pom[i-1][j]==1) suma++;
                    if(tab_pom[i-1][j+1]==1) suma++;

                    if(tab_pom[i][j-1]==1) suma++;
                    if(tab_pom[i][j+1]==1)  suma++;

                    if(tab_pom[i+1][j-1]==1) suma++;
                    if(tab_pom[i+1][j]==1) suma++;
                    if(tab_pom[i+1][j+1]==1)suma++;
                    }

                    //gora srodek
                   else if(i==0 && j>0 && j<15){
                        if(tab_pom[15][j-1]==1) suma++;
                        if(tab_pom[15][j]==1) suma++;
                        if(tab_pom[15][j+1]==1) suma++;

                        if(tab_pom[i][j-1]==1) suma++;
                        if(tab_pom[i][j+1]==1)suma++;

                        if(tab_pom[i+1][j-1]==1)suma++;
                        if(tab_pom[i+1][j]==1)suma++;
                        if(tab_pom[i+1][j+1]==1)suma++;
                    }


                    //dol srodek
                    else if(i==15 && j>0 && j<15){
                        if(tab_pom[0][j-1]==1)suma++;
                        if(tab_pom[0][j]==1)suma++;
                        if(tab_pom[0][j+1]==1)suma++;

                        if(tab_pom[i][j-1]==1) suma++;
                        if(tab_pom[i][j+1]==1)suma++;

                        if(tab_pom[i-1][j-1]==1)suma++;
                        if(tab_pom[i-1][j]==1) suma++;
                        if(tab_pom[i-1][j+1]==1) suma++;
                    }

                    //lewy srodek
                    else if(j==0 && i>0 && i<15){
                        if(tab_pom[i-1][15]==1)suma++;
                        if(tab_pom[i][15]==1) suma++;
                        if(tab_pom[i+1][15]==1)suma++;

                        if(tab_pom[i-1][j]==1) suma++;
                        if(tab_pom[i+1][j]==1) suma++;

                        if(tab_pom[i-1][j+1]==1) suma++;
                        if(tab_pom[i][j+1]==1) suma++;
                        if(tab_pom[i+1][j+1]==1)suma++;
                    }

                    //prawy srodek
                    else if(j==15 && i>0 && i<15){
                        if(tab_pom[i-1][0]==1) suma++;
                        if(tab_pom[i][0]==1) suma++;
                        if(tab_pom[i+1][0]==1) suma++;

                        if(tab_pom[i-1][j]==1) suma++;
                        if(tab_pom[i+1][j]==1) suma++;

                        if(tab_pom[i-1][j-1]==1) suma++;
                        if(tab_pom[i][j-1]==1) suma++;
                        if(tab_pom[i+1][j-1]==1) suma++;
                    }

                    //lewy gorny
                    else if(i==0 && j==0){
                        if(tab_pom[i+1][j]==1) suma++;
                        if(tab_pom[i+1][j+1]==1) suma++;

                        if(tab_pom[i][j+1]==1) suma++;
                        if(tab_pom[i][15]==1)  suma++;
                        if(tab_pom[i+1][15]==1) suma++;


                        if(tab_pom[15][j]==1) suma++;
                        if(tab_pom[15][j+1]==1) suma++;
                        if(tab_pom[15][15]==1)suma++;
                    }

                    //prawa gora
                    else if(i==0 && j==15){
                        if(tab_pom[i][j-1]==1) suma++;
                        if(tab_pom[i][0]==1)suma++;
                        if(tab_pom[i+1][0]==1) suma++;

                        if(tab_pom[15][j]==1)suma++;
                        if(tab_pom[15][j-1]==1)suma++;

                        if(tab_pom[i+1][j-1]==1)  suma++;
                        if(tab_pom[i+1][j]==1) suma++;
                        if(tab_pom[15][0]==1)suma++;
                    }


                    //lewy dolny
                    else if(i==15 && j==0){
                        if(tab_pom[i][j+1]==1)  suma++;
                        if(tab_pom[i][15]==1)suma++;

                        if(tab_pom[i-1][j]==1)  suma++;
                        if(tab_pom[i-1][j+1]==1) suma++;
                        if(tab_pom[i-1][15]==1) suma++;


                        if(tab_pom[0][j]==1) suma++;
                        if(tab_pom[0][j+1]==1) suma++;

                        if(tab_pom[0][15]==1)suma++;
                    }
                    //prawy dolny
                    else if(i==15 && j==15){
                        if(tab_pom[i][j-1]==1) suma++;
                        if(tab_pom[i][0]==1) suma++;

                        if(tab_pom[i-1][0]==1)suma++;
                        if(tab_pom[i-1][j-1]==1)suma++;
                        if(tab_pom[i-1][j]==1)suma++;

                        if(tab_pom[0][j]==1) suma++;
                        if(tab_pom[0][j-1]==1)suma++;

                        if(tab_pom[0][0]==1)suma++;
                    }

                   if( suma==3)
                        tablica[i][j]=1;
            }
                else
                    tablica[i][j]=0;

          }
        }

}

