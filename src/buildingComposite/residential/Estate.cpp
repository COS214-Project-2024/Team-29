#include "Estate.h"

Estate::Estate(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage ) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity, pow,  water,  waste, sewage) {}

void Estate::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Estate::clone(){
    BuildingComponent * clone = new Estate(this->taxIncome, this->buildCost, this->livingCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}