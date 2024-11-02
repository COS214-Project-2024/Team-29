#include "IndustrialBuildingCreator.h"
#include "Building.h"
#include "IndustrialBuilding.h"
#include "Factory.h"
#include "Warehouse.h"
#include "Plant.h"

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
        break;
    }
}