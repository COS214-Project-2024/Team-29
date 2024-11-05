#ifndef UTILITIESDECORATOR_H
#define UTILITIESDECORATOR_H

/**
 * @class UtilitiesDecorator
 * @brief The base decorator class for the various utility systems.
 *
 * The UtilitiesDecorator class provides basic attributes and methods for managing
 * the level and capacity of utility systems. It offers functionality for upgrading
 * levels, checking capacity, and determining efficiency based on demand.
 */
class UtilitiesDecorator {
    private:
        /// @brief The current upgrade level of the utility (min: 0, max: 5)
        int level;     
        ///@brief The current capacity of the utility
        int currentCapacity;
        /// @brief The base cost to upgrade the utility
        int costOfUpgrade;

    public:
        /**
         * @brief Constructor for UtilitiesDecorator.
         * Initialises level to 0.
         * @param capacity Initial capacity of the utility.
         * @param cost Base cost of the utility.
         */
        UtilitiesDecorator(int capacity, int cost);
        /**
         * @brief Upgrades the utility level by incrementing for each upgrade.
         */
        void upgradeLevel();
        /**
         * @brief Gets the current capacity of the utility.
         *
         * @return The current capacity.
         */
        int getCapacity();
        /**
         * @brief Gets the cost to upgrade the utility (cost == cost*3^level).
         *
         * @return The current capacity.
         */
        int getUpgradeCost();
        /**
         * @brief Gets the current level of the utility.
         *
         * @return The current level.
         */
        int getLevel();

        /// @brief Changes the currentCapacity variable to the passed in parameters value
        /// @param c New Capacity value that currentCapacity will change to
        void setCapacity(int c);

        /// @brief Changes the level variable to the passed in parameters value
        /// @param l New level value to change to
        void setLevel(int l);
};

#endif
