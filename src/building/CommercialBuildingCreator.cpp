#include "CommercialBuildingCreator.h"
#include "Building.h"
#include "CommercialBuilding.h"
#include "Office.h"
#include "Shop.h"
#include "Mall.h"


// Input: type (int)
//  1 - Office
//  2 - Shop
//  3 - Mall
Building* CommercialBuildingCreator::createBuilding(int type){
    switch (type)
    {
    case 1:
        return new Office();
        break;
    case 2:
        return new Shop();
        break;
    case 3:
        return new Mall();
        break;
    default:
        break;
    }
}
