#include "Bus.h"

Bus::Bus(string name)
{
    this->name = name;
    this->cost = 100000;
    this->capacity = 5000;
    this->type = TransportType::PublicTransport;

    float budget = 100000; //somehow get the avaliable budget

    if(cost < budget) {
        cout << this->name << " Bus bought." << endl; 
        // decrease budget by cost
    }
    else if(cost == budget) {
        cout << this->name << " Bus bought, but you just blew your remaining budget on a bus." << endl;
        // decrease budget by cost
    }
    else {
        throw runtime_error("The city does not have enough money for a bus.");
    }

    this->publicTransportCapacity += capacity;

}

Bus::~Bus()
{
    cout << this->name << " Bus destroyed." << endl; 
    this->publicTransportCapacity -= capacity;
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