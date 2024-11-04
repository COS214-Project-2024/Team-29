#include "CulturalCentre.h"

CulturalCentre::CulturalCentre(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue, pow,  water, waste, sewage) {}

void CulturalCentre::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* CulturalCentre::clone(){
    BuildingComponent * clone = new CulturalCentre(this->taxIncome, this->buildCost, this->satisfactionValue, this->powerDemand, this-> waterDemand, this->wasteDemand, this->sewageDemand);
    return clone;
}