#ifndef WASTEMANAGEMENTDECORATOR_H
#define WASTEMANAGEMENTDECORATOR_H

#include "UtilitiesDecorator.h"

/**
 * @class WasteManagementDecorator
 * @brief A decorator class for the waste management utility.
 *
 * This class extends the `UtilitiesDecorator`
 */
class WasteManagementDecorator : public UtilitiesDecorator {
    public:
        /**
         * @brief Default constructor for WasteManagementDecorator.
         *
         * Initializes the waste management utility and initialises capacity to 120,
         * building upon the base functionality provided by `UtilitiesDecorator`.
         */
        WasteManagementDecorator();
};

#endif
