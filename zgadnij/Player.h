#ifndef PLAYER_H
#define PLAYER_H
#include <random>
#include "util.h"
#include "Quests.h"
#include <iostream>

class Player
{
private:
    static int ilosc;
    int id;
    int typeFeedback;

public:
    Player();
    int GetID();
    void setTypeFeedback(int);
    int getTypeFeedback();
    int xx;

    template <typename T>
    T guess()
    {
        static T minimum;
        static T maximum;
        static T answer;

        if(xx==0)
        {
            minimum=std::numeric_limits<T>::min();
            maximum=std::numeric_limits<T>::max();
            xx++;
        }

                switch(getTypeFeedback())
                {
                case -1:
                    minimum = answer;
                    answer = generateQuest<T>(minimum,maximum);
                    break;
                case 1:
                    maximum = answer;
                    answer = generateQuest<T>(minimum,maximum);
                    break;
                case 2:
                    answer = generateQuest<T>();
                    xx=0;
                    break;
                }

    return answer;
    }


    template <typename T>
    void feedback(T x)
    {

        switch(x)
               {
               case -1:
                   setTypeFeedback(-1);
                   break;
               case 1:
                   setTypeFeedback(1);
                   break;
               case 2:
                   setTypeFeedback(2);
                   break;
               default:
                   setTypeFeedback(2);
                   break;
               }
    }



    ~Player();
};

#endif // PLAYER_H
