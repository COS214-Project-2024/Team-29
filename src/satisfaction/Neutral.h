#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "SatisfactionState.h"

/**
 * @class Neutral
 * @brief Represents a Neutral satisfaction state within a city.
 *
 * The Neutral class provides the implementation of a Neutral satisfaction state,
 * with operations to adjust the state as necessary.
 */
class Neutral : public SatisfactionState {
    public:
        /**
         * @brief Constructs a Neutral satisfaction state.
         */
        Neutral();
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return "Neutral" satisfaction level as a string.
         */
        std::string getSatisfactionLevel();
        /**
         * @brief Increases the satisfaction level of the city from Neutral to Satisfied.
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        void incSatisfactionState(City* c);
        /**
         * @brief Decreases the satisfaction level of the city from Neutral to Unsatisfied.
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        void decSatisfactionState(City* c);
        /**
         * @brief This returns a copy of the neutral state.
         *
         * @return SatisfactionState pointer to copy.
         */
        SatisfactionState* clone();
};

#endif