#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

class Visitor;  // Forward declaration

class BuildingComponent
{
    public:
        virtual void addBuilding(BuildingComponent* bc) = 0;
        virtual void demolishBuilding(BuildingComponent* bc) = 0;
        virtual int getCapacity() = 0;
        virtual void acceptVisitor(Visitor * visitor) = 0;
        virtual ~BuildingComponent() {};
};

#endif