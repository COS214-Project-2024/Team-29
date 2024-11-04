#include "TownHouse.h"

TownHouse::TownHouse(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity, pow,  water, waste, sewage) {}

void TownHouse::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* TownHouse::clone(){
    BuildingComponent * clone = new TownHouse(this->taxIncome, this->buildCost, this->livingCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}