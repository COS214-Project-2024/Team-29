#include "CulturalCentre.h"

CulturalCentre::CulturalCentre(double taxIncome, double buildCost, int satisfactionValue) 
        : LandmarkBuilding(taxIncome, buildCost, satisfactionValue) {}

void CulturalCentre::accept(BuildingVisitor* v) {
    v->visit(this);
}

BuildingComponent* CulturalCentre::clone(){
    BuildingComponent * clone = new CulturalCentre(this->taxIncome, this->buildCost, this->satisfactionValue);
    return clone;
}