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

    public:
        /**
         * @brief Constructor for UtilitiesDecorator.
         * Initialises level to 0.
         * @param capacity Initial capacity of the utility.
         */
        UtilitiesDecorator(int capacity);

        /**
         * @brief Attempts to upgrade the utility level.
         *
         * Increases the level by one if it is below the maximum level of 5.
         * Returns true if the upgrade is successful, false if already at max level.
         *
         * @return True if upgrade is successful; false if already at max level.
         */
        bool upgradeLevel();

        /**
         * @brief Gets the current capacity of the utility.
         *
         * @return The current capacity.
         */
        int getCapacity();

        /**
         * @brief Gets the current level of the utility.
         *
         * @return The current level.
         */
        int getLevel();

        /**
         * @brief Checks if the utility is efficient given a demand.
         *
         * Determines if the utility’s capacity at the current level can meet the demand.
         * If demand is greater than `capacity * 2^level`, it returns false; otherwise, true.
         *
         * @param demand The demand to check efficiency against.
         * @return True if the utility is efficient; false otherwise.
         */
        bool isEfficient(int demand);

        /// @brief Changes the currentCapacity variable to the passed in parameters value
        /// @param c New Capacity value that currentCapacity will change to
        void setCapacity(int c);

        /// @brief Changes the level variable to the passed in parameters value
        /// @param l New level value to change to
        void setLevel(int l);
};

#endif
