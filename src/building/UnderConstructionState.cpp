#include "UnderConstructionState.h"
#include "OperationalState.h"

UnderConstructionState::UnderConstructionState(){
    this->name = "Construction";
    this->capacityMultiplier = 0;
    this->consumptionMultiplier = 0.5;
    this->productionMultiplier = 0;
    this->wasteMultiplier = 2;
}

std::string UnderConstructionState::getBuildingState(){
    return this->name;
}

void UnderConstructionState::handleStateChange(Building* b){
    b->setBuildingState(new OperationalState());
}