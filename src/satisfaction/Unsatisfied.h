#ifndef UNSATISFIED_H
#define UNSATISFIED_H

#include "SatisfactionState.h"

/**
 * @class Unsatisfied
 * @brief Represents a Unsatisfied satisfaction state within a city.
 *
 * The Unsatisfied class provides the implementation of a Unsatisfied satisfaction state,
 * with operations to adjust the state as necessary.
 */
class Unsatisfied : public SatisfactionState {
    public:
        /**
         * @brief Constructs a Unsatisfied satisfaction state.
         */
        Unsatisfied();
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return "Unsatisfied" satisfaction level as a string.
         */
        std::string getSatisfactionLevel();
        /**
         * @brief Increases the satisfaction level of the city from Unsatisfied to Neutral.
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        void incSatisfactionState(City* c);
        /**
         * @brief Decreases the satisfaction level of the city from Unsatisfied to VeryUnsatisfied.
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        void decSatisfactionState(City* c);
        SatisfactionState* clone();
};

#endif