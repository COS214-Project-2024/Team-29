#include "CulturalCentre.h"

void CulturalCentre::accept(BuildingVisitor* v) {
    v->visit(this);
}

int CulturalCentre::getLivingCapacity() const {
    return 0;
}

double CulturalCentre::getTaxRate() const {
    return 800.0;
}