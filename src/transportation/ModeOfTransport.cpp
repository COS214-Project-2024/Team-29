#include "ModeOfTransport.h"

string ModeOfTransport::toString()
{
    stringstream os;

    os << this->getType() << " : " << this->getTransportType() 
        << ", Name: " << this->getName() 
        << ", Capacity " << this->getCapacity();

    return os;
}

int ModeOfTransport::getCapacity()
{
    return this->capacity;
}

int ModeOfTransport::getPublicTransportCapacity()
{
    return this->publicTransportCapacity;
}

int ModeOfTransport::getGoodsTransportCapacity()
{
    return this->goodsTransportCapacity;
}
