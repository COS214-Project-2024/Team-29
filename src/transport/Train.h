#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

class Train: public ModeOfTransport {

    public:
        /// @brief Creates a new train for the city. 
        ///
        ///- Cost: R 500 000. 
        ///
        ///- Type: GoodsTransport 
        ///
        ///- Capacity: 100 000
        /// @param name the name of the train
        /// @throws runtime_error if there is not enough budget to build the train
        Train(string name, float& budget);
        ~Train();
        string getTransportType();
        string getName();
        string getType();
        
    private:
        float cost;
        string name;
};

#endif