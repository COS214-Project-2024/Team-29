#include "CompositeNeighbourhood.h"


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

BuildingComponent * CompositeNeighbourhood::clone(){
    //No implementation needed
    return nullptr;
}    

CompositeNeighbourhood* CompositeNeighbourhood::copy() const{
    CompositeNeighbourhood * clone = new CompositeNeighbourhood(this->nName);
    for(BuildingComponent * curr : this->buildingsList){
        clone->addBuilding(curr->clone());
    }
    return clone;
}


int CompositeNeighbourhood::getPowerDemand() const {
    int totalPower = 0;
    for( auto * building : buildingsList) {
        totalPower += building->getPowerDemand();
    }
    return totalPower;
}
int CompositeNeighbourhood::getWaterDemand() const {
    int totalWater = 0;
    for( auto * building : buildingsList) {
        totalWater += building->getWaterDemand();
    }
    return totalWater;
}
int CompositeNeighbourhood::getWasteDemand() const {
    int totalWaste = 0;
    for( auto * building : buildingsList) {
        totalWaste += building->getWasteDemand();
    }
    return totalWaste;
}
int CompositeNeighbourhood::getSewageDemand() const {
    int totalSewage = 0;
    for( auto * building : buildingsList) {
        totalSewage += building->getSewageDemand();
    }
    return totalSewage;
}