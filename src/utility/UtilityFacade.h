#ifndef UTILITYFACADE_H
#define UTILITYFACADE_H

#include <iostream>

#include "UtilitiesDecorator.h"
#include "SewageManagementDecorator.h"
#include "WaterSupplyDecorator.h"
#include "WasteManagementDecorator.h"
#include "PowerPlantDecorator.h"

/**
 * @class UtilityFacade
 * @brief A facade class to manage and upgrade utility systems.
 *
 * The UtilityFacade class provides a simplified interface for managing
 * various utility systems (power, water, waste, and sewage management).
 * It allows checking and upgrading utilities based on demand, as well
 * as printing and retrieving resource capacities.
 */
class UtilityFacade {
    private:
        /// @brief Pointer to the power plant utility decorator 
        UtilitiesDecorator* powerPlant;
        /// @brief Pointer to the water supply utility decorator 
        UtilitiesDecorator* waterSupply;
        /// @brief Pointer to the waste management utility decorator  
        UtilitiesDecorator* wasteManagement;   
        /// @brief Pointer to the waste management utility decorator 
        UtilitiesDecorator* sewageManagement;  

    public:
        /**
         * @brief Constructor for UtilityFacade.
         *
         * Initializes utility decorators for power, water, waste, and sewage systems.
         */
        UtilityFacade();

        /**
         * @brief Destructor for UtilityFacade.
         *
         * Cleans up allocated resources for each utility decorator.
         */
        ~UtilityFacade();

        /**
         * @brief Checks and upgrades utility systems based on the specified demand.
         * 
         * This method assesses each utility's current capacity and upgrades them
         * if the demand exceeds available resources.
         *
         * @param demand The required capacity to fulfill current demand.
         */
        void checkAndUpgradeUtilities(int demand);

        /**
         * @brief Prints the current distribution of resources across utilities.
         * 
         * Provides an overview of resource availability for power, water, waste, 
         * and sewage management systems.
         */
        void printResourceDistribution();

        /**
         * @brief Retrieves the current power capacity.
         *
         * @return The capacity of the power plant.
         */
        int getPowerCapacity();

        /**
         * @brief Retrieves the current water capacity.
         *
         * @return The capacity of the water supply.
         */
        int getWaterCapacity();

        /**
         * @brief Retrieves the current waste management capacity.
         *
         * @return The capacity of the waste management system.
         */
        int getWasteCapacity();

        /**
         * @brief Retrieves the current sewage management capacity.
         *
         * @return The capacity of the sewage management system.
         */
        int getSewageCapacity();
};
#endif