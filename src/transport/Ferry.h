#ifndef FERRY_H
#define FERRY_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

class Ferry: public ModeOfTransport {

    public:
        /// @brief Creates a new ferry for the city. 
        ///
        ///- Cost: R 1 000 000. 
        ///
        ///- Type: PublicTransport 
        ///
        ///- Capacity: 500 000
        /// @param name the name of the ferry
        /// @throws runtime_error if there is not enough budget to build the ferry
        Ferry(string name);
        ~Ferry();
        string getTransportType();
        string getName();
        string getType();

    private:
        float cost;
        string name;
};

#endif