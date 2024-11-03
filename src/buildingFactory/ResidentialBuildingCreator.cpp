#include "ResidentialBuildingCreator.h"

#include "../buildingComposite/residential/ResidentialBuilding.h"

#include "../buildingComposite/residential/Estate.h"
#include "../buildingComposite/residential/House.h"
#include "../buildingComposite/residential/TownHouse.h"

/* 
Input: type (int)
    1 - Townhouse
    2 - Estate
    3 - House
 */
Building* ResidentialBuildingCreator::createBuilding(int type){
    switch (type)
    {
        case 1:
            return new TownHouse();
        break;
        case 2:
            return new Estate();
        break;
        case 3:
            return new House();
        break;
        default:
            return nullptr;
    }
}