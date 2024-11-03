#include "Monument.h"

Monument::Monument(double taxIncome, double buildCost, int satisfactionValue) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue) {}

void Monument::accept(BuildingVisitor* v) {
    v->visit(this);
}