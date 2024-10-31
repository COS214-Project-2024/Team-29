#include "Interface.h"

Interface::Interface(){
    this->gov = new Government();
}

Interface::~Interface(){
    delete this->gov;
}

// creates a new building depending on the user's choice
// uses the construct command from Government
// assumes there is a construct method for each building type
void Interface::build(){
    // choice: 1 - Residential
    //         2 - Commercial
    //         3 - Industrial
    //         4 - Landmark
    gov->getConstruct()->execute();
}

// assumes there is a generate policy method that randomly generates either a positive or negative policy
void Interface::policy(){
    gov->getPolicies()->execute();
}

// assumes there is a adjust tax method that changes the tax rate according to user input
/* void Interface::taxes(double change){
    gov->getResources().adjustTaxes(change);
} */