#ifndef EFEKT6_H
#define EFEKT6_H
#include "efekty.h"

class Efekt6: public Efekty{
private:
    int tab_pom[16][16];
    bool sprawdz;
public:
    Efekt6();
     void apply(int,int,int,int,int tablica[16][16]);
};
#endif // EFEKT6_H
