#include "IndustrialBuildingCreator.h"
#include "Building.h"
#include "IndustrialBuilding.h"

Building* IndustrialBuildingCreator::createBuilding(){
    return new IndustrialBuilding();
}