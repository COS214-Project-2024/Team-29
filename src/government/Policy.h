#ifndef POLICY_H
#define POLICY_H

#include <iostream>
using namespace std;

/**
 * @class Policy
 * @brief Represents a policy with a name and an impact on citizen satisfaction.
 *
 * The Policy class defines attributes for each policy, including its name and
 * whether it has a positive or negative impact on the satisfaction of citizens.
 */
class Policy {
    private:
        string policyName;  /**< The name of the policy, e.g., "More public holidays". */
        bool impact;        /**< Impact of the policy on citizen satisfaction (true for positive impact). */
    public:
        /**
         * @brief Constructs a new policy with the specified name and impact.
         * @param policyName The name of the policy, e.g., "More public holidays".
         * @param impact True if the policy has a positive impact on citizen satisfaction; false otherwise.
         */
        Policy(string policyName, bool impact);
        /**
         * @brief Retrieves the name of the policy.
         * @return The policy name as a string.
         */
        string getName();
        /**
         * @brief Retrieves the impact of the policy on citizen satisfaction.
         * @return True if the policy has a positive impact; false otherwise.
         */
        bool getImpact();
};

#endif