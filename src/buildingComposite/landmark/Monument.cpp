#include "Monument.h"

void Monument::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Monument::getLivingCapacity() const {
    return 0;
}

double Monument::getTaxRate() const {
    return 800.0;
}