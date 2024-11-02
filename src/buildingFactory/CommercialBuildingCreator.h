#ifndef COMMERCIAL_BUILDING_CREATOR_H
#define COMMERCIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>

class CommercialBuildingCreator : public BuildingCreator {
    public:
        Building* createBuilding(int type);
};

#endif