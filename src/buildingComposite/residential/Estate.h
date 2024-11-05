#ifndef ESTATE_H
#define ESTATE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Estate
 * @brief Specialised concrete IndustrialBuidling class that represents an Estate.
 *
 * The Estate class is a specialised type of IndustrialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Estate : public ResidentialBuilding {
    public:
        /**
         * @brief Constructs an Estate with the specified tax income, build cost, and living capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Estate(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Accepts a visitor object for performing operations on the Estate.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Estate object.
         */
        ~Estate() {};
        /**
         * @brief Creates a copy of the current estate for saving in CityMemento.
         * @return Pointer to copy of the current Estate as a BuildingComponent type.
         */
        BuildingComponent* clone(); 
}; 

#endif