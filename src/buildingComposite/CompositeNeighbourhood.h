#ifndef COMPOSITE_NEIGHBOURHOOD_H
#define COMPOSITE_NEIGHBOURHOOD_H

#include "BuildingComponent.h"
#include <list> 
#include <string>

class CompositeNeighbourhood : public BuildingComponent {
    private:
        std::list<BuildingComponent*> buildingsList;
        std::string nName; // Neighbourhood name
        
    public:
        CompositeNeighbourhood(std::string nName);
        virtual void addBuilding(BuildingComponent* bc) override;
        virtual void demolishBuilding(BuildingComponent* bc) override;
        virtual double getTaxIncome() const override;
        virtual double getBuildCost() const override;
        std::string getName();
        virtual void accept(BuildingVisitor* bv) override;
        ~CompositeNeighbourhood();
};

#endif