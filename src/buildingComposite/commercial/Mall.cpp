#include "Mall.h"

void Mall::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Mall::getLivingCapacity() const {
    return 0;
}

double Mall::getTaxRate() const {
    return 1500.0;
}