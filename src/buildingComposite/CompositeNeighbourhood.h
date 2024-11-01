#ifndef COMPOSITE_NEIGHBOURHOOD_H
#define COMPOSITE_NEIGHBOURHOOD_H

#include "BuildingComponent.h"
#include <list> 

class CompositeNeighbourhood : public BuildingComponent {
    private:
        std::list<BuildingComponent*> buildingsList;
        
    public:
        CompositeNeighbourhood();
        void accept(BuildingVisitor* bv);
        void addBuilding(BuildingComponent* bc);
        void demolishBuilding(BuildingComponent* bc);
        ~CompositeNeighbourhood();
};

#endif