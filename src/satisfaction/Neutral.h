#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "SatisfactionState.h"
#include "Satisfied.h"
#include "Unsatisfied.h"

class Neutral : public SatisfactionState {
    public:
        Neutral();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
        SatisfactionState* clone();
};

#endif