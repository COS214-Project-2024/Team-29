#include "TaxRateVisitor.h"

// Initiliaze totalTaxRate to 0
TaxRateVisitor::TaxRateVisitor() {
	totalTaxRate = 0;
}

// Visit Functions
void TaxRateVisitor::visit(Mall* m) {
	totalTaxRate += m->getTaxRate();
}

void TaxRateVisitor::visit(Office* o) {
	totalTaxRate += o->getTaxRate();
}

void TaxRateVisitor::visit(Shop* s) {
	totalTaxRate += s->getTaxRate();
}

void TaxRateVisitor::visit(Factory* f) {
	totalTaxRate += f->getTaxRate();
}

void TaxRateVisitor::visit(Plant* p) {
	totalTaxRate += p->getTaxRate();
}

void TaxRateVisitor::visit(Warehouse* w) {
	totalTaxRate += w->getTaxRate();
}

void TaxRateVisitor::visit(CulturalCentre* cc) {
	totalTaxRate += cc->getTaxRate();
}

void TaxRateVisitor::visit(Monument* m) {
	totalTaxRate += m->getTaxRate();
}

void TaxRateVisitor::visit(Park* p) {
	totalTaxRate += p->getTaxRate();
}

void TaxRateVisitor::visit(Estate* e) {
	totalTaxRate += e->getTaxRate();
}

void TaxRateVisitor::visit(House* h) {
	totalTaxRate += h->getTaxRate();
}

void TaxRateVisitor::visit(TownHouse* th) {
	totalTaxRate += th->getTaxRate();
}

// Return totalTaxRate
double TaxRateVisitor::getTotalTaxRate() const {
	return totalTaxRate;
}