#ifndef CITY_H
#define CITY_H

#include "Satisfaction/SatisfactionState.h"
#include "building/BuildingComponent.h"
#include "ModeOfTransport.h"
#include "UtilityFacade.h"

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

        //transport related functions
        void addTransport(ModeOfTransport* transport);
};

#endif
