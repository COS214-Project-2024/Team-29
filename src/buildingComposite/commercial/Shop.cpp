#include "Shop.h"

void Shop::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Shop::getLivingCapacity() const {
    return 0;
}

double Shop::getTaxRate() const {
    return 500.0;
}