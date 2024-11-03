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

int City::getPopulation(){
    return this->population;
}

float City::getBudget(){
    return this->budget;
}

int City::getPowerDemand(){
    return this->totalPowerDemand;
}

int City::getWaterDemand(){
    return this->totalWaterDemand;
}

int City::getWasteDemand(){
    return this->totalWasteDemand;
}

int City::getSewageDemand(){
    return this->totalSewageDemand;
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
    return false;
}

void City::implementPolicy()
{
    bool satisfied = this->government->implementPolicy(budget);

    if(satisfied)
        this->satisfaction->incSatisfactionState(this);
    else
        this->satisfaction->decSatisfactionState(this);
        
}

CityMemento *City::saveGame()
{
    /* //corresponds to Memento::createMemento()
    CityMemento* save = new CityMemento();
    save->setSatisfaction(this->satisfaction);
    save->setBuildings(this->buildings);
    save->setModesOfTransport(this->modesOfTransport);  // this has to be changed
    // save->setGovernment(this->government);

    //any attributes that get added to city must be here
    return save; */
    return nullptr;
}

void City::loadGame(CityMemento* save)
{
    this->satisfaction = save->getSatisfaction();
    this->buildings  = save->getBuildings();

    this->utilitiesManager = save->getUtilityManager();
    this->transportManager = save->getTransportManager();
    this->government = save->getGovernment();

    this->budget = save->getBudget();
    this->population = save->getPopulation();
    this->totalPowerDemand = save->getTotalPowerDemand();
    this->totalWaterDemand = save->getTotalWaterDemand();
    this->totalWasteDemand = save->getTotalWasteDemand();
    this->totalSewageDemand = save->getTotalSewageDemand();
}

City::~City(){
    // delete other class variables here
    delete satisfaction;

    delete transportManager; 

}

void City::caclulateTotalTax(){
    BuildingVisitor * tax = new TaxRateVisitor();
    for(auto * hood : buildings){
        hood->accept(tax);
    }
    budget = tax->getValue();
}