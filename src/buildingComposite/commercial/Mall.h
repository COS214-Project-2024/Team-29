#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Mall
 * @brief Specialised concrete CommercialBuidling class that represents a Mall.
 *
 * The Mall class is a specialised type of CommercialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Mall : public CommercialBuilding {
    public:
        /**
         * @brief Constructs a Mall with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Mall(double taxIncome, double buildCost, int employeeCapacity);
        /**
         * @brief Accepts a visitor object for performing operations on the Mall.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Mall object.
         */
        virtual ~Mall() {};
};

#endif