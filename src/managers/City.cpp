#include "City.h"
#include "satisfaction/Neutral.h"

City::City(){
    // instantiate class variables here
    // Buildings, transport, utilities, satisfaction
    this->satisfaction = new Neutral();
}

void City::setSatisfactionState(SatisfactionState* s){
    delete this->satisfaction;
    this->satisfaction = s;
}

void City::addTransport(ModeOfTransport *transport)
{
    this->modesOfTransport.push_back(transport);
}

City::~City(){
    // delete other class variables here
    delete satisfaction;

    for (ModeOfTransport* transport : modesOfTransport)
        delete transport;
    modesOfTransport.clear(); 

}