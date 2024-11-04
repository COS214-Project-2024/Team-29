#include "Office.h"

Office::Office(double taxIncome, double buildCost, int employeeCapacity) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Office::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Office::clone(){
    BuildingComponent * clone = new Office(this->taxIncome, this->buildCost, this->employeeCapacity);
    return clone;
}