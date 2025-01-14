#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H 

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

#include "../buildingComposite/Building.h"

/** 
 * @brief Abstract class for the different modes of transport
 * 
 * - Template Method: AbstractClass
 */ 
class ModeOfTransport {

    public:
        /**
        * @enum ModeOfTransport::TransportType
        * @brief Specifies the type of transport provided by a mode of transport.
        * 
        *   - PublicTransport: Transports people. Impacts citizen satisfaction 
        * 
        *   - GoodsTransport: Transports goods. Impacts the city's economy
        * 
        *   - GeneralTransport: Transports both people and goods 
        * 
        */
        enum class TransportType { PublicTransport, GoodsTransport, GeneralTransport };
        
        /** 
         * @brief Generates a string with a description of the mode of transport
         * @return [String] eg. "Train: GoodsTransport, Name: Gautrain, Capacity: 100000"
         * 
         * TEMPLATE METHOD - templateMethod()
         *
         */
        string toString();

        /// @brief Returns the capacity of the mode of transport
        /// @return [int] The amount of people/goods that the mode of transport can move in a cycle
        int getCapacity();

        /// @brief Get the capacity of public transport
        /// @return The amount of people that can be transported across the entire city in one cycle
        int getPublicTransportCapacity();

        /// @brief Returns the capacity of the mode of transport
        /// @return The amount of goods that the entire city can move in one cycle
        int getGoodsTransportCapacity();

    protected:

        /// @brief The amount of people/goods that the mode of transport can move in a cycle
        int capacity;

        /// @brief The type of transport according to what is transported (PublicTransit, GoodsTransport, GeneralTransport)
        TransportType type;

        /// @brief The total capacity of all of the public transport across the city (tram, bus, ferry)
        static int publicTransportCapacity;

        /// @brief Total capacity of all of the goods transport across the city (train, airport)
        static int goodsTransportCapacity;

        /** @brief Returns type of transport as a string (Public, Goods, General)
         * 
         * TEMPLATE METHOD - PrimitiveOperation()
         */
        virtual string getTransportType() = 0;

        /** @brief Returns name of the method of transport as a string eg. Gautrain
         * 
         * TEMPLATE METHOD - PrimitiveOperation()
         */
        virtual string getName() = 0;

        /** @brief Returns type of transport as a string (Train, Bus, Airport)
         * 
         * TEMPLATE METHOD - PrimitiveOperation()
         */
        virtual string getType() = 0;

};

#endif
