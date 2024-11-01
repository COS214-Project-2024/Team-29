#include "Factory.h"

void Factory::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Factory::getLivingCapacity() const {
    return 0;
}

double Factory::getTaxRate() const {
    return 2000;
}