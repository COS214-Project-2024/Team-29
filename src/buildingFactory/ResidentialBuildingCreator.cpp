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
            return new TownHouse(1500, 12000, 6, 80, 80, 80, 80);
        break;
        case 2:
            return new Estate(5000, 150000, 8, 250, 250, 250, 250);
        break;
        case 3:
            return new House(1000, 7500, 4, 50, 50, 50, 50);
        break;
        default:
            return nullptr;
    }
}