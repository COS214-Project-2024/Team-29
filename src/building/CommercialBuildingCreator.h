#include "BuildingCreator.h"
#include "Building.h"

#ifndef COMMERCIALBUILDINGCREATOR_H
#define COMMERCIALBUILDINGCREATOR_H

class CommercialBuildingCreator : public BuildingCreator {
    public:
        Building* createBuilding(int type);
};

#endif