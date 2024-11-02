#ifndef INDUSTRIAL_BUILDING_CREATOR_H
#define INDUSTRIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>

class IndustrialBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding(std::string buildType);
};

#endif