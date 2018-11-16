#include "exception.h"
const char* BadCoordinates::what() const throw()
{
    return "blednie podane wspolrzedne";
}
