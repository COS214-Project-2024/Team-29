#ifndef POWERPLANTDECORATOR_H
#define POWERPLANTDECORATOR_H

#include "UtilitiesDecorator.h"

/**
 * @class PowerPlantDecorator
 * @brief A decorator class for the power plant utility.
 *
 * This class extends the `UtilitiesDecorator`
 */
class PowerPlantDecorator : public UtilitiesDecorator{
    public:
        /**
         * @brief Default constructor for PowerPlantDecorator.
         *
         * Initializes the power plant utility and initialises capacity to 100,
         * building upon the base functionality provided by `UtilitiesDecorator'.
         */
        PowerPlantDecorator();
};

#endif