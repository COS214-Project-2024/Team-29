#ifndef CITY_H
#define CITY_H

#include "../transport/TransportManager.h"
#include "../utility/UtilityFacade.h"
#include "../government/Government.h"
#include "../managers/BuildingManager.h"

#include <list>

// Forward declarations
class SatisfactionState;  
class CityMemento;
class Government;

/**
 * @class City
 * @brief Manages city operations, including budget, population, utility demands, transport, and government policies.
 *
 * The City class provides functionality for managing various aspects of a city, such as buildings, utilities, 
 * transport, and policies, and calculates demands and satisfaction levels.
 */
class City {
    private:
        SatisfactionState* satisfaction;       /**< Current satisfaction state of the city. */
        BuildingManager* buildingManager;      /**< Manager for handling buildings in the city. */
        UtilityFacade* utilitiesManager;       /**< Manager for utility services in the city. */
        TransportManager* transportManager;    /**< Manager for transport modes in the city. */
        Government* government;                /**< Government instance for policy management. */

        float budget;                          /**< Current budget of the city. */
        double totalBuildCost;                 /**< Total construction cost for all buildings. */
        double totalTax;                       /**< Total tax income from buildings. */

        int population;                        /**< Population of the city. */
        int totalPowerDemand;                  /**< Total power demand of the city. */
        int totalWaterDemand;                  /**< Total water demand of the city. */
        int totalWasteDemand;                  /**< Total waste demand of the city. */
        int totalSewageDemand;                 /**< Total sewage demand of the city. */

    public:
        /**
         * @brief Constructs a new City.
         */
        City();
        /**
         * @brief Destroys the City instance and deallocates resources.
         */
        ~City();
        /**
         * @brief Sets the satisfaction state of the city.
         * @param s Pointer to the new SatisfactionState.
         */
        void setSatisfactionState(SatisfactionState* s);

        // for the Interface
        /**
         * @brief Retrieves the current population of the city.
         * @return The population as an integer.
         */
        int getPopulation();
        /**
         * @brief Retrieves the current budget of the city.
         * @return The city's budget as a float.
         */
        float getBudget();
        /**
         * @brief Retrieves the total power demand of the city.
         * @return Total power demand as an integer.
         */
        int getPowerDemand();
        /**
         * @brief Retrieves the total water demand of the city.
         * @return Total water demand as an integer.
         */
        int getWaterDemand();
        /**
         * @brief Retrieves the total waste demand of the city.
         * @return Total waste demand as an integer.
         */
        int getWasteDemand();
        /**
         * @brief Retrieves the total sewage demand of the city.
         * @return Total sewage demand as an integer.
         */
        int getSewageDemand();
        /**
         * @brief Fetches a list of all neighbourhood names
         * @return List of names of neighbourhoods as a string
         */
        std::string getNeighbourhoods();

        //transport related functions
        /**
         * @brief Adds a mode of transport to the city thruogh the transportManager attribute.
         * @param type The type of transport (e.g., "Airport", "Bus", "Ferry", "Train").
         * @param name The name of the transport mode (e.g., "Gautrain").
         * @param budget Reference to the city's budget.
         */
        void addTransport(string type, string name, float& budget);
        /**
         * @brief Prints the list of all transport modes in the city through the transportManager attribute.
         */
        void printTransport();
        /**
         * @brief Calculates if the transport system meets the population’s needs.
         * @return True if the transport system is sufficient; false otherwise.
         */
        bool calcTransportSatisfaction();

        //government related functions
        /**
         * @brief Implements a random policy that affects citizen satisfaction and costs R 5000.
         */
        void implementPolicy();

        //memento related functions
        /**
         * @brief Saves the current state of the city.
         * @return A pointer to a CityMemento containing the saved state.
         */
        CityMemento* saveGame();
        /**
         * @brief Loads a previously saved city state.
         * @param save A pointer to the CityMemento containing the saved state to load.
         */
        void loadGame(CityMemento* save);

        //add func to calculate demand and set demand vars        

        //Building related functions 
        void getTotalBuildCost();
        //add func to upgrade different utilities and set satisfaction after upgrading
        /**
         * @brief Calculates the total tax income from all buildings by using the buildingManger.
         */
        void getTotalTax();
        /**
         * @brief Calculates the total living capacity from all buildings by using the buildingManger.
         */
        void getTotalLivingCapacity();
        /**
         * @brief Calculates the total empleyee capcity from all buildings by using the buildingManger.
         */
        void getTotalEmployeeCapacity();
        /**
         * @brief Calculates the total satisfaction value from all buildings by using the buildingManger.
         */
        void getTotalSatisfactionValue();
        /**
         * @brief Builds a new building in the city.
         * @param nName Name of the neighborhood.
         * @param bType Building type.
         * @param bName Building name.
         * @return Status code of the building operation.
         */
        int buildBuilding(std::string nName, int bType, int bName);
};

#endif
