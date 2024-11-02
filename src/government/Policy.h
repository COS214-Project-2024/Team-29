#ifndef POLICY_H
#define POLICY_H

#include <iostream>
using namespace std;

class Policy {
    private:
        string policyName;
        bool impact;
    public:
        /// @brief Creates a new policy
        /// @param policyName The name of the policy, eg. "More public holidays"
        /// @param impact True if the policy has a positive impact on citizen satisfaction
        Policy(string policyName, bool impact);
        
        string getName();
        bool getImpact();
};

#endif