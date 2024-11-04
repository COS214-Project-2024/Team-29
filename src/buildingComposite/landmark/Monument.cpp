#include "Monument.h"

Monument::Monument(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue, pow,  water, waste, sewage) {}

void Monument::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Monument::clone(){
    BuildingComponent * clone = new Monument(this->taxIncome, this->buildCost, this->satisfactionValue, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}