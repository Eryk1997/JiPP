#ifndef POINT_H
#define POINT_H


class Point
{
private:
    double x;
    double y;
public:
    Point();
    Point(double,double);
    double getX();
    double getY();
    void setX(double);
    void setY(double);
};

#endif // POINT_H
