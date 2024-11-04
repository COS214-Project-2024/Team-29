#ifndef SATISFIED_H
#define SATISFIED_H

#include "SatisfactionState.h"

/**
 * @class Satisfied
 * @brief Represents a Satisfied satisfaction state within a city.
 *
 * The Satisfied class provides the implementation of a Satisfied satisfaction state,
 * with operations to adjust the state as necessary.
 */
class Satisfied : public SatisfactionState {
    public:
        /**
         * @brief Constructs a Satisfied satisfaction state.
         */
        Satisfied();
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return "Satisfied" satisfaction level as a string.
         */
        std::string getSatisfactionLevel();
        /**
         * @brief Increases the satisfaction level of the city from Satisfied to VerySatisfied.
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        void incSatisfactionState(City* c);
        /**
         * @brief Decreases the satisfaction level of the city from Satisfied to Neutral.
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        void decSatisfactionState(City* c);
        SatisfactionState* clone();
};

#endif