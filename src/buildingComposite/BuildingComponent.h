#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

class BuildingVisitor;  // Forward declaration

class BuildingComponent
{
    public:
        virtual void addBuilding(BuildingComponent* bc) {}; //Inline 
        virtual void demolishBuilding(BuildingComponent* bc) {}; //Inline
        
        virtual void accept(BuildingVisitor* v) = 0; //Pure virtual
        
        virtual ~BuildingComponent() {}; //Inline
};

#endif