#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

#include <string>

class BuildingComponent
{
    protected:
        int buildingCapacity;

    public:
        virtual void addBuilding( BuildingComponent* bc ) = 0;
        virtual void demolishBuilding( BuildingComponent* bc ) = 0;
        virtual int getCapacity() = 0;
        virtual ~BuildingComponent() {};
};

#endif