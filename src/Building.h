#include <string>
#include "BuildingState.h"

#ifndef BUILDING_H
#define BUILDING_H

class Building {
    protected:
        int powerConsumption; // amount of power units consumed in one game cycle
        int waterConsumption; // amount of water units need per game cycle
        int wasteProduction; // amount of waste produced per game cycle
        int sewageProduction; // amount of sewage produced per game cycle
        int buildingCapacity; // amount of people the building can handle
        std::string buildingType; // type of building (Residential, Commercial, Industrial, Landmark)
        std::string buildingName;
        BuildingState* buildingstate;
    
    public:
        void setBuildingState(BuildingState* s);
};

void Building::setBuildingState(BuildingState* s){
    delete this->buildingState;
    this->buildingState = s;
}

#endif