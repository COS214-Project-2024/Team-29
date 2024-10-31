#include "OperationalState.h"

OperationalState::OperationalState(){
    this->name = "Construction";
    this->capacityMultiplier = 0;
    this->consumptionMultiplier = 0.5;
    this->productionMultiplier = 0;
    this->wasteMultiplier = 2;
}

std::string OperationalState::getBuildingState(){
    return this->name;
}

void OperationalState::handleStateChange(Building* b){
    b->setBuildingState(new OperationalState());
}