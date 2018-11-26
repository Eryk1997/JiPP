#ifndef BADCOORDINATES_H
#define BADCOORDINATES_H
#include <exception>

class BadCoordinates:public std::exception
{
public:
    virtual const char* what() const throw()=0;
};

#endif // BADCOORDINATES_H
