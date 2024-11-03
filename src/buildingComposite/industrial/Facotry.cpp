#include "Factory.h"

Factory::Factory(double taxIncome, double buildCost, int employeeCapacity) 
        : IndustrialBuilding(taxIncome, buildCost, employeeCapacity) {}

void Factory::accept(BuildingVisitor* v) {
    v->visit(this);
}