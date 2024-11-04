#ifndef GOVERNMENT_H
#define GOVERNMENT_H


#include "Policy.h"

#include <iostream>
#include <vector>
using namespace std;

class City;

class Government {

private:
	/// @brief Contains all of the possible policies that can be implemented
	vector<Policy> policies;

public:
	/// @brief Creates an instance of governent and initialises it with the list of policies in "Policies.txt"
	Government();
	Government* clone() const;

	/// @brief Implements a random policy for the set price of R 5000
	/// @param budget A reference to the city budget
	/// @return True if the policy will have a positive impact on the citizen satisaction state, False if not
	bool implementPolicy(float& budget);
	
};

#endif
