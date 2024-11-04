#ifndef SATISFACTIONSTATE_H
#define SATISFACTIONSTATE_H

class City;

#include <string>

/**
 * @class SatisfactionState
 * @brief Abstract class representing a satisfaction state with operations to adjust the city's satisfaction level.
 *
 * The SatisfactionState class serves as a base for different satisfaction levels:<br>
 * -VeryUnsatisfied<br>
 * -Unsatisfied<br>
 * -Neutral<br>
 * -Satisfied<br>
 * -VerySatisfied<br>
 * providing an interface for retrieving and modifying the satisfaction state of a city.
 * 
 */
class SatisfactionState {
    protected:
        std::string state;  /**< The current satisfaction state as a string representation. */
        
    public:
        /**
         * @brief Retrieves the current satisfaction level as a string.
         * @return The satisfaction level as a string.
         */
        virtual std::string getSatisfactionLevel() = 0;
        /**
         * @brief Increases the satisfaction level of the city.
         * @param c Pointer to the City object whose satisfaction is to be increased.
         */
        virtual void incSatisfactionState(City* c) = 0;
        /**
         * @brief Decreases the satisfaction level of the city.
         * @param c Pointer to the City object whose satisfaction is to be decreased.
         */
        virtual void decSatisfactionState(City* c) = 0;
        virtual SatisfactionState* clone() = 0;
    
};

#endif