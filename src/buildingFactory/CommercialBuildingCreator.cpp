#include "CommercialBuildingCreator.h"
#include "../buildingComposite/commercial/CommercialBuilding.h"

#include "../buildingComposite/commercial/Mall.h"
#include "../buildingComposite/commercial/Shop.h"
#include "../buildingComposite/commercial/Office.h"

/*
Input: type (int)
    1 - Office
    2 - Shop
    3 - Mall
*/
Building* CommercialBuildingCreator::createBuilding(int bName) {
    switch (bName)
    {
        case 1:
            return new Office(500, 500000, 50);
            break;
        case 2:
            return new Shop(200, 150000, 10);
            break;
        case 3:
            return new Mall(1000, 2000000, 200);
            break;
        default:
            return nullptr;
    }
}