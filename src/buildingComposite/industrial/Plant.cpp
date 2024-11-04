#include "Plant.h"

Plant::Plant(double taxIncome, double buildCost, int employeeCapacity) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Plant::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Plant::clone(){
    BuildingComponent * clone = new Plant(this->taxIncome, this->buildCost, this->employeeCapacity);
    return clone;
}