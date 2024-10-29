#include "BuildingState.h"
#include <string>
#include "Building.h"

#ifndef OPERATIONALSTATE_H
#define OPERATIONALSTATE_H

class OperationalState : public BuildingState {
    public:
        OperationalState();
        std::string getBuildingState();
        void handleStateChange(Building* b);
};

#endif