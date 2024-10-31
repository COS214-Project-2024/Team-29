#include "TaxCollector.h"

int TaxCollector::operation(list<CompositeNeighbourhood*> list) {
	totalTax = 0;
	for( auto * area : list){
		area->acceptVisitor(this);
	}
	return totalTax;
}

void TaxCollector::visitTownhouse(BuildingComponent* building) {
	totalTax += 30;
}

void TaxCollector::visitEstate(BuildingComponent* building) {
	totalTax += 30;
}

void TaxCollector::visitHouse(BuildingComponent* building) {
	totalTax += 30;
}

void TaxCollector::visitApartment(BuildingComponent* building) {
	totalTax += 60;
}

void TaxCollector::visitFactory(BuildingComponent* building) {
	totalTax += 100;
}

void TaxCollector::visitWarehouse(BuildingComponent* building) {
	totalTax += 100;
}

void TaxCollector::visitPlant(BuildingComponent* building) {
	totalTax += 100;
}

void TaxCollector::visitOffice(BuildingComponent* building) {
	totalTax += 100;
}

void TaxCollector::visitShop(BuildingComponent* building) {
	totalTax += 100;
}

void TaxCollector::visitMall(BuildingComponent* building) {
	totalTax += 200;
}
