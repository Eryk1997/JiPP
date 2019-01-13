#ifndef UTIL
#define UTIL
#include <random>
#include <limits>
#include <iterator>
template <typename T>
T generateQuest(){
    std::random_device rd;
    std::default_random_engine gen(rd());
    T min=std::numeric_limits<T>::min();
    T max=std::numeric_limits<T>::max();
    std::uniform_int_distribution<T> distribution(min,max);
    return distribution(gen);
}

template <>
float generateQuest<float>()
{
    float min=std::numeric_limits<float>::min();
    float max=std::numeric_limits<float>::max();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> distribution(min,max);
    return distribution(gen);
}

template <>
double generateQuest<double>()
{
    double min=std::numeric_limits<double>::min();
    double max=std::numeric_limits<double>::max();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distribution(min,max);
    return distribution(gen);
}

template <>
long double generateQuest<long double>()
{
    long double min=std::numeric_limits<long double>::min();
    long double max=std::numeric_limits<long double>::max();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<long double> distribution(min,max);
    return distribution(gen);
}






#endif // UTIL

