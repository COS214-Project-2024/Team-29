#ifndef BUILDING_CREATOR_H
#define BUILDING_CREATOR_H

#include "../buildingComposite/Building.h"
/**
 * @class BuildingCreator
 * @brief The abstract class for the factory method for creating buildings.
 *
 * The BuildingCreator class provides the abstract template and method for 
 * the concrete factory classes (CommercialBuildingCreator, IndustrialBuildingCreator,
 * LandmarkBuildingCreator, ResidentialBuildingCreator)
 */
class BuildingCreator {
    protected:
        /**
         * @brief Virtual function for the concrete creator classes that creates a 
         * building object based on an input parameter bName and returns the pointer to that created object.
         * 
         * @param [in] bName Input int that determines the type of building created
         * 
         * @return Building* to Building object created
         */
        virtual Building* createBuilding(int bName) = 0;
};

#endif