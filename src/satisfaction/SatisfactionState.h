#ifndef SATISFACTIONSTATE_H
#define SATISFACTIONSTATE_H

class City;

#include <string>

class SatisfactionState {
    public:
        virtual std::string getSatisfactionLevel() = 0;
        virtual void incSatisfactionState(City* c) = 0;
        virtual void decSatisfactionState(City* c) = 0;
    
    protected:
        std::string state;
};

#endif