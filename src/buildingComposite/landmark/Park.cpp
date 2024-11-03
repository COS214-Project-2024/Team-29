#include "Park.h"

Park::Park(double taxIncome, double buildCost, int satisfactionValue) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue) {}

void Park::accept(BuildingVisitor* v) {
    v->visit(this);
}