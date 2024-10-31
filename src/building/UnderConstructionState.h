#include "BuildingState.h"
#include <string>
#include "Building.h"

#ifndef UNDERCONSTRUCTIONSTATE_H
#define UNDERCONSTRUCTIONSTATE_H

class UnderConstructionState : public BuildingState
{
    public:
        UnderConstructionState();
        std::string getBuildingState();
        void handleStateChange(Building* b);
};

#endif