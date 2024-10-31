#include "BuildingCreator.h"
#include "Building.h"

#ifndef RESIDENTIALBUILDINGCREATOR_H
#define RESIDENTIALBUILDINGCREATOR_H

class ResidentialBuildingCreator : public BuildingCreator
{
    public:
        Building* createBuilding();
};

#endif