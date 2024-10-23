#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingComponent.h"

class Building : public BuildingComponent
{
    private:
        std::string buildingType;
        std::string buildingName;
        int capacity;

    public:
        Building( std::string type, std::string name, int cap );
        void addBuilding( BuildingComponent* bc );
        void demolishBuilding( BuildingComponent* bc );
        int getCapacity();
        std::string getBuildingType();
        std::string getBuildingName();
        ~Building();
};

#endif
