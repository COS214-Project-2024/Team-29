#include "Plant.h"

void Plant::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Plant::getLivingCapacity() const {
    return 0;
}

double Plant::getTaxRate() const {
    return 2000;
}