#ifndef CITY_H
#define CITY_H

#include "Satisfaction/SatisfactionState.h"

class City {
    private:
        static City* cityInstance;
        SatisfactionState* satisfaction;
    
    protected:
        City();
        ~City();

    public:
        static City* instance();
        void setSatisfactionState(SatisfactionState* s);
};

#endif