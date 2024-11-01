#ifndef RESIDENTIAL_BUILDING_CREATOR_H
#define RESIDENTIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>

class ResidentialBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding(std::string buildType);
};

#endif