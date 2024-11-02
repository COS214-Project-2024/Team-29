#include "LandmarkBuildingCreator.h"
#include "Building.h"
#include "LandmarkBuilding.h"
#include "Park.h"
#include "CulturalCentre.h"
#include "Monument.h"

/*
Input: type (int)
    1 - Park
    2 - CulturalCentre
    3 - Monument
*/
Building* LandmarkBuildingCreator::createBuilding(int type){
    switch (type)
    {
    case 1:
        return new Park();
        break;
    case 2:
        return new CulturalCentre();
        break;
    case 3:
        return new Monument();
        break;
    default:
        break;
    }
}