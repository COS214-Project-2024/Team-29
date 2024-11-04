#include "Estate.h"

Estate::Estate(double taxIncome, double buildCost, int livingCapacity) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity) {}

void Estate::accept(BuildingVisitor* v) {
    v->visit(this);
}