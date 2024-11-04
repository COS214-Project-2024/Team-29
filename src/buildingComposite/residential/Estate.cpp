#include "Estate.h"

Estate::Estate(double taxIncome, double buildCost, int livingCapacity) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity) {}

void Estate::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Estate::clone(){
    BuildingComponent * clone = new Estate(this->taxIncome, this->buildCost, this->livingCapacity);
    return clone;
}