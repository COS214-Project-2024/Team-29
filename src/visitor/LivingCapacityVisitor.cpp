#include "LivingCapacityVisitor.h"

// Initiliaze totalLivingCapacity to 0
LivingCapacityVisitor::LivingCapacityVisitor() {
    totalLivingCapacity = 0;
}

// Visit Functions
void LivingCapacityVisitor::visit(Mall* m) {
    totalLivingCapacity += m->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Office* o) {
    totalLivingCapacity += o->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Shop* s) {
    totalLivingCapacity += s->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Factory* f) {
    totalLivingCapacity += f->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Plant* p) {
    totalLivingCapacity += p->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Warehouse* w) {
    totalLivingCapacity += w->getLivingCapacity();
}

void LivingCapacityVisitor::visit(CulturalCentre* cc) {
    totalLivingCapacity += cc->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Monument* m) {
    totalLivingCapacity += m->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Park* p) {
    totalLivingCapacity += p->getLivingCapacity();
}

void LivingCapacityVisitor::visit(Estate* e) {
    totalLivingCapacity += e->getLivingCapacity();
}

void LivingCapacityVisitor::visit(House* h) {
    totalLivingCapacity += h->getLivingCapacity();
}

void LivingCapacityVisitor::visit(TownHouse* th) {
    totalLivingCapacity += th->getLivingCapacity();
}

void LivingCapacityVisitor::visit(CompositeNeighbourhood* cn) {
    cn->accept(this);
}
// Return totalLivingCapacity
double LivingCapacityVisitor::getValue(){
    double temp = totalLivingCapacity;
    totalLivingCapacity = 0;
    return temp;
}