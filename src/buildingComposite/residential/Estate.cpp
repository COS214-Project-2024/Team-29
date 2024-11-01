#include "Estate.h"

void Estate::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Estate::getLivingCapacity() const {
    return 100;
}

double Estate::getTaxRate() const {
    return 1000.0;
}