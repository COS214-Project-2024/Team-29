#ifndef VERYUNSATISFIED_H
#define VERYUNSATISFIED_H

#include "SatisfactionState.h"

/**
 * @class VeryUnsatisfied
 * @brief Represents a VeryUnsatisfied satisfaction state within a city.
 *
 * The VeryUnsatisfied class provides the implementation of a VeryUnsatisfied satisfaction state,
 * with operations to adjust the state as necessary.
 */
class VeryUnsatisfied : public SatisfactionState {
    public:
        /**
         * @brief Constructs a VeryUnsatisfied satisfaction state.
         */
        VeryUnsatisfied();
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return "VeryUnsatisfied" satisfaction level as a string.
         */
        std::string getSatisfactionLevel();
        /**
         * @brief Increases the satisfaction level of the city from VeryUnsatisfied to Unsatisfied.
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        void incSatisfactionState(City* c);
        /**
         * @brief Decreases the satisfaction level of the city from VeryUnsatisfied to VeryUnsatisfied. (Lowest SatisfactionState)
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        void decSatisfactionState(City* c);
        SatisfactionState* clone();
};

#endif