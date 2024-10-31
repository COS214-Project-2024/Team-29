#ifndef CITY_H
#define CITY_H

#include "../building/BuildingComponent.h"
#include "../transport/ModeOfTransport.h"
#include "../utility/UtilityFacade.h"

class SatisfactionState;  // Forward declaration

class City {
    private:
        static City* cityInstance;
        SatisfactionState* satisfaction;
        BuildingComponent* buildings;
        UtilityFacade* utilitiesManager;
        vector<ModeOfTransport*> modesOfTransport;
    
    protected:
        City();
        ~City();

    public:
        static City* instance();
        void setSatisfactionState(SatisfactionState* s);

        BuildingComponent* getBuildings(){return buildings;};

        //transport related functions
        void addTransport(ModeOfTransport* transport);
};

#endif
