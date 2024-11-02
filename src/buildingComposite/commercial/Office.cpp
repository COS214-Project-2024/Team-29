#include "Office.h"

void Office::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Office::getLivingCapacity() const {
    return 0;
}

double Office::getTaxRate() const {
    return 500.0;
}