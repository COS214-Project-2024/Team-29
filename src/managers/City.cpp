#include "City.h"
#include "../satisfaction/Neutral.h"

City::City(){
    // instantiate class variables here
    // Buildings, transport, utilities, satisfaction
    this->satisfaction = new Neutral();
    this->transportManager = new TransportManager();
    this->buildingManager = new BuildingManager();

    //Starting conditions
    this->budget = (float)100000;
    this->population = 10;
    this->buildingManager->createNeighbourhood("StarterNeighbourhood");
    this->buildBuilding("StarterNeighbourhood", 1, 2);  //Shop
    this->buildBuilding("StarterNeighbourhood", 2, 1);  //Factory
    this->buildBuilding("StarterNeighbourhood", 3, 1);  //Park
    this->buildBuilding("StarterNeighbourhood", 4, 1);  //Townhouse
    this->buildBuilding("StarterNeighbourhood", 4, 3);  //House
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
    //corresponds to Memento::setMemento(memento)
    // this->satisfaction = save->getSatisfaction();
    // this->buildings = save->getBuildings();
    // this->modesOfTransport = save->getModesOfTransport();
}

City::~City(){
    // delete other class variables here
    delete satisfaction;
    delete transportManager; 
    delete buildingManager;
}

void City::getTotalBuildCost() {
    totalBuildCost = buildingManager->getTotalBuildCost();
}

void City::collectTaxes(){
    budget += (float)buildingManager->getTotalTaxIncome();  //C-style cast to float
}

void City::getTotalLivingCapacity() {
    population = buildingManager->getTotalLivingCapacity();
}

void City::getTotalEmployeeCapacity() {
    population = buildingManager->getTotalEmployeeCapacity();
}

void City::getTotalSatisfactionValue() {
    population = buildingManager->getTotalSatisfactionValue();
}

/*
    * Function to build a building in the city
    * @param nName Name of the neighbourhood
    * @param bType Type of building
    * @param bName Name of the building
    * @return 1 if building is built, 0 if not
*/
int City::buildBuilding(std::string nName, int bType, int bName) {
    double buildingCost = this->buildingManager->buildBuilding(nName, bType, bName, (double)budget);

    // If not building error, update budget
    if(buildingCost != -1){
        budget = budget - (float)buildingCost;
        return 1;   // Return success code
    }

    return 0;   // Return error code
}