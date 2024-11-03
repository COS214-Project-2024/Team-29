#ifndef INDUSTRIAL_BUILDING_CREATOR_H
#define INDUSTRIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>
/**
 * @class IndustrialBuildingCreator
 * @brief A concrete factory method for creating buildings.
 *
 * The IndustrialBuildingCreator class provides one of the concrete classes for 
 * the abstract factory class, BuidlingCreator, and is responsible for creating
 * Building objects of type Industrial
 */
class IndustrialBuildingCreator : public BuildingCreator
{
    public:
        /**
         * @brief Creates a building object of type Industrial and returns it.
         * 
         * createBulding() takes in a int paramenter that defines the type of
         * industrial building
         * - Factory : bName == 1
         * - Warehouse : bName == 2
         * - Plant : bName == 3<br><br>
         * (returns nullptr if bName<1 or bName>3)<br>
         * returns a Building pointer to the object (Building*).
         *
         * @param [in] bName int that determines the type of Industrial building created
         * 
         * @return Building* to Building object created
         */
        Building* createBuilding(int bName);
};

#endif