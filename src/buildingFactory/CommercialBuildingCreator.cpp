#include "CommercialBuildingCreator.h"
#include "../buildingComposite/commercial/CommercialBuilding.h"

#include "../buildingComposite/commercial/Mall.h"
#include "../buildingComposite/commercial/Shop.h"
#include "../buildingComposite/commercial/Office.h"

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
            return nullptr;
    }
}