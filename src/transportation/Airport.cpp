#include "Airport.h"

Airport::Airport(string name)
{
    this->name = name;
    this->cost = 10_000_000;
    this->capacity = 1_000_000;
    this->type = TransportType::GeneralTransport;

    float budget = 100000; //somehow get the avaliable budget

    if(cost < budget) {
        cout << this->name << " Airport bought." << endl; 
        // decrease budget by cost
    }
    else if(cost == budget) {
        cout << this->name << " Airport bought, but you just blew your remaining budget on an Airport." << endl;
        // decrease budget by cost
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