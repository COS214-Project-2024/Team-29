#ifndef BUILDINGSTATE_H
#define BUILDINGSTATE_H

#include <string>

// Forward declaration
class Building;

class BuildingState {
    protected:
        std::string name;
        int capacityMultiplier;
        int consumptionMultiplier;
        int wasteMultiplier;
        int productionMultiplier;
    
    public:
        virtual std::string getBuildingState() = 0;
        virtual void handleStateChange(Building* b) = 0;
};

#endif