#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <exception>

class BadCoordinates: public std::exception
{
public:

    const char* what() const throw();   //ta metoda moze wyrzucic wyjatek
};


#endif //EXCEPTION_H
