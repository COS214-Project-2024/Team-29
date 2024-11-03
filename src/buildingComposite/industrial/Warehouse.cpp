#include "Warehouse.h"

Warehouse::Warehouse(double taxIncome, double buildCost, int employeeCapacity) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Warehouse::accept(BuildingVisitor* v) {
    v->visit(this);
}