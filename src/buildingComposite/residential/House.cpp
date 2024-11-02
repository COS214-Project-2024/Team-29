#include "House.h"

void House::accept(BuildingVisitor* v) {
    v->visit(this);
}

int House::getLivingCapacity() const {
    return 10;
}

double House::getTaxRate() const {
    return 150.0;
}