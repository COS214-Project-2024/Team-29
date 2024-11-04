#include "Mall.h"

Mall::Mall(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Mall::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Mall::clone(){
    BuildingComponent * clone = new Mall(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}