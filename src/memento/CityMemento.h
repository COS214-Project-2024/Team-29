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
         * @brief Sets the satisfaction state of the city.
         * @param s Pointer to the SatisfactionState to be saved.
         */
        void setSatisfaction(SatisfactionState* s);
        /**
         * @brief Sets the saved buildings of the city.
         * @param b Pointer to the BuildingComponent representing the saved building structure.
         */
        void setBuildings(BuildingComponent* b);


        SatisfactionState* getSatisfaction() const;
        BuildingManager* getBuildingManager() const;
        UtilityFacade * getUtilityManager() const;
        Government * getGovernment() const;
        TransportManager * getTransportManager(float& b) const;

        float getBudget() const;
        double getBuildCost() const;
        double getTax() const;
        int getPopulation() const;
        int getTotalPowerDemand() const;
        int getTotalWaterDemand() const;
        int  getTotalWasteDemand() const;
        int getTotalSewageDemand()const;

    private:
        SatisfactionState* satisfaction;
        BuildingManager* buildingManager;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;
        Government * government;

        float budget;
        double totalBuildCost;
        double totalTax;
        
        int population;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;
};

#endif