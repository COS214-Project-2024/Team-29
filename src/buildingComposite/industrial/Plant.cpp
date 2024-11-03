#include "Plant.h"

Plant::Plant(double taxIncome, double buildCost, int employeeCapacity) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Plant::accept(BuildingVisitor* v) {
    v->visit(this);
}