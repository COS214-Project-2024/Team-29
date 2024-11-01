#include "CompositeNeighbourhood.h"

CompositeNeighbourhood::CompositeNeighbourhood() {};

void CompositeNeighbourhood::addBuilding( BuildingComponent* bc ) {
    buildingsList.push_back( bc );
}

void CompositeNeighbourhood::demolishBuilding( BuildingComponent* bc ) {
    buildingsList.remove( bc );

    if(bc != nullptr)
        delete bc;
    
    bc = nullptr;
}

void CompositeNeighbourhood::accept(BuildingVisitor* visitor) {
    for( auto * building : buildingsList) {
        building->accept(visitor);
    }
}

CompositeNeighbourhood::~CompositeNeighbourhood() {
    std::list< BuildingComponent* >::iterator it;

    for( it = buildingsList.begin(); it != buildingsList.end(); ++it ) {
        delete *it;
    }
}