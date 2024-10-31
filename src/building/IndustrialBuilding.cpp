#include "IndustrialBuilding.h"
#include "UnderConstructionState.h"

IndustrialBuilding::IndustrialBuilding(){
    this->powerConsumption = 500;
    this->waterConsumption = 500;
    this->wasteProduction = 300;
    this->sewageProduction = 200;
    this->buildingCapacity = 2000;
    this->buildingType = "Industrial";
    this->buildingState = new UnderConstructionState();
}

void IndustrialBuilding::acceptVisitor(Visitor * visitor){
    visitor->visitFactory(this);
}