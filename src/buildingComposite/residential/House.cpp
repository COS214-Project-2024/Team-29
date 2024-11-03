#include "House.h"

House::House(double taxIncome, double buildCost, int livingCapacity) 
        : ResidentialBuilding(taxIncome, buildCost, livingCapacity) {}

void House::accept(BuildingVisitor* v) {
    v->visit(this);
}