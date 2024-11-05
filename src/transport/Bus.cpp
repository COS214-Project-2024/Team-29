#include "Bus.h"

Bus::Bus(string name, float& budget){
    this->name = name;
    this->cost = 1000;
    this->capacity = 50;
    this->type = TransportType::PublicTransport;

    if (cost <= budget) {
        budget -= cost;
    }
    else {
        throw std::runtime_error("This bus is out of your budget ;)");
    }
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

float Bus::getCost() {
    return this->cost;
}

Bus::~Bus() {
    cout << this->name << " Bus destroyed." << endl; 
}