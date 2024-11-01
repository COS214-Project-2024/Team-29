#include "TownHouse.h"

void TownHouse::accept(BuildingVisitor* v) {
    v->visit(this);
}

int TownHouse::getLivingCapacity() const {
    return 5;
}

double TownHouse::getTaxRate() const {
    return 100.0;
}