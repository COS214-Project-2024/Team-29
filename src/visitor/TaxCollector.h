#ifndef TAXCOLLECTOR_H
#define TAXCOLLECTOR_H

#include "../managers/Visitor.h"

class TaxCollector : public Visitor {

private:
	int totalTax;

public:
	int operation(std::list<CompositeNeighbourhood> list);

	void visitTownhouse(BuildingComponent* building);

	void visitEstate(BuildingComponent* building);

	void visitHouse(BuildingComponent* building);

	void visitApartment(BuildingComponent* building);

	void visitFactory(BuildingComponent* building);

	void visitWarehouse(BuildingComponent* building);

	void visitPlant(BuildingComponent* building);

	void visitOffice(BuildingComponent* building);

	void visitShop(BuildingComponent* building);

	void visitMall(BuildingComponent* building);
};

#endif
