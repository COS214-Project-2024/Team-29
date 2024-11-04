#include "Factory.h"

Factory::Factory(double taxIncome, double buildCost, int employeeCapacity) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Factory::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Factory::clone(){
    BuildingComponent * clone = new Factory(this->taxIncome, this->buildCost, this->employeeCapacity);
    return clone;
}