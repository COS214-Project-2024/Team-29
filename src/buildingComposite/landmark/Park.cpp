#include "Park.h"

Park::Park(double taxIncome, double buildCost, int satisfactionValue) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue) {}

void Park::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* Park::clone(){
    BuildingComponent * clone = new Park(this->taxIncome, this->buildCost, this->satisfactionValue);
    return clone;
}