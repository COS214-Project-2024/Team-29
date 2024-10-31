#include "Building.h"

Building::Building( std::string type, std::string name, int cap ) : buildingType(type), buildingName(name), buildingCapacity(cap) {}

void Building::addBuilding( BuildingComponent* bc ) {}

void Building::demolishBuilding( BuildingComponent* bc ) {}

int Building::getCapacity() { return this->buildingCapacity; }

std::string Building::getBuildingType() { return this->buildingType; }

std::string Building::getBuildingName() { return this->buildingName; }

void Building::setBuildingState(BuildingState* s) { 
    if(this->buildingState != nullptr)
        delete this->buildingState; 

    this->buildingState = s; 
}

Building::~Building() {}