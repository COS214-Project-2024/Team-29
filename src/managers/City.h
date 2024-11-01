#ifndef CITY_H
#define CITY_H

#include "satisfaction/SatisfactionState.h"
#include "building/BuildingComponent.h"
#include "transport/TransportManager.h"
#include "utility/UtilityFacade.h"
#include "memento/CityMemento.h"

class City {
    private:
        SatisfactionState* satisfaction;
        BuildingComponent* buildings;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;

        float budget;
        int population;

    public:
        City();
        ~City();

        void setSatisfactionState(SatisfactionState* s);

        BuildingComponent* getBuildings(){return buildings;};

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

        //memento related functions
        void CityMemento saveGame();
        void loadGame(CityMemento save);

};

#endif
