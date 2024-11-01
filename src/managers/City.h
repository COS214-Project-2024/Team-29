#ifndef CITY_H
#define CITY_H

#include "satisfaction/SatisfactionState.h"
#include "building/BuildingComponent.h"
#include "transport/ModeOfTransport.h"
#include "utility/UtilityFacade.h"
#include "memento/CityMemento.h"

class City {
    private:
        SatisfactionState* satisfaction;
        BuildingComponent* buildings;
        UtilityFacade* utilitiesManager;
        vector<ModeOfTransport*> modesOfTransport;

    public:
        City();
        ~City();

        void setSatisfactionState(SatisfactionState* s);

        BuildingComponent* getBuildings(){return buildings;};

        //transport related functions
        void addTransport(ModeOfTransport* transport);

        //memento related functions
        CityMemento saveGame();
        loadGame(CityMemento save);

};

#endif
