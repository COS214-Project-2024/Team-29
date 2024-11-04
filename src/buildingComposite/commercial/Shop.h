#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Shop
 * @brief Specialised concrete CommercialBuidling class that represents a Shop.
 *
 * The Shop class is a specialised type of CommercialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Shop : public CommercialBuilding {
    public:
        /**
         * @brief Constructs a Shop with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Shop(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Accepts a visitor object for performing operations on the Shop.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Shop object.
         */
        virtual ~Shop() {};
        BuildingComponent* clone(); 
};

#endif