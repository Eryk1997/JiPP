#ifndef POINT_H
#define POINT_H
#include <cstdarg>
#include <math.h>

template <int N>
class Point
{
private:
    double board[N];
public:
    Point()
    {
        for(int i=0;i<N;i++)
            board[i]=0;
    }
    Point(double number,...)
    {
        va_list arguments;
            board[0]=number;
            va_start( arguments, number );
            for( int i = 1; i < N; i++ )
            {
                board[i]=va_arg(arguments,int);
            }
         va_end( arguments );
    }
    double getValue(int i)
    {
        return board[i];

    }
    void setValue(int i,double value)
    {
        this->board[i]=value;
    }

    double distance(Point<4> &element2)
    {
        double distance=0;
        double value1=0;
        double value2=0;
        double power=0;
        for(int i=0;i<N;i++)
        {
            value1=board[i];
            value2=element2.board[i];
            power=pow(value1-value2,2);
            distance+=power;
        }
        return sqrt(distance);
    }
};

#endif // POINT_H
