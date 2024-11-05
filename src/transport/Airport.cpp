#include "Airport.h"

Airport::Airport(string name, float& budget) {
    this->name = name;
    this->cost = 1000;
    this->capacity = 100;
    this->type = TransportType::GeneralTransport;

    if(cost <= budget) {
        budget -= cost;
    }
    else {
        throw std::runtime_error("This airport is out of your budget ;)");
    }
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

float Airport::getCost() {
    return this->cost;
}

Airport::~Airport() {
    cout << this->name << " Airport destroyed." << endl; 
}