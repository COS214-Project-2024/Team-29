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
Building* LandmarkBuildingCreator::createBuilding(int bName) {
    switch (bName)
    {
        case 1:
            return new Park(0, 300000, 50);
        break;
        case 2:
            return new CulturalCentre(0, 800000, 100);
        break;
        case 3:
            return new Monument(0, 500000, 80);
        break;
        default:
            return nullptr;
    }
}