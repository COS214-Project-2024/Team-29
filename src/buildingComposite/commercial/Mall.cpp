#include "Mall.h"

Mall::Mall(double taxIncome, double buildCost, int employeeCapacity) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Mall::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Mall::clone(){
    BuildingComponent * clone = new Mall(this->taxIncome, this->buildCost, this->employeeCapacity);
    return clone;
}