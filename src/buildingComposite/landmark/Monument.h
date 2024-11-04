#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Monument
 * @brief Specialised concrete LandmarkBuidling class that represents a Monument.
 *
 * The Monument class is a specialised type of LandmarkBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Monument : public LandmarkBuilding {
    public:
        /**
         * @brief Constructs a Monument with the specified tax income, build cost, and satisfaction value.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param satisfactionValue Measure of public satisfaction.
         */
        Monument(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage);
        /**
         * @brief Accepts a visitor object for performing operations on the Monument.
         * Such as calculating total income tax for the system/city.
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Monument object.
         */
        ~Monument() {};
        BuildingComponent* clone(); 
};

#endif