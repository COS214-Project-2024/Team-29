#include "IndustrialBuildingCreator.h"
#include "../buildingComposite/industrial/IndustrialBuilding.h"

#include "../buildingComposite/industrial/Factory.h"
#include "../buildingComposite/industrial/Plant.h"
#include "../buildingComposite/industrial/Warehouse.h"

/*
Input: type (int)
    1 - Factory
    2 - Warehouse
    3 - Plant
*/
Building* IndustrialBuildingCreator::createBuilding(int bName) {
    switch (bName)
    {
        case 1:
            return new Factory(800, 1000000, 100);
        break;
        case 2:
            return new Warehouse(400, 600000, 30);
        break;
        case 3:
            return new Plant(1200, 180000, 150);
        break;
        default:
            return nullptr;
    }
}