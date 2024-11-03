#ifndef SEWGAEMANAGEMENTDEOCORATOR_H
#define SEWGAEMANAGEMENTDEOCORATOR_H

#include "UtilitiesDecorator.h"

/**
 * @class SewageManagementDecorator
 * @brief A decorator class for the sewage management utility.
 *
 * This class extends the `UtilitiesDecorator`
 */
class SewageManagementDecorator : public UtilitiesDecorator{
    public:
        /**
         * @brief Default constructor for SewageManagementDecorator.
         *
         * Initializes the sewage management utility and initialises capacity to 180,
         * building upon the base functionality provided by `UtilitiesDecorator`.
         */
        SewageManagementDecorator();
};

#endif