#include "BuildingCreator.h"
#include "Building.h"

#ifndef INDUSTRIALBUILDINGCREATOR_H
#define INDUSTRIALBUILDINGCREATOR_H

class IndustrialBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding();
};

#endif