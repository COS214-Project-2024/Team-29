#include "Mall.h"

Mall::Mall(double taxIncome, double buildCost, int employeeCapacity) 
        : CommercialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Mall::accept(BuildingVisitor* v) {
    v->visit(this);
}