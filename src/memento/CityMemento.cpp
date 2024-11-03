#include "CityMemento.h"

CityMemento::~CityMemento()
{
    delete satisfaction;
    for( auto * curr : buildings){
        delete curr;
    }
    buildings.clear();
    delete utilitiesManager;
    delete transportManager;

}

void CityMemento::setSatisfaction(SatisfactionState* s) {
    this->satisfaction = s;
}

void CityMemento::setBuildings(list<BuildingComponent*> b) {
    this->buildings = b;
}

void CityMemento::setUtilityManager(UtilityFacade* m) {
    this->utilitiesManager = m;
}

void CityMemento::setGovernment(Government * g) {
    this->government = g;
}

void CityMemento::setTransportManager(TransportManager* m) {
    this->transportManager = m;
}

void CityMemento::setBudget(double b) {
    this->budget = b;
}

void CityMemento::setPopulation(int p) {
    this->population = p;
}

void CityMemento::setTotalPowerDemand(int t) {
    this->totalPowerDemand = t;
}

void CityMemento::setTotalWaterDemand(int t) {
    this->totalWaterDemand = t;
}

void CityMemento::setTotalWasteDemand(int t) {
    this->totalWasteDemand = t;
}

void CityMemento::setTotalSewageDemand(int t) {
    this->totalSewageDemand = t;
}

SatisfactionState* CityMemento::getSatisfaction() const {
    return this->satisfaction;
}

list<BuildingComponent*> CityMemento::getBuildings() const {
    return this->buildings;
}

UtilityFacade* CityMemento::getUtilityManager() const {
    return this->utilitiesManager;
}

Government * CityMemento::getGovernment() const {
    return this->government;
}

TransportManager* CityMemento::getTransportManager() const {
    return this->transportManager;
}

double CityMemento::getBudget() const {
    return this->budget;
}

int CityMemento::getPopulation() const {
    return this->population;
}

int CityMemento::getTotalPowerDemand() const {
    return this->totalPowerDemand;
}

int CityMemento::getTotalWaterDemand() const {
    return this->totalWaterDemand;
}

int CityMemento::getTotalWasteDemand() const {
    return this->totalWasteDemand;
}

int CityMemento::getTotalSewageDemand() const {
    return this->totalSewageDemand;
}
