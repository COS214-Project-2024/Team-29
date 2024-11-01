#include "VeryUnsatisfied.h"
#include "Unsatisfied.h"

#include "../managers/City.h"

VeryUnsatisfied::VeryUnsatisfied(){
    this->state = "Very Unsatisfied";
}

std::string VeryUnsatisfied::getSatisfactionLevel(){
    return this->state;
}

void VeryUnsatisfied::incSatisfactionState(City* c){
    c->setSatisfactionState(new Unsatisfied());
}

void VeryUnsatisfied::decSatisfactionState(City* c){
    c->setSatisfactionState(new VeryUnsatisfied());
}