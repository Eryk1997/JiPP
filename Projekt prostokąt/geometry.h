#ifndef GEOMETRY_H
#define GEOMETRY_H


class geometry
{

        double x;
        double y;
        double width;
        double height;

public:
    void check(geometry s1,geometry s2);
    void calculate (geometry s1,geometry s2,geometry *s3);
    void set(double,double,double,double);
    geometry(double,double,double,double);
    double getX();
    double getY();
    double getWidth();
    double getHeight();
    geometry();
    ~geometry();
};

#endif // GEOMETRY_H
