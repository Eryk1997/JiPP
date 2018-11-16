#ifndef POLE_H
#define POLE_H
#include "efekty.h"

class Pole{
protected:
    int tablica[16][16];

public:
    Pole();
    virtual void apply(int,int,int,int,Efekty&);
    void wyswietl();
};

#endif // POLE_H
