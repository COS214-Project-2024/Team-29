#include "ResidentialBuilding.h"
#include "UnderConstructionState.h"

ResidentialBuilding::ResidentialBuilding(){
    this->powerConsumption = 50;
    this->waterConsumption = 50;
    this->wasteProduction = 50;
    this->sewageProduction = 50;
    this->buildingCapacity = 5;
    this->buildingType = "Residential";
    this->buildingState = new UnderConstructionState();
}

void ResidentialBuilding::acceptVisitor(Visitor * visitor){
    visitor->visitHouse(this);
}