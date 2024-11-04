#ifndef CULTURAL_CENTRE_H
#define CULTURAL_CENTRE_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class CulturalCentre
 * @brief Specialised concrete LandmarkBuidling class that represents a CulturalCentre.
 *
 * The CulturalCentre class is a specialised type of LandmarkBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class CulturalCentre : public LandmarkBuilding {
    public:
        /**
         * @brief Constructs a CulturalCentre with the specified tax income, build cost, and satisfaction value.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param satisfactionValue Measure of public satisfaction.
         */
        CulturalCentre(double taxIncome, double buildCost, int satisfactionValue);
        /**
         * @brief Accepts a visitor object for performing operations on the CulturalCentre.
         * Such as calculating total income tax for the system/city.
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the CulturalCentre object.
         */
        ~CulturalCentre() {};
};

#endif