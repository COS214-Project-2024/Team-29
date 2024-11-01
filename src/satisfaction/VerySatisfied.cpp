#include "VerySatisfied.h"
#include "Satisfied.h"

#include "../managers/City.h"

VerySatisfied::VerySatisfied(){
    this->state = "Very Satisfied";
}

std::string VerySatisfied::getSatisfactionLevel(){
    return this->state;
}

void VerySatisfied::incSatisfactionState(City* c){
    c->setSatisfactionState(new VerySatisfied());
}

void VerySatisfied::decSatisfactionState(City* c){
    c->setSatisfactionState(new Satisfied());
}