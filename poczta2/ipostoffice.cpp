#include "ipostoffice.h"
#include <memory>
#include "postoffice.h"

std::shared_ptr<IPostOffice> IPostOffice::create(unsigned gate_count){
    std::shared_ptr<IPostOffice> ptrr(new PostOffice(gate_count));
    return ptrr;
}
