#include "House.h"

House::House(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage ) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity, pow,  water, waste, sewage) {}

void House::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* House::clone(){
    BuildingComponent * clone = new House(this->taxIncome, this->buildCost, this->livingCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}