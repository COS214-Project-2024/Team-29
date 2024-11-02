#ifndef LANDMARK_BUILDING_CREATOR_H
#define LANDMARK_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>

class LandmarkBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding(std::string buildType);
};

#endif