#include "Train.h"

Train::Train(string name, float& budget)
{
    this->name = name;
    this->cost = 500000;
    this->capacity = 100000;
    this->type = TransportType::GoodsTransport;

    if(cost < budget) {
        cout << this->name << " Train bought." << endl; 
        budget -= cost;
    }
    else if(cost == budget) {
        cout << this->name << " Train bought, but you just blew your remaining budget on a Train." << endl;
        budget -= cost;
    }
    else {
        throw runtime_error("The city does not have enough money for a Train.");
    }

}

Train::~Train()
{
    cout << this->name << " Train destroyed." << endl; 
}

string Train::getTransportType() {
    return "GoodsTransport";
}

string Train::getName() {
    return name;
}

string Train::getType() {
    return "Train";
}
