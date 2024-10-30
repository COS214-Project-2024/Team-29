#include "CompositeNeighbourhood.h"

CompositeNeighbourhood::CompositeNeighbourhood() {};

void CompositeNeighbourhood::addBuilding( BuildingComponent* bc )
{
    buildingsList.push_back( bc );
}

void CompositeNeighbourhood::demolishBuilding( BuildingComponent* bc )
{
    buildingsList.remove( bc );

    if( bc != NULL )
        delete bc;
    
    bc = NULL;
}

int CompositeNeighbourhood::getCapacity()
{
    int totalCapacity = 0;
    std::list< BuildingComponent* >::iterator it;

    for( it = buildingsList.begin(); it != buildingsList.end(); ++it )
    {
        totalCapacity += (*it)->getCapacity();
    }

    return totalCapacity;
}

CompositeNeighbourhood::~CompositeNeighbourhood()
{
    std::list< BuildingComponent* >::iterator it;

    for( it = buildingsList.begin(); it != buildingsList.end(); ++it )
    {
        delete *it;
    }
}