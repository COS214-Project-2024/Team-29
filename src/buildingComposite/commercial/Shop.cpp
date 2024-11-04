#include "Shop.h"

Shop::Shop(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Shop::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Shop::clone(){
    BuildingComponent * clone = new Shop(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}