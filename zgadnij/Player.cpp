#include "Player.h"

int Player::ilosc=0;

Player::Player()
{
    ilosc++;
    id=ilosc;
    typeFeedback=2;
    xx=0;
}

int Player::GetID()
{
    return id;
}

void Player::setTypeFeedback(int wartosc)
{
    this->typeFeedback = wartosc;
}

int Player::getTypeFeedback()
{
    return typeFeedback;
}


Player::~Player()
{
    ilosc--;
    id=ilosc;
}


