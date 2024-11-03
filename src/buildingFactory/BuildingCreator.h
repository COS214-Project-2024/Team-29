#ifndef BUILDING_CREATOR_H
#define BUILDING_CREATOR_H

#include "../buildingComposite/Building.h"

class BuildingCreator {
    protected:
        virtual Building* createBuilding(int bName) = 0;
};

#endif