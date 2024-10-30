#include "Ferry.h"

Ferry::Ferry(string name)
{
    this->name = name;
    this->cost = 1_000_000;
    this->capacity = 500_000;
    this->type = TransportType::PublicTransport;

    float budget = 1000000; //somehow get the avaliable budget

    if(cost < budget) {
        cout << this->name << " Ferry constructed." << endl; 
        // decrease budget by cost
    }
    else if(cost == budget) {
        cout << this->name << " Ferry constructed, but you just blew your remaining budget on a ferry." << endl;
        // decreate budget by cost
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


