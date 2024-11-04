#include "Bus.h"

Bus::Bus(string name, float& budget)
{
    this->name = name;
    this->cost = 100000;
    this->capacity = 5000;
    this->type = TransportType::PublicTransport;

    if(cost < budget) {
        cout << this->name << " Bus bought." << endl; 
        budget -= cost;
    }
    else if(cost == budget) {
        cout << this->name << " Bus bought, but you just blew your remaining budget on a bus." << endl;
        budget -= cost;
    }
    else {
        throw runtime_error("The city does not have enough money for a bus.");
    }

}

Bus::~Bus()
{
    cout << this->name << " Bus destroyed." << endl; 
}

string Bus::getTransportType() {
    return "PublicTransport";
}

string Bus::getName() {
    return name;
}

string Bus::getType() {
    return "Bus";
}
