#ifndef TOTAL_VISITOR_H
#define TOTAL_VISITOR_H

#include "BuildingVisitor.h"
#include "../buildingComposite/commercial/Mall.h"
#include "../buildingComposite/commercial/Office.h"
#include "../buildingComposite/commercial/Shop.h"
#include "../buildingComposite/industrial/Factory.h"
#include "../buildingComposite/industrial/Plant.h"
#include "../buildingComposite/industrial/Warehouse.h"
#include "../buildingComposite/landmark/CulturalCentre.h"
#include "../buildingComposite/landmark/Monument.h"
#include "../buildingComposite/landmark/Park.h"
#include "../buildingComposite/residential/Estate.h"
#include "../buildingComposite/residential/House.h"
#include "../buildingComposite/residential/TownHouse.h"
#include "../buildingComposite/CompositeNeighbourhood.h"

/**
 * @class TotalVisitor
 * @brief Visitor class for calculating various totals across building types, including build cost, tax income, and capacities.
 *
 * The TotalVisitor class implements visit operations for different building types, accumulating totals for
 * build cost, tax income, living capacity, employee capacity, and satisfaction value.
 */
class TotalVisitor : public BuildingVisitor {
    private:
        double totalBuildCost;      /**< Accumulated total build cost. */
        double totalTaxIncome;      /**< Accumulated total tax income. */
        int totalLivingCapacity;    /**< Accumulated total living capacity. */
        int totalEmployeeCapacity;  /**< Accumulated total employee capacity. */
        int totalSatisfactionValue; /**< Accumulated total satisfaction value. */

    public:
        /**
         * @brief Constructs a TotalVisitor with initial totals set to zero.
         */
        TotalVisitor();

        /**
         * @brief Visit method for Mall buildings to accumulate totals.
         * @param m Pointer to a Mall object.
         */
        virtual void visit(Mall* m);

        /**
         * @brief Visit method for Office buildings to accumulate totals.
         * @param o Pointer to an Office object.
         */
        virtual void visit(Office* o);

        /**
         * @brief Visit method for Shop buildings to accumulate totals.
         * @param s Pointer to a Shop object.
         */
        virtual void visit(Shop* s);

        /**
         * @brief Visit method for Factory buildings to accumulate totals.
         * @param f Pointer to a Factory object.
         */
        virtual void visit(Factory* f);

        /**
         * @brief Visit method for Plant buildings to accumulate totals.
         * @param p Pointer to a Plant object.
         */
        virtual void visit(Plant* p);

        /**
         * @brief Visit method for Warehouse buildings to accumulate totals.
         * @param w Pointer to a Warehouse object.
         */
        virtual void visit(Warehouse* w);

        /**
         * @brief Visit method for CulturalCentre buildings to accumulate totals.
         * @param cc Pointer to a CulturalCentre object.
         */
        virtual void visit(CulturalCentre* cc);

        /**
         * @brief Visit method for Monument buildings to accumulate totals.
         * @param m Pointer to a Monument object.
         */
        virtual void visit(Monument* m);

        /**
         * @brief Visit method for Park buildings to accumulate totals.
         * @param p Pointer to a Park object.
         */
        virtual void visit(Park* p);

        /**
         * @brief Visit method for Estate buildings to accumulate totals.
         * @param e Pointer to an Estate object.
         */
        virtual void visit(Estate* e);

        /**
         * @brief Visit method for House buildings to accumulate totals.
         * @param h Pointer to a House object.
         */
        virtual void visit(House* h);

        /**
         * @brief Visit method for TownHouse buildings to accumulate totals.
         * @param th Pointer to a TownHouse object.
         */
        virtual void visit(TownHouse* th);

        /**
         * @brief Visit method for CompositeNeighbourhood buildings to accumulate totals.
         * @param cn Pointer to a CompositeNeighbourhood object.
         */
        virtual void visit(CompositeNeighbourhood* cn);
        
        //Getters
        /**
         * @brief Retrieves the total build cost.
         * @return Total build cost as a double.
         */
        double getTotalBuildCost() const;
        /**
         * @brief Retrieves the total tax income.
         * @return Total tax income as a double.
         */
        double getTotalTaxIncome() const;
        /**
         * @brief Retrieves the total living capacity.
         * @return Total living capacity as an integer.
         */
        int getTotalLivingCapacity() const;
        /**
         * @brief Retrieves the total employee capacity.
         * @return Total employee capacity as an integer.
         */
        int getTotalEmployeeCapacity() const;
        /**
         * @brief Retrieves the total satisfaction value.
         * @return Total satisfaction value as an integer.
         */

        int getTotalSatisfactionValue() const;
        //Destructor
        /**
         * @brief Destructor for TotalVisitor.
         */
        ~TotalVisitor() {};
};

#endif