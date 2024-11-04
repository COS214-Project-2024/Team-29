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
            return new Office(5000, 50000, 50, 250, 250, 250, 250);
            break;
        case 2:
            return new Shop(2000, 15000, 10, 150, 150, 150, 150);
            break;
        case 3:
            return new Mall(10000, 200000, 200, 350, 350, 350, 350);
            break;
        default:
            return nullptr;
    }
}