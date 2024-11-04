#ifndef VERYSATISFIED_H
#define VERYSATISFIED_H

#include "SatisfactionState.h"

/**
 * @class VerySatisfied
 * @brief Represents a VerySatisfied satisfaction state within a city.
 *
 * The VerySatisfied class provides the implementation of a VerySatisfied satisfaction state,
 * with operations to adjust the state as necessary.
 */
class VerySatisfied : public SatisfactionState {
    public:
        /**
         * @brief Constructs a VerySatisfied satisfaction state.
         */
        VerySatisfied();
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return "VerySatisfied" satisfaction level as a string.
         */
        std::string getSatisfactionLevel();
        /**
         * @brief Increases the satisfaction level of the city from VerySatisfied to VerySatisfied. (Highest SatisfactionState)
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        void incSatisfactionState(City* c);
        /**
         * @brief Decreases the satisfaction level of the city from VerySatisfied to Satisfied.
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        void decSatisfactionState(City* c);
        SatisfactionState* clone();
};

#endif