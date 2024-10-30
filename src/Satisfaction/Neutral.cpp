#include "Neutral.h"
#include "Satisfied.h"
#include "Unsatisfied.h"

Neutral::Neutral(){
    this->state = "Neutral";
}

std::string Neutral::getSatisfactionLevel(){
    return this->state;
}

void Neutral::incSatisfactionState(City* c){
    c->setSatisfactionState(new Satisfied());
}

void Neutral::decSatisfactionState(City* c){
    c->setSatisfactionState(new Unsatisfied());
}