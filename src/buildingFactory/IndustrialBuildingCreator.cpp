#include "IndustrialBuildingCreator.h"
#include "../buildingComposite/industrial/IndustrialBuilding.h"

#include "../buildingComposite/industrial/Factory.h"
#include "../buildingComposite/industrial/Plant.h"
#include "../buildingComposite/industrial/Warehouse.h"

// Input: type (int)
//  1 - Factory
//  2 - Warehouse
//  3 - Plant
Building* IndustrialBuildingCreator::createBuilding(int type){
    switch (type)
    {
        case 1:
            return new Factory();
        break;
        case 2:
            return new Warehouse();
        break;
        case 3:
            return new Plant();
        break;
        default:
            return nullptr;
    }
}