#ifndef BUILDING_MANAGER_H
#define BUILDING_MANAGER_H

#include "../buildingFactory/CommercialBuildingCreator.h"
#include "../buildingFactory/IndustrialBuildingCreator.h"
#include "../buildingFactory/LandmarkBuildingCreator.h"
#include "../buildingFactory/ResidentialBuildingCreator.h"
#include "../buildingComposite/CompositeNeighbourhood.h"

#include <list>
#include <string>
using namespace std;

/**
 * @class BuildingManager
 * @brief Manages creation and operations of various buildings in neighborhoods.
 */
class BuildingManager
{
    private:
        CommercialBuildingCreator* cCreator;    /**< Pointer to commercial building creator. */
        IndustrialBuildingCreator* iCreator;    /**< Pointer to industrial building creator. */
        LandmarkBuildingCreator* lCreator;      /**< Pointer to landmark building creator. */
        ResidentialBuildingCreator* rCreator;   /**< Pointer to residential building creator. */

        std::list<CompositeNeighbourhood*> nList;   /**< List of neighborhoods. */
    public:
        /**
         * @brief Default constructor for BuildingManager.
         */
        BuildingManager();
        /**
         * @brief Creates a new neighborhood with the given name.
         * @param nName Name of the neighborhood.
         * @return Status message of the creation operation.
         */
        std::string createNeighbourhood(std::string nName); 
        /**
         * @brief Builds a building within a neighborhood.
         * @param nName Name of the neighborhood.
         * @param bType Type of building.
         * @param bName Name of the building.
         * @param balance Current balance of the city or neighborhood.
         * @return Updated balance after building cost deduction.
         */
        double buildBuilding(std::string nName, int bType, int bName, double balance); 
        /**
         * @brief Retrieves total building statistics per neighborhood.
         * @return Summary of buildings in each neighborhood as a string.
         */
        std::string getTotalPerNeighbourhood();
        /**
         * @brief Retrieves names of all neighbourhoods
         * @return List of neighbourhood names as a string
         */
        std::string getNeighbourhoods();
        /**
         * @brief Calculates the total cost of all buildings constructed.
         * @return Total construction cost.
         */
        double getTotalBuildCost();
        /**
         * @brief Calculates the total tax income from all buildings.
         * @return Total tax income.
         */
        double getTotalTaxIncome();
        /**
         * @brief Calculates the total living capacity provided by buildings.
         * @return Total living capacity.
         */
        int getTotalLivingCapacity();
        /**
         * @brief Calculates the total employee capacity provided by buildings.
         * @return Total employee capacity.
         */
        int getTotalEmployeeCapacity();
        /**
         * @brief Calculates the overall satisfaction value contributed by buildings.
         * @return Satisfaction value.
         */
        int getTotalSatisfactionValue();
        /**
         * @brief Calculates the total power demand contributed by all buildings and neighbourhoods.
         * @return totalPowerDemand
         */
        int getTotalPowerDemand();
        /**
         * @brief Calculates the total water demand contributed by all buildings and neighbourhoods.
         * @return totalWaterDemand
         */
        int getTotalWaterDemand();
        /**
         * @brief Calculates the total waste demand contributed by all buildings and neighbourhoods.
         * @return totalWasteDemand
         */
        int getTotalWasteDemand();
        /**
         * @brief Calculates the total sewage demand contributed by all buildings and neighbourhoods.
         * @return totalSewageDemand
         */
        int getTotalSewageDemand();


        /**
         * @brief Checks if a neighborhood exists.
         * @param nName Name of the neighborhood.
         * @return True if the neighborhood exists, otherwise false.
         */
        bool neighbourhoodExists(std::string nName);    // Helper function    
        /**
         * @brief Destructor for BuildingManager.
         */
        ~BuildingManager();
        /**
         * @brief Creates a deep copy of the current BuildingManager for saving in CityMemento.
         * @return Pointer to deep copy of the current BuildingManager as a BuildingManager type.
         */
        BuildingManager * clone();
};

#endif // BUILDING_MANAGER_H