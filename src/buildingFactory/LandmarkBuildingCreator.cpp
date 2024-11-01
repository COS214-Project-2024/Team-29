#include "LandmarkBuildingCreator.h"
#include "Building.h"
#include "LandmarkBuilding.h"

Building* LandmarkBuildingCreator::createBuilding(){
    return new LandmarkBuilding();
}