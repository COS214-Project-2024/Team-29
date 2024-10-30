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
        ModeOfTransport* modesOfTransport;
        UtilityFacade* utilitiesManager;
    
    protected:
        City();
        ~City();

    public:
        static City* instance();
        void setSatisfactionState(SatisfactionState* s);
};

#endif
