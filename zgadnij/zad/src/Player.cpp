#include "Player.h"
Player::Player()
{
    id++;
}

int Player::GetID()
{
    return id;
}

Player::~Player()
{
    id--;
}


