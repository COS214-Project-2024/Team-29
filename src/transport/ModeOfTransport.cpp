#include "ModeOfTransport.h"

string ModeOfTransport::toString()
{
    stringstream os;

    os << this->getType() << " : " << this->getTransportType() 
        << ", Name: " << this->getName() 
        << ", Capacity " << this->getCapacity();

    return os.str();
}

int ModeOfTransport::getCapacity()
{
    return this->capacity;
}
