#include "Ferry.h"

Ferry::Ferry(string name, float& budget)
{
    this->name = name;
    this->cost = 1000000;
    this->capacity = 500000;
    this->type = TransportType::PublicTransport;

    if(cost < budget) {
        cout << this->name << " Ferry constructed." << endl; 
        budget -= cost;
    }
    else if(cost == budget) {
        cout << this->name << " Ferry constructed, but you just blew your remaining budget on a ferry." << endl;
        budget -= cost;
    }
    else {
        throw runtime_error("The city does not have enough money for a ferry.");
    }

    this->publicTransportCapacity += capacity;

}

Ferry::~Ferry()
{
    cout << this->name << " Ferry destroyed." << endl; 
    this->publicTransportCapacity -= capacity;
}

string Ferry::getTransportType() {
    return "PublicTransport";
}

string Ferry::getName() {
    return name;
}

string Ferry::getType() {
    return "Ferry";
}


