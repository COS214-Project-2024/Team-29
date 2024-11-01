#include "Neutral.h"
#include "Satisfied.h"
#include "Unsatisfied.h"

#include "../managers/City.h"

Neutral::Neutral() { this->state = "Neutral"; }

std::string Neutral::getSatisfactionLevel() { return this->state; }

void Neutral::incSatisfactionState(City* c) { 
    if(c != nullptr) {
        c->setSatisfactionState(new Satisfied()); 
    } 
}

void Neutral::decSatisfactionState(City* c) { 

    if(c != nullptr) {
        c->setSatisfactionState(new Unsatisfied()); 
    }
}