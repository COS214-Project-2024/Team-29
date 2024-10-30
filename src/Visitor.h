#ifndef VISITOR_H
#define VISITOR_H

#include "CompositeNeighbourhood.h"

class Visitor {


public:
	virtual int operation(list<CompositeNeighbourhood> list) = 0;

	virtual void visitTownhouse(BuildingComponent* building) = 0;

	virtual void visitEstate(BuildingComponent* building) = 0;

	virtual void visitHouse(BuildingComponent* building) = 0;

	virtual void visitApartment(BuildingComponent* building) = 0;

	virtual void visitFactory(BuildingComponent* building) = 0;

	virtual void visitWarehouse(BuildingComponent* building) = 0;

	virtual void visitPlant(BuildingComponent* building) = 0;

	virtual void visitOffice(BuildingComponent* building) = 0;

	virtual void visitShop(BuildingComponent* building) = 0;

	virtual void visitMall(BuildingComponent* building) = 0;
};

#endif
