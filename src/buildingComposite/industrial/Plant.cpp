#include "Plant.h"

Plant::Plant(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Plant::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Plant::clone(){
    BuildingComponent * clone = new Plant(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}