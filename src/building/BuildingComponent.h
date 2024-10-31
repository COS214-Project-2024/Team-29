#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

#include <string>
#include "managers/Visitor.h"
#include "managers/TaxCollector.h"

class BuildingComponent
{
    protected:
        int buildingCapacity;

    public:
        virtual void addBuilding( BuildingComponent* bc ) = 0;
        virtual void demolishBuilding( BuildingComponent* bc ) = 0;
        virtual int getCapacity() = 0;
        virtual void acceptVisitor(Visitor * visitor) = 0;
        virtual ~BuildingComponent() {};
};

#endif
