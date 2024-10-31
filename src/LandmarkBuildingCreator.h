#include "BuildingCreator.h"
#include "Building.h"

#ifndef LANDMARKBUILDINGCREATOR_H
#define LANDMARKBUILDINGCREATOR_H

class LandmarkBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding();
};

#endif