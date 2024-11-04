#include "Park.h"

Park::Park(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue, pow,  water, waste, sewage) {}

void Park::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Park::clone(){
    BuildingComponent * clone = new Park(this->taxIncome, this->buildCost, this->satisfactionValue, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}