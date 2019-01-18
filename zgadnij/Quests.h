#ifndef QUESTS_H
#define QUESTS_H
#include <vector>
#include "util.h"
#include <iterator>

class Iterator;

template <typename T>
class Quests
{
private:
    std::vector<T> containers;
    int rozmiar;


public:
    typedef typename std::vector<T>::iterator iterator;

    Quests(int value){
        if(value < 0)
            throw std::bad_alloc();
        this->rozmiar = value;
        containers.reserve(value);

        for(auto x=0;x<value;x++)
        {
            T value = generateQuest<T>();
            containers.push_back(value);
        }


    }



    void newQuestion()
    {
        T value = generateQuest<T>();
        containers.push_back(value);
    }

    int size()
    {
       return containers.size();
    }

    T &operator [](const int i){
        return containers.at(i);
    }



    iterator begin()
    {
        return containers.begin();
    }

    iterator end()
    {
        return containers.end();
    }








};

#endif // QUESTS_H
