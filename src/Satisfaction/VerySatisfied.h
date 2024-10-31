#ifndef VERYSATISFIED_H
#define VERYSATISFIED_H

#include "SatisfactionState.h"

class VerySatisfied : public SatisfactionState {
    public:
        VerySatisfied();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
};

#endif