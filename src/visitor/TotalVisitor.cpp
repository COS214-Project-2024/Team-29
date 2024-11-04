#include "TotalVisitor.h"

// Constructor
TotalVisitor::TotalVisitor() {
    totalBuildCost = 0;
    totalTaxIncome = 0;
    totalLivingCapacity = 0;
    totalEmployeeCapacity = 0;
    totalSatisfactionValue = 0;

    totalPowerDemand = 0;
    totalWaterDemand = 0;
    totalWasteDemand = 0;
    totalSewageDemand = 0;
}

// Visit Functions
void TotalVisitor::visit(Mall* m) {
    totalTaxIncome += m->getTaxIncome();
    totalBuildCost += m->getBuildCost();
    totalEmployeeCapacity += m->getEmployeeCapacity();
    totalPowerDemand += m->getPowerDemand();
    totalWaterDemand += m->getWaterDemand();
    totalWasteDemand += m->getWasteDemand();
    totalSewageDemand += m->getSewageDemand();
}

void TotalVisitor::visit(Office* o) {
    totalTaxIncome += o->getTaxIncome();
    totalBuildCost += o->getBuildCost();
    totalEmployeeCapacity += o->getEmployeeCapacity();
    totalPowerDemand += o->getPowerDemand();
    totalWaterDemand += o->getWaterDemand();
    totalWasteDemand += o->getWasteDemand();
    totalSewageDemand += o->getSewageDemand();
}

void TotalVisitor::visit(Shop* s) {
    totalTaxIncome += s->getTaxIncome();
    totalBuildCost += s->getBuildCost();
    totalEmployeeCapacity += s->getEmployeeCapacity();
    totalPowerDemand += s->getPowerDemand();
    totalWaterDemand += s->getWaterDemand();
    totalWasteDemand += s->getWasteDemand();
    totalSewageDemand += s->getSewageDemand();
}

void TotalVisitor::visit(Factory* f) {
    totalTaxIncome += f->getTaxIncome();
    totalBuildCost += f->getBuildCost();
    totalEmployeeCapacity += f->getEmployeeCapacity();
    totalPowerDemand += f->getPowerDemand();
    totalWaterDemand += f->getWaterDemand();
    totalWasteDemand += f->getWasteDemand();
    totalSewageDemand += f->getSewageDemand();
}

void TotalVisitor::visit(Plant* p) {
    totalTaxIncome += p->getTaxIncome();
    totalBuildCost += p->getBuildCost();
    totalEmployeeCapacity += p->getEmployeeCapacity();
    totalPowerDemand += p->getPowerDemand();
    totalWaterDemand += p->getWaterDemand();
    totalWasteDemand += p->getWasteDemand();
    totalSewageDemand += p->getSewageDemand();
}

void TotalVisitor::visit(Warehouse* w) {
    totalTaxIncome += w->getTaxIncome();
    totalBuildCost += w->getBuildCost();
    totalEmployeeCapacity += w->getEmployeeCapacity();
    totalPowerDemand += w->getPowerDemand();
    totalWaterDemand += w->getWaterDemand();
    totalWasteDemand += w->getWasteDemand();
    totalSewageDemand += w->getSewageDemand();
}

void TotalVisitor::visit(CulturalCentre* cc) {
    totalTaxIncome += cc->getTaxIncome();
    totalBuildCost += cc->getBuildCost();
    totalSatisfactionValue += cc->getSatisfactionValue();
    totalPowerDemand += cc->getPowerDemand();
    totalWaterDemand += cc->getWaterDemand();
    totalWasteDemand += cc->getWasteDemand();
    totalSewageDemand += cc->getSewageDemand();
}

void TotalVisitor::visit(Monument* m) {
    totalTaxIncome += m->getTaxIncome();
    totalBuildCost += m->getBuildCost();
    totalSatisfactionValue += m->getSatisfactionValue();
    totalPowerDemand += m->getPowerDemand();
    totalWaterDemand += m->getWaterDemand();
    totalWasteDemand += m->getWasteDemand();
    totalSewageDemand += m->getSewageDemand();
}

void TotalVisitor::visit(Park* p) {
    totalTaxIncome += p->getTaxIncome();
    totalBuildCost += p->getBuildCost();
    totalSatisfactionValue += p->getSatisfactionValue();
    totalPowerDemand += p->getPowerDemand();
    totalWaterDemand += p->getWaterDemand();
    totalWasteDemand += p->getWasteDemand();
    totalSewageDemand += p->getSewageDemand();
}

void TotalVisitor::visit(Estate* e) {
    totalTaxIncome += e->getTaxIncome();
    totalBuildCost += e->getBuildCost();
    totalLivingCapacity += e->getLivingCapacity();
    totalPowerDemand += e->getPowerDemand();
    totalWaterDemand += e->getWaterDemand();
    totalWasteDemand += e->getWasteDemand();
    totalSewageDemand += e->getSewageDemand();
}

void TotalVisitor::visit(House* h) {
    totalTaxIncome += h->getTaxIncome();
    totalBuildCost += h->getBuildCost();
    totalLivingCapacity += h->getLivingCapacity();
    totalPowerDemand += h->getPowerDemand();
    totalWaterDemand += h->getWaterDemand();
    totalWasteDemand += h->getWasteDemand();
    totalSewageDemand += h->getSewageDemand();
}

void TotalVisitor::visit(TownHouse* th) {
    totalTaxIncome += th->getTaxIncome();
    totalBuildCost += th->getBuildCost();
    totalLivingCapacity += th->getLivingCapacity();
    totalPowerDemand += th->getPowerDemand();
    totalWaterDemand += th->getWaterDemand();
    totalWasteDemand += th->getWasteDemand();
    totalSewageDemand += th->getSewageDemand();
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

int TotalVisitor::getTotalPowerDemand() const{
    return this->totalPowerDemand;
}
int TotalVisitor::getTotalWaterDemand() const{
    return this->totalWaterDemand;
}
int TotalVisitor::getTotalWasteDemand() const{
    return this->totalWasteDemand;
}
int TotalVisitor::getTotalSewageDemand() const{
    return this->totalSewageDemand;
}