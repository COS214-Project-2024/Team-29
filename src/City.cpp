#include "City.h"
#include "Satisfaction/Neutral.h"

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
    delete this->satisfaction;
    this->satisfaction = s;
}

City::~City(){
    // delete other class variables here
    delete cityInstance;
}