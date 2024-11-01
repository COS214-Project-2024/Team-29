#include "CommercialBuildingCreator.h"
#include "Building.h"
#include "CommercialBuilding.h"

Building* CommercialBuildingCreator::createBuilding(){
    return new CommercialBuilding();
}
