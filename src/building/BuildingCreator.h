#include "Building.h"

#ifndef BUILDINGCREATOR_H
#define BUILDINGCREATOR_H

class BuildingCreator {
    protected:
        virtual Building* createBuilding(int) = 0;
};

#endif