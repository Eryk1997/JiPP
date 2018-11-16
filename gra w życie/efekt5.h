#ifndef EFEKT5_H
#define EFEKT5_H
#include "efekty.h"

class Efekt5: public Efekty{
private:
    int tab_pom[16][16];
    bool sprawdz;
public:
    Efekt5();
     void apply(int,int,int,int,int tablica[16][16]);
};

#endif // EFEKT5_H
