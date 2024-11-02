#include "ResidentialBuildingCreator.h"
#include "Building.h"
#include "ResidentialBuilding.h"
#include "Townhouse.h"
#include "Estate.h"
#include "House.h"
#include "Apartment.h"

/* 
Input: type (int)
    1 - Townhouse
    2 - Estate
    3 - House
    4 - Apartment
 */
Building* ResidentialBuildingCreator::createBuilding(int type){
    switch (type)
    {
    case 1:
        return new Townhouse();
        break;
    case 2:
        return new Estate();
        brreak;
    case 3:
        return new House();
        break;
    case 4:
        return new Apartment();
        break;
    default:
        break;
    }
}