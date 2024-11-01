#include "City.h"
#include "../satisfaction/Neutral.h"

City::City(){
    // instantiate class variables here
    // Buildings, transport, utilities, satisfaction
    this->satisfaction = new Neutral();
}

void City::setSatisfactionState(SatisfactionState* s){
    if(this->satisfaction != nullptr)
        delete this->satisfaction;
        
    this->satisfaction = s;
}

void City::addTransport(ModeOfTransport *transport)
{
    this->modesOfTransport.push_back(transport);
}

CityMemento City::saveGame()
{
    //corresponds to Memento::createMemento()
    CityMemento* save = new CityMemento();
    save->setSatisfaction(this->satisfaction);
    save->setBuildings(this->buildings);
    save->setModesOfTransport(this->modesOfTransport);
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

    for (ModeOfTransport* transport : modesOfTransport)
        delete transport;
    modesOfTransport.clear(); 

}