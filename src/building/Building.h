#include "BuildingState.h"
#include "BuildingComponent.h"

#include <string>

#ifndef BUILDING_H
#define BUILDING_H

class Building : public BuildingComponent
{
    protected:
        int powerConsumption; // amount of power units consumed in one game cycle
        int waterConsumption; // amount of water units need per game cycle
        int wasteProduction; // amount of waste produced per game cycle
        int sewageProduction; // amount of sewage produced per game cycle
        int buildingCapacity; // amount of people the building can handle
        std::string buildingType;
        std::string buildingName;
        BuildingState* buildingState;

    public:
        Building( std::string type, std::string name, int cap );
        void addBuilding( BuildingComponent* bc );
        void demolishBuilding( BuildingComponent* bc );
        int getCapacity();
        std::string getBuildingType();
        std::string getBuildingName();
        void setBuildingState(BuildingState* s);
        virtual void acceptVisitor(Visitor * visitor) = 0;
        ~Building();
};

#endif
