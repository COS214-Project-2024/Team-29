#include "TotalVisitor.h"

// Constructor
TotalVisitor::TotalVisitor() {
    totalBuildCost = 0;
    totalTaxIncome = 0;
    totalLivingCapacity = 0;
    totalEmployeeCapacity = 0;
    totalSatisfactionValue = 0;
}

// Visit Functions
void TotalVisitor::visit(Mall* m) {
    totalTaxIncome += m->getTaxIncome();
    totalBuildCost += m->getBuildCost();
    totalEmployeeCapacity += m->getEmployeeCapacity();
}

void TotalVisitor::visit(Office* o) {
    totalTaxIncome += o->getTaxIncome();
    totalBuildCost += o->getBuildCost();
    totalEmployeeCapacity += o->getEmployeeCapacity();
}

void TotalVisitor::visit(Shop* s) {
    totalTaxIncome += s->getTaxIncome();
    totalBuildCost += s->getBuildCost();
    totalEmployeeCapacity += s->getEmployeeCapacity();
}

void TotalVisitor::visit(Factory* f) {
    totalTaxIncome += f->getTaxIncome();
    totalBuildCost += f->getBuildCost();
    totalEmployeeCapacity += f->getEmployeeCapacity();
}

void TotalVisitor::visit(Plant* p) {
    totalTaxIncome += p->getTaxIncome();
    totalBuildCost += p->getBuildCost();
    totalEmployeeCapacity += p->getEmployeeCapacity();
}

void TotalVisitor::visit(Warehouse* w) {
    totalTaxIncome += w->getTaxIncome();
    totalBuildCost += w->getBuildCost();
    totalEmployeeCapacity += w->getEmployeeCapacity();
}

void TotalVisitor::visit(CulturalCentre* cc) {
    totalTaxIncome += cc->getTaxIncome();
    totalBuildCost += cc->getBuildCost();
    totalSatisfactionValue += cc->getSatisfactionValue();
}

void TotalVisitor::visit(Monument* m) {
    totalTaxIncome += m->getTaxIncome();
    totalBuildCost += m->getBuildCost();
    totalSatisfactionValue += m->getSatisfactionValue();
}

void TotalVisitor::visit(Park* p) {
    totalTaxIncome += p->getTaxIncome();
    totalBuildCost += p->getBuildCost();
    totalSatisfactionValue += p->getSatisfactionValue();
}

void TotalVisitor::visit(Estate* e) {
    totalTaxIncome += e->getTaxIncome();
    totalBuildCost += e->getBuildCost();
    totalLivingCapacity += e->getLivingCapacity();
}

void TotalVisitor::visit(House* h) {
    totalTaxIncome += h->getTaxIncome();
    totalBuildCost += h->getBuildCost();
    totalLivingCapacity += h->getLivingCapacity();
}

void TotalVisitor::visit(TownHouse* th) {
    totalTaxIncome += th->getTaxIncome();
    totalBuildCost += th->getBuildCost();
    totalLivingCapacity += th->getLivingCapacity();
}

void TotalVisitor::visit(CompositeNeighbourhood* cn) {
    cn->accept(this);
}

/*
    Getter Functions
*/
double TotalVisitor::getTotalBuildCost() const {
    return totalBuildCost;
}

double TotalVisitor::getTotalTaxIncome() const {
    return totalTaxIncome;
}

int TotalVisitor::getTotalLivingCapacity() const {
    return totalLivingCapacity;
}

int TotalVisitor::getTotalEmployeeCapacity() const {
    return totalEmployeeCapacity;
}

int TotalVisitor::getTotalSatisfactionValue() const {
    return totalSatisfactionValue;
}