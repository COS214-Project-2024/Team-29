#include "LandmarkBuildingCreator.h"
#include "../buildingComposite/landmark/LandmarkBuilding.h"

#include "../buildingComposite/landmark/CulturalCentre.h"
#include "../buildingComposite/landmark/Park.h"
#include "../buildingComposite/landmark/Monument.h"

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
            return nullptr;
    }
}