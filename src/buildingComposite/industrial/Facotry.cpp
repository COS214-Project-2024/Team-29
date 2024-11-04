#include "Factory.h"

Factory::Factory(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Factory::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Factory::clone(){
    BuildingComponent * clone = new Factory(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}