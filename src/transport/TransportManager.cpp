#include "TransportManager.h"

void TransportManager::addTransport(string type, string name, float& budget)
{
    if(type == "Airport") {
        modesOfTransport.push_back(new Airport(name, budget));
    }
    else if(type == "Bus") {
        modesOfTransport.push_back(new Bus(name, budget));
    }
    else if(type == "Ferry") {
        modesOfTransport.push_back(new Ferry(name, budget));
    }
    else if(type == "Train") {
        modesOfTransport.push_back(new Train(name, budget));
    }
    else {
        cout << "idk how you got here but something went terribly wrong :(" << endl;
    }
}

TransportManager *TransportManager::copy(float &budget)
{
    TransportManager* manager = new TransportManager();

    for(ModeOfTransport* tm : this->modesOfTransport) {
        manager->addTransport(tm->getType(), tm->getName(), budget);
    }

    return manager;
}

int TransportManager::getTotalCapacity()
{
    int total = 0;
    for (ModeOfTransport* transport : modesOfTransport)
        total += transport->getCapacity();
    return total;
}

void TransportManager::printSummary()
{
    for (ModeOfTransport* transport : modesOfTransport)
        cout << transport->toString() << endl;
}

TransportManager::~TransportManager()
{
    for (ModeOfTransport* transport : modesOfTransport)
        delete transport;
    modesOfTransport.clear();
}
