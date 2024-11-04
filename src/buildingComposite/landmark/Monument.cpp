#include "Monument.h"

Monument::Monument(double taxIncome, double buildCost, int satisfactionValue) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue) {}

void Monument::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Monument::clone(){
    BuildingComponent * clone = new Monument(this->taxIncome, this->buildCost, this->satisfactionValue);
    return clone;
}