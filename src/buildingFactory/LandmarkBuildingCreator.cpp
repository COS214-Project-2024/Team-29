#include "LandmarkBuildingCreator.h"
#include "../buildingComposite/landmark/LandmarkBuilding.h"

#include "../buildingComposite/landmark/CulturalCentre.h"
#include "../buildingComposite/landmark/Park.h"
#include "../buildingComposite/landmark/Monument.h"

Building* LandmarkBuildingCreator::createBuilding(std::string buildType){
    if(buildType == "CulturalCentre")
    {
        return new CulturalCentre();
    }
    else if(buildType == "Park")
    {
        return new Park();
    }
    else
    {
        return new Monument();
    }
}