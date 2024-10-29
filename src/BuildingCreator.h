#include "Building.h"

#ifndef BUILDINGCREATOR_H
#define BUILDINGCREATOR_H

class BuildingCreator {
    protected:
        virtual Building* createBuilding() = 0;
};

#endif