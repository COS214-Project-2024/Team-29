#include "CompositeNeighbourhood.h"

CompositeNeighbourhood::CompositeNeighbourhood() : nName("") {};

CompositeNeighbourhood::CompositeNeighbourhood(std::string nName) : nName(nName) {};

void CompositeNeighbourhood::addBuilding(BuildingComponent* bc) {
    buildingsList.push_back(bc);
}

void CompositeNeighbourhood::demolishBuilding(BuildingComponent* bc) {
    buildingsList.remove(bc);

    if(bc != nullptr)
        delete bc;
}

double CompositeNeighbourhood::getTaxIncome() const {
    double totalTax = 0;
    for( auto * building : buildingsList) {
        totalTax += building->getTaxIncome();
    }
    return totalTax;
}

double CompositeNeighbourhood::getBuildCost() const {
    double totalCost = 0;
    for( auto * building : buildingsList) {
        totalCost += building->getBuildCost();
    }
    return totalCost;
}

std::string CompositeNeighbourhood::getName() {
    return this->nName;
}

void CompositeNeighbourhood::accept(BuildingVisitor* visitor) {
    for( auto * building : buildingsList) {
        building->accept(visitor);
    }
}

CompositeNeighbourhood::~CompositeNeighbourhood() {
    std::list<BuildingComponent*>::iterator it;
    for( it = buildingsList.begin(); it != buildingsList.end(); ++it ) {
        delete *it;
    }
}