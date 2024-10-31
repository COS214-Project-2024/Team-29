#include "CommercialBuilding.h"
#include "UnderConstructionState.h"

CommercialBuilding::CommercialBuilding(){
    this->powerConsumption = 100;
    this->waterConsumption = 100;
    this->wasteProduction = 200;
    this->sewageProduction = 500;
    this->buildingCapacity = 1000;
    this->buildingType = "Commercial";
    this->buildingState = new UnderConstructionState();
}

void CommercialBuilding::acceptVisitor(Visitor * visitor){
    visitor->visitMall(this);
}