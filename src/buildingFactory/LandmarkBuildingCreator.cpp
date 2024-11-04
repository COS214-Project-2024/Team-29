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
            return new Park(0, 30000, 50, 20, 50, 80, 20);
        break;
        case 2:
            return new CulturalCentre(0, 80000, 100, 200, 200, 200, 200);
        break;
        case 3:
            return new Monument(0, 50000, 80, 100, 50, 100, 30);
        break;
        default:
            return nullptr;
    }
}