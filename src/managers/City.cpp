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
    CityMemento* save = new CityMemento();
    save->setSatisfaction(this->satisfaction->clone());
    //save->setBuildingManager(this->buildingManager->clone()); Possibly going to remove this
    
    save->setUtilityManager(this->utilitiesManager->clone());
    float temp = budget;
    save->setTransportManager(this->transportManager->copy(temp));
    save->setGovernment(this->government->clone());

    save->setBudget(temp);
    save->setPopulation(this->population);
    save->setTotalPowerDemand(this->totalPowerDemand);
    save->setTotalWaterDemand(this->totalWaterDemand);
    save->setTotalWasteDemand(this->totalWasteDemand);
    save->setTotalSewageDemand(this->totalSewageDemand);

}

void City::loadGame(CityMemento* save)
{
    this->satisfaction = save->getSatisfaction();
    this->buildingManager  = save->getBuildingManager();
    this->budget = save->getBudget();
    this->utilitiesManager = save->getUtilityManager();
    this->transportManager = save->getTransportManager(this->budget);
    this->government = save->getGovernment();

    
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