#include "Neutral.h"
#include "Unsatisfied.h"
#include "VeryUnsatisfied.h"

#include "../managers/City.h"

Unsatisfied::Unsatisfied(){
    this->state = "Unsatisfied";
}

std::string Unsatisfied::getSatisfactionLevel(){
    return this->state;
}

void Unsatisfied::incSatisfactionState(City* c){
    c->setSatisfactionState(new Neutral());
}

void Unsatisfied::decSatisfactionState(City* c){
    c->setSatisfactionState(new VeryUnsatisfied());
}