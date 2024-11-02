#ifndef WATERSUPPLYDECORATOR_H
#define WATERSUPPLYDECORATOR_H

#include "UtilitiesDecorator.h"

/**
 * @class WaterSupplyDecorator
 * @brief A decorator class for the water supply utility.
 *
 * This class extends the `UtilitiesDecorator`
 */
class WaterSupplyDecorator : public UtilitiesDecorator{
    public:
        /**
         * @brief Default constructor for WaterSupplyDecorator.
         *
         * Initializes the water supply utility and initialises capacity to 200,
         * building upon the base functionality provided by `UtilitiesDecorator`.
         */
        WaterSupplyDecorator();
};

#endif