#include "Building.h"

Building::Building( std::string type, std::string name, int cap ) : buildingType(type), buildingName(name), capacity(cap) {};

void Building::addBuilding( BuildingComponent* bc ) {};

void Building::demolishBuilding( BuildingComponent* bc ) {};

int Building::getCapacity() 
{ 
    return capacity; 
};

std::string Building::getBuildingType() 
{ 
    return buildingType; 
};

std::string Building::getBuildingName() 
{ 
    return buildingName; 
};

Building::~Building() {};