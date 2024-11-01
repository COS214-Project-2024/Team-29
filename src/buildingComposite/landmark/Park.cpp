#include "Park.h"

void Park::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Park::getLivingCapacity() const {
    return 0;
}

double Park::getTaxRate() const {
    return 800.0;
}