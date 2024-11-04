#include "Warehouse.h"

Warehouse::Warehouse(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity, pow,  water, waste, sewage) {}

void Warehouse::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Warehouse::clone(){
    BuildingComponent * clone = new Warehouse(this->taxIncome, this->buildCost, this->employeeCapacity, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}