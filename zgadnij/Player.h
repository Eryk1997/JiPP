#ifndef PLAYER_H
#define PLAYER_H
#include "Quests.h"

class Player
{
private:
    int id=0;
public:
    Player();
    int GetID();

    ~Player();
};

#endif // PLAYER_H
