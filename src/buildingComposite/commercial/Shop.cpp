#include "Shop.h"

Shop::Shop(double taxIncome, double buildCost, int employeeCapacity) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Shop::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Shop::clone(){
    BuildingComponent * clone = new Shop(this->taxIncome, this->buildCost, this->employeeCapacity);
    return clone;
}