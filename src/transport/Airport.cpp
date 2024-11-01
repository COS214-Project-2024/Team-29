#include "Airport.h"

Airport::Airport(string name, float& budget)
{
    this->name = name;
    this->cost = 10000000;
    this->capacity = 1000000;
    this->type = TransportType::GeneralTransport;

    if(cost < budget) {
        cout << this->name << " Airport bought." << endl; 
        budget -= cost;
    }
    else if(cost == budget) {
        cout << this->name << " Airport bought, but you just blew your remaining budget on an Airport." << endl;
        budget -= cost;
    }
    else {
        throw runtime_error("The city does not have enough money for an Airport.");
    }

    this->publicTransportCapacity += capacity/2;
    this->goodsTransportCapacity += capacity/2;

}

Airport::~Airport()
{
    cout << this->name << " Airport destroyed." << endl; 
    this->publicTransportCapacity -= capacity/2;
    this->goodsTransportCapacity -= capacity/2;
}

string Airport::getTransportType() {
    return "GeneralTransport";
}

string Airport::getName() {
    return name;
}

string Airport::getType() {
    return "Airport";
}