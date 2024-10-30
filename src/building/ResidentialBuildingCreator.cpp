#include "ResidentialBuildingCreator.h"
#include "Building.h"
#include "ResidentialBuilding.h"

Building* ResidentialBuildingCreator::createBuilding(){
    return new ResidentialBuilding();
}