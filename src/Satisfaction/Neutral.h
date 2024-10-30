#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "SatisfactionState.h"

class Neutral : public SatisfactionState {
    public:
        Neutral();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
};

#endif