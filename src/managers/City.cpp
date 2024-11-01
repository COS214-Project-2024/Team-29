#include "City.h"
#include "../satisfaction/Neutral.h"

City::City(){
    // instantiate class variables here
    // Buildings, transport, utilities, satisfaction
    this->satisfaction = new Neutral();
    this->transportManager = new TransportManager();
}

void City::setSatisfactionState(SatisfactionState* s){
    if(this->satisfaction != nullptr)
        delete this->satisfaction;
        
    this->satisfaction = s;
}

void City::addTransport(string type,string name, float& budget)
{
    this->transportManager->addTransport(type, name, budget);
}

void City::printTransport()
{
    this->transportManager->printSummary();
}

bool City::calcTransportSatisfaction()
{
    if(transportManager->getTotalCapacity() > this->population*0.75)
        return true;
    return false
}

CityMemento City::saveGame()
{
    //corresponds to Memento::createMemento()
    CityMemento* save = new CityMemento();
    save->setSatisfaction(this->satisfaction);
    save->setBuildings(this->buildings);
    save->setModesOfTransport(this->modesOfTransport);  // this has to be changed
    // save->setGovernment(this->government);

    //any attributes that get added to city must be here
    return save;
}

City::loadGame(CityMemento save)
{
    //corresponds to Memento::setMemento(memento)
    this->satisfaction = save->getSatisfaction();
    this->buildings = save->getBuildings();
    this->modesOfTransport = save->getModesOfTransport();
}

City::~City(){
    // delete other class variables here
    delete satisfaction;

    delete tranportManager; 

}