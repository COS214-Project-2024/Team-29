#ifndef VISITOR_H
#define VISITOR_H

#include "../building/CompositeNeighbourhood.h"
#include <list>

class Visitor {


public:
	virtual int operation(std::list<CompositeNeighbourhood> list) = 0;

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
