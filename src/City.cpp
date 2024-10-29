#include "City.h"
#include "Satisfaction/Neutral.h"

City::City(){
    this->satisfaction = new Neutral();
}

void City::setSatisfactionState(SatisfactionState* s){
    delete this->satisfaction;
    this->satisfaction = s;
}