#include "IndustrialBuildingCreator.h"
#include "../buildingComposite/industrial/IndustrialBuilding.h"

#include "../buildingComposite/industrial/Factory.h"
#include "../buildingComposite/industrial/Plant.h"
#include "../buildingComposite/industrial/Warehouse.h"

Building* IndustrialBuildingCreator::createBuilding(std::string buildType){
    if(buildType == "Factory")
    {
        return new Factory();
    }
    else if(buildType == "Plant")
    {
        return new Plant();
    }
    else
    {
        return new Warehouse();
    }
}