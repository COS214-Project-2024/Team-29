#ifndef VERYUNSATISFIED_H
#define VERYUNSATISFIED_H

#include "SatisfactionState.h"

class VeryUnsatisfied : public SatisfactionState {
    public:
        VeryUnsatisfied();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
};

#endif