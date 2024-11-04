#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Office
 * @brief Specialised concrete CommercialBuidling class that represents a Office.
 *
 * The Office class is a specialised type of CommercialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Office : public CommercialBuilding {
    public:
        /**
         * @brief Constructs a Office with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Office(double taxIncome, double buildCost, int employeeCapacity);
        /**
         * @brief Accepts a visitor object for performing operations on the Office.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Office object.
         */
        virtual ~Office() {};
};

#endif
