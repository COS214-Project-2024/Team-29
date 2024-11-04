#include "VerySatisfied.h"
#include "Satisfied.h"
#include "Neutral.h"

#include "../managers/City.h"

Satisfied::Satisfied(){
    this->state = "Satisfied";
}

std::string Satisfied::getSatisfactionLevel(){
    return this->state;
}

void Satisfied::incSatisfactionState(City* c){
    c->setSatisfactionState(new VerySatisfied());
}

void Satisfied::decSatisfactionState(City* c){
    c->setSatisfactionState(new Neutral());
}

SatisfactionState* Satisfied::clone(){
    return new Satisfied();
}