#include "City.h"
#include "../satisfaction/Neutral.h"

City* City::cityInstance = 0;

City* City::instance(){
    if (cityInstance==0){
        cityInstance = new City();
    }
    return cityInstance;
}

City::City(){
    // instantiate class variables here
    // Buildings, transport, utilities, satisfaction
    this->satisfaction = new Neutral();
}

void City::setSatisfactionState(SatisfactionState* s){
    if(this->satisfaction != nullptr)
        delete this->satisfaction;
        
    this->satisfaction = s;
}

void City::addTransport(ModeOfTransport *transport)
{
    this->modesOfTransport.push_back(transport);
}

City::~City(){
    // delete other class variables here

    for (ModeOfTransport* transport : modesOfTransport)
        delete transport;
    modesOfTransport.clear(); 


    delete cityInstance;
}