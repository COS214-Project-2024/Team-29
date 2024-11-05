#ifndef CITYMEMENTO_H
#define CITYMEMENTO_H

#include "../satisfaction/SatisfactionState.h"
#include "../buildingComposite/BuildingComponent.h"
#include "../transport/TransportManager.h"
#include "../government/Government.h"
#include "../utility/UtilityFacade.h"
#include "../managers/BuildingManager.h"


#include <iostream>
#include <vector>
#include <list>
#include <list>
using namespace std;
/**
 * @class CityMemento
 * @brief Stores snapshots of city components, allowing the city state to be saved and restored.
 *
 * The CityMemento class provides mechanisms to set and retrieve saved states of various city components,
 * including satisfaction state, buildings, and modes of transport.
 */
class CityMemento {
    public:
        /**
         * @brief Destructor for CityMemento, cleaning up resources.
         */
        ~CityMemento();

        //setters
        /**
         * @brief Sets the satisfaction state of the city to the memento object.
         * @param s Pointer to the SatisfactionState to be saved.
         */
        void setSatisfaction(SatisfactionState* s);
        /**
         * @brief Sets the saved buildingManager object of the city to the memento object.
         * @param b Pointer to the BuildingManager.
         */
        void setBuildingManager(BuildingManager * b);
        /**
         * @brief Sets the saved utilityManager object of the city to the memento object.
         * @param b Pointer to the UtilityManager.
         */
        void setUtilityManager(UtilityFacade * m);
        /**
         * @brief Sets the saved government object of the city to the memento object.
         * @param b Pointer to the BuildingManager.
         */
        void setGovernment(Government * g);
        /**
         * @brief Sets the saved transportManager object of the city to the memento object.
         * @param b Pointer to the TransportManager.
         */
        void setTransportManager(TransportManager * m);

        //Sets for int or float variables
        /**
         * @brief Sets the memento budget to input budget value for the city.
         * @param b Float to be set to memento budget.
         */
        void setBudget(float b);
        /**
         * @brief Sets the memento totalBuildCost to input total build cost value for the city.
         * @param b Double to be set to memento totalBuildCost.
         */
        void setBuildCost(double b);
        /**
         * @brief Sets the memento totalTax to input total tax value for the city.
         * @param b Double to be set to memento totalBuildCost.
         */
        void setTax(double t);
        /**
         * @brief Sets the memento population to input population value for the city.
         * @param b Int to be set to memento population.
         */
        void setPopulation(int p);
        /**
         * @brief Sets the memento totalPowerDemand to input total power demand for the city.
         * @param b Int to be set to memento totalPowerDemand.
         */
        void setTotalPowerDemand(int t);
        /**
         * @brief Sets the memento totalWaterDemand to input total water demand for the city.
         * @param b Int to be set to memento totalWaterDemand.
         */
        void setTotalWaterDemand(int t);
        /**
         * @brief Sets the memento totalWasteDemand to input total waste demand for the city.
         * @param b Int to be set to memento totalWasteDemand.
         */
        void setTotalWasteDemand(int t);
        /**
         * @brief Sets the memento totalSewageDemand to input total sewage demand for the city.
         * @param b Int to be set to memento totalPowerDemand.
         */
        void setTotalSewageDemand(int t);

        //getters
        /**
         * @brief Retrieves the saved satisfaction state from the current object to save.
         * @return Pointer to the saved SatisfactionState.
         */
        SatisfactionState* getSatisfaction() const;
        /**
         * @brief Retrieves the saved pointer to buidling manager from the current object to save.
         * @return Pointer to the saved BuildingManager.
         */
        BuildingManager* getBuildingManager() const;
        /**
         * @brief Retrieves the saved pointer to utility facade from the current object to save.
         * @return Pointer to the saved UtilityFacade.
         */
        UtilityFacade * getUtilityManager() const;
        /**
         * @brief Retrieves the saved pointer to government object from the current object to save.
         * @return Pointer to the saved Government.
         */
        Government * getGovernment() const;
        /**
         * @brief Retrieves the saved pointer to transport manager from the current object to save.
         * @return Pointer to the saved TransportManager.
         */
        TransportManager * getTransportManager(float& b) const;

        /**
         * @brief Retrieves the current budget in the memento.
         * @return Current budget value of the memnto called on.
         */
        float getBudget() const;
        /**
         * @brief Retrieves the current totalBuildCost in the memento.
         * @return Current totalBuildCost value of the memnto called on.
         */
        double getBuildCost() const;
        /**
         * @brief Retrieves the current totalTax in the memento.
         * @return Current totalTax value of the memnto called on.
         */
        double getTax() const;
        /**
         * @brief Retrieves the current population in the memento.
         * @return Current population value of the memnto called on.
         */
        int getPopulation() const;
        /**
         * @brief Retrieves the current totalPowerDemand in the memento.
         * @return Current totalPowerDemand value of the memnto called on.
         */
        int getTotalPowerDemand() const;
        /**
         * @brief Retrieves the current totalWaterDemand in the memento.
         * @return Current totalWaterDemand value of the memnto called on.
         */
        int getTotalWaterDemand() const;
        /**
         * @brief Retrieves the current totalWasteDemand in the memento.
         * @return Current totalWasteDemand value of the memnto called on.
         */
        int  getTotalWasteDemand() const;
        /**
         * @brief Retrieves the current totalSewageDemand in the memento.
         * @return Current totalSewageDemand value of the memnto called on.
         */
        int getTotalSewageDemand()const;

    private:
        SatisfactionState* satisfaction;    /**< Pointer to satisfaction state save. */
        BuildingManager* buildingManager;   /**< Pointer to building manager save. */
        UtilityFacade* utilitiesManager;    /**< Pointer to utilities manager save. */
        TransportManager* transportManager; /**< Pointer to transport manager save. */
        Government * government;            /**< Pointer to government save. */

        float budget;                       /**< Saved amount for budget. */
        double totalBuildCost;              /**< Saved amount for totalBuildCost. */
        double totalTax;                    /**< Saved amount for totalTax. */
        int population;                     /**< Saved amount for population.*/
        int totalPowerDemand;               /**< Saved amount for totalPowerDemand.*/
        int totalWaterDemand;               /**< Saved amount for totalWaterDemand.*/
        int totalWasteDemand;               /**< Saved amount for totalWasteDemand.*/
        int totalSewageDemand;              /**< Saved amount for totalSewageDemand.*/
};

#endif