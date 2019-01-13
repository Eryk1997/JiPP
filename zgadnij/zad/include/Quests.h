#ifndef QUESTS_H
#define QUESTS_H
#include <vector>
#include "util.h"

template <typename T>
class Quests
{
private:
    std::vector<T> containers;

public:
    typedef typename std::vector<T>::iterator iterator;

    Quests(){
    }

    Quests(T value){
        if(value < 0)
            throw std::bad_alloc();
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

    typename std::vector<T>::iterator begin()
    {
        typename std::vector<T>::iterator xx = containers.begin();
        return xx;
    }

    Quests &operator ()(const Quests &od)
    {
        this->containers = od.containers;
        this->iterator = od.iterator;
    }

    typename std::vector<T>::iterator end()
    {
        typename std::vector<T>::iterator xx = containers.end();
        return xx;
    }








};

#endif // QUESTS_H
