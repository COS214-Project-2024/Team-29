#ifndef CITY_H
#define CITY_H



#include "../buildingComposite/BuildingComponent.h"

#include "../transport/TransportManager.h"
#include "../utility/UtilityFacade.h"
#include "../memento/CityMemento.h"
#include "../government/Government.h"
#include "../visitor/TaxRateVisitor.h"
#include "../visitor/BuildingVisitor.h"
#include <list>

class SatisfactionState;  // Forward declaration
class CityMemento;

class City {
    private:
        SatisfactionState* satisfaction;
        list<BuildingComponent*> buildings;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;
        Government* government;

        float budget;
        int population;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;


    public:
        City();
        ~City();

        void setSatisfactionState(SatisfactionState* s);

        list<BuildingComponent*> getBuildings(){return buildings;};

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

        //add func to upgrade different utilities and set satisfaction after upgrading
        /// @brief Calculates the total Tax income accumulated from all of the buildings
        void caclulateTotalTax();

};

#endif
