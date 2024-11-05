#include "Ferry.h"

Ferry::Ferry(string name, float& budget) {
    this->name = name;
    this->cost = 1000;
    this->capacity = 500;
    this->type = TransportType::PublicTransport;

    if (cost <= budget) {
        budget -= cost;
    }
    else {
        throw std::runtime_error("This ferry is out of your budget ;)");
    }
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

float Ferry::getCost() {
    return this->cost;
}

Ferry::~Ferry() {
    cout << this->name << " Ferry destroyed." << endl; 
}