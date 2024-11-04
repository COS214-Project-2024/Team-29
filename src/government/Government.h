#ifndef GOVERNMENT_H
#define GOVERNMENT_H


#include "Policy.h"

#include <iostream>
#include <vector>
using namespace std;

class City;

/**
 * @class Government
 * @brief Manages the policies that can be implemented within a city to impact citizen satisfaction and budget.
 *
 * The Government class handles a collection of policies and provides functionality
 * to implement them, which reduces city's budget and affects citizen satisfaction.
 */
class Government {

private:
	vector<Policy> policies;	/**< Collection of all possible policies that can be implemented. */

public:
	/**
     * @brief Constructs a Government instance, initializing it with a list of policies from "Policies.txt".
     */
	Government();
	Government* clone() const;

	/**
     * @brief Implements a random policy for a set price of R 5000.
     * @param budget A reference to the city's budget for managing costs.
     * @return True if the policy positively impacts citizen satisfaction; False otherwise.
     */
	bool implementPolicy(float& budget);
	
};

#endif
