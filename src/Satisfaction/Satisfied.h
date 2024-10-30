#ifndef SATISFIED_H
#define SATISFIED_H

#include "SatisfactionState.h"

class Satisfied : public SatisfactionState {
    public:
        Satisfied();
        std::string getSatisfactionLevel();
        void incSatisfactionState(City* c);
        void decSatisfactionState(City* c);
};

#endif