#include "City.h"

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
}

City::~City(){
    // delete other class variables here
    delete cityInstance;
}