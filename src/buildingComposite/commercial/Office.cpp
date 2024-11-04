#include "Office.h"

Office::Office(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Office::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Office::clone(){
    BuildingComponent * clone = new Office(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}