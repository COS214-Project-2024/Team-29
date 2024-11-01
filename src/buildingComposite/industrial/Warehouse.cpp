#include "Warehouse.h"

void Warehouse::accept(BuildingVisitor* v) {
    v->visit(this);
}

int Warehouse::getLivingCapacity() const {
    return 0;
}

double Warehouse::getTaxRate() const {
    return 1500;
}