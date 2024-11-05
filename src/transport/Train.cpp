#include "Train.h"

Train::Train(string name, float& budget) {
    this->name = name;
    this->cost = 5000;
    this->capacity = 100;
    this->type = TransportType::GoodsTransport;

    if (cost <= budget) {
        budget -= cost;
    }
    else {
        throw std::runtime_error("This train is out of your budget ;)");
    }
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

float Train::getCost() {
    return this->cost;
}

Train::~Train() {
    cout << this->name << " Train destroyed." << endl; 
}