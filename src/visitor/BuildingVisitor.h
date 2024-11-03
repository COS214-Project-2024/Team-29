#ifndef BUILDING_VISITOR_H
#define BUILDING_VISITOR_H

#include <list>

class BuildingComponent;  // Forward declaration
class Mall;
class Office;
class Shop;
class Factory;
class Plant;
class Warehouse;
class CulturalCentre;
class Monument;
class Park;
class Estate;
class House;
class TownHouse;
class CompositeNeighbourhood;

class BuildingVisitor {
	public:
		virtual void visit(Mall* m) = 0;
		virtual void visit(Office* o) = 0;
		virtual void visit(Shop* s) = 0;
		virtual void visit(Factory* f) = 0;
		virtual void visit(Plant* p) = 0;
		virtual void visit(Warehouse* w) = 0;
		virtual void visit(CulturalCentre* cc) = 0;
		virtual void visit(Monument* m) = 0;
		virtual void visit(Park* p) = 0;
		virtual void visit(Estate* e) = 0;
		virtual void visit(House* h) = 0;
		virtual void visit(TownHouse* th) = 0;
		virtual void visit(CompositeNeighbourhood* cn) = 0;
		virtual double getValue() = 0;
};

#endif