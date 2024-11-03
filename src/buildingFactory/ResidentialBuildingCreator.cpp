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
Building* ResidentialBuildingCreator::createBuilding(int bName) {
    switch (bName)
    {
        case 1:
            return new TownHouse(150, 120000, 6);
        break;
        case 2:
            return new Estate(500, 1500000, 8);
        break;
        case 3:
            return new House(100, 75000, 4);
        break;
        default:
            return nullptr;
    }
}