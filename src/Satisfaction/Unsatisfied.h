#ifndef UNSATISFIED_H
#define UNSATISFIED_H

#include "SatisfactionState.h"

class Unsatisfied : public SatisfactionState {
    public:
        Unsatisfied();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
};

#endif