#ifndef CITY_H
#define CITY_H

#include "../transport/TransportManager.h"
#include "../utility/UtilityFacade.h"
#include "../memento/CityMemento.h"
#include "../government/Government.h"
#include "../managers/BuildingManager.h"

#include <list>

class SatisfactionState;  // Forward declaration
class CityMemento;
class Government;

class City {
    private:
        SatisfactionState* satisfaction;
        BuildingManager* buildingManager;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;
        Government* government;

        float budget;
        double totalBuildCost;
        double totalTax;

        int population;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;


    public:
        City();
        ~City();

        void setSatisfactionState(SatisfactionState* s);

        // for the Interface
        int getPopulation();
        float getBudget();
        int getPowerDemand();
        int getWaterDemand();
        int getWasteDemand();
        int getSewageDemand();

        //transport related functions
        
        /// @brief Adds a mode of transport to the city
        /// @param type "Airport", "Bus", "Ferry", "Train"
        /// @param name eg. "Gautrain"
        /// @param budget The budget of the city at the current point in time
        void addTransport(string type, string name, float& budget);

        void printTransport();

        /// @brief Calculates if the current transport system is satisfactory for the population of the city
        /// @return True if there is enough modes of transport and false if not
        bool calcTransportSatisfaction();

        //government related functions

        /// @brief Implements a random policy that will increase/decrease citizen satisfaction and costs R 5000 to implement
        void implementPolicy();

        //memento related functions
        CityMemento* saveGame();
        void loadGame(CityMemento* save);

        //add func to calculate demand and set demand vars

        //add func to check efficiency of diff utilities, set satisfaction and print what is not meeting demand

        

        //Building related functions 
        void getTotalBuildCost();
        //add func to upgrade different utilities and set satisfaction after upgrading
        /// @brief Calculates the total Tax income accumulated from all of the buildings
        void getTotalTax();
        void getTotalLivingCapacity();
        void getTotalEmployeeCapacity();
        void getTotalSatisfactionValue();

        int buildBuilding(std::string nName, int bType, int bName);
};

#endif
