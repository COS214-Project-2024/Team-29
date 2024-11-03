#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

class BuildingVisitor;  // Forward declaration

class BuildingComponent
{
    public:
        virtual void addBuilding(BuildingComponent* bc);       
        virtual void demolishBuilding(BuildingComponent* bc);
        virtual double getTaxIncome() const = 0;                  //Pure virtual
        virtual double getBuildCost() const = 0;                  //Pure virtual
        virtual void accept(BuildingVisitor* v) = 0;              //Pure virtual
        virtual ~BuildingComponent() {};                          //Inline
};

#endif