#ifndef UTIL
#define UTIL
#include <random>

template <typename T>
T generateQuest(){
    std::random_device rd;
    std::default_random_engine gen(rd());
    T min=std::numeric_limits<T>::min();
    T max=std::numeric_limits<T>::max();
    std::uniform_int_distribution<T> distribution(min,max);
    return distribution(gen);
}

template <typename T>
T generateQuest(T min,T max){
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_int_distribution<T> distribution(min,max);
    return distribution(gen);
}

template <>
inline float generateQuest<float>(float min,float max)
{
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<float> distribution(min,max);
    return distribution(gen);
}

template <>
inline double generateQuest<double>(double min,double max)
{
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<double> distribution(min,max);
    return distribution(gen);
}

template <>
inline long double generateQuest<long double>(long double min,long double max)
{
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<long double> distribution(min,max);
    return distribution(gen);
}

template <>
inline float generateQuest<float>()
{
    float min=std::numeric_limits<float>::min();
    float max=std::numeric_limits<float>::max();
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<float> distribution(min,max);
    return distribution(gen);
}

template <>
inline double generateQuest<double>()
{
    double min=std::numeric_limits<double>::min();
    double max=std::numeric_limits<double>::max();
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<double> distribution(min,max);
    return distribution(gen);
}

template <>
inline long double generateQuest<long double>()
{
    long double min=std::numeric_limits<long double>::min();
    long double max=std::numeric_limits<long double>::max();
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_real_distribution<long double> distribution(min,max);
    return distribution(gen);
}




#endif // UTIL

