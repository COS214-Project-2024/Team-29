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
            return new Factory(8000, 10000, 100, 350, 350, 350, 280);
        break;
        case 2:
            return new Warehouse(4000, 6000, 30, 150, 150, 100, 50);
        break;
        case 3:
            return new Plant(12000, 18000, 150, 550, 550, 550, 350);
        break;
        default:
            return nullptr;
    }
}