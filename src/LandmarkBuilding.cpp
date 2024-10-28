#include "LandmarkBuilding.h"
#include "UnderConstructionState.h"

LandmarkBuilding::LandmarkBuilding(){
    this->powerConsumption = 50;
    this->waterConsumption = 50;
    this->wasteProduction = 200;
    this->sewageProduction = 200;
    this->buildingCapacity = 500;
    this->buildingType = "Landmark";
    this->buildingState = new UnderConstructionState();
}