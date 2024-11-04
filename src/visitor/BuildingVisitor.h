#ifndef BUILDING_VISITOR_H
#define BUILDING_VISITOR_H

#include <list>

//foreward declarations
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
/**
 * @class BuildingVisitor
 * @brief Abstract base class defining visitor operations for different types of buildings.
 *
 * The BuildingVisitor class provides an interface for visiting various types of buildings, allowing
 * different actions to be performed on each type. Derived classes implement specific visit behaviors.
 */
class BuildingVisitor {
	public:
		/**
         * @brief Visit method for Mall buildings.
         * @param m Pointer to a Mall object.
         */
        virtual void visit(Mall* m) = 0;
        /**
         * @brief Visit method for Office buildings.
         * @param o Pointer to an Office object.
         */
        virtual void visit(Office* o) = 0;
        /**
         * @brief Visit method for Shop buildings.
         * @param s Pointer to a Shop object.
         */
        virtual void visit(Shop* s) = 0;
        /**
         * @brief Visit method for Factory buildings.
         * @param f Pointer to a Factory object.
         */
        virtual void visit(Factory* f) = 0;
        /**
         * @brief Visit method for Plant buildings.
         * @param p Pointer to a Plant object.
         */
        virtual void visit(Plant* p) = 0;
        /**
         * @brief Visit method for Warehouse buildings.
         * @param w Pointer to a Warehouse object.
         */
        virtual void visit(Warehouse* w) = 0;
        /**
         * @brief Visit method for CulturalCentre buildings.
         * @param cc Pointer to a CulturalCentre object.
         */
        virtual void visit(CulturalCentre* cc) = 0;
        /**
         * @brief Visit method for Monument buildings.
         * @param m Pointer to a Monument object.
         */
        virtual void visit(Monument* m) = 0;
        /**
         * @brief Visit method for Park buildings.
         * @param p Pointer to a Park object.
         */
        virtual void visit(Park* p) = 0;
        /**
         * @brief Visit method for Estate buildings.
         * @param e Pointer to an Estate object.
         */
        virtual void visit(Estate* e) = 0;
        /**
         * @brief Visit method for House buildings.
         * @param h Pointer to a House object.
         */
        virtual void visit(House* h) = 0;
        /**
         * @brief Visit method for TownHouse buildings.
         * @param th Pointer to a TownHouse object.
         */
        virtual void visit(TownHouse* th) = 0;
        /**
         * @brief Visit method for CompositeNeighbourhood buildings.
         * @param cn Pointer to a CompositeNeighbourhood object.
         */
        virtual void visit(CompositeNeighbourhood* cn) = 0;
        /**
         * @brief Virtual destructor for BuildingVisitor.
         */
		virtual ~BuildingVisitor() {};
};

#endif