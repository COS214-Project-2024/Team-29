#include "CityMemento.h"

CityMemento::~CityMemento()
{
    delete satisfaction;
    delete buildingManager;
    delete utilitiesManager;
    delete transportManager;
    delete government;

}

void CityMemento::setSatisfaction(SatisfactionState* s) {
    this->satisfaction = s;
}

void CityMemento::setBuildingManager(BuildingManager * b) {
    this->buildingManager = b;
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

void CityMemento::setBudget(float b) {
    this->budget = b;
}

void CityMemento::setBuildCost(double b) {
    this->totalBuildCost = b;
}

void CityMemento::setTax(double t) {
    this->totalTax = t;
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
    return this->satisfaction->clone();
}

BuildingManager* CityMemento::getBuildingManager() const {
    return this->buildingManager->clone();
}

UtilityFacade* CityMemento::getUtilityManager() const {
    return this->utilitiesManager->clone();
}

Government * CityMemento::getGovernment() const {
    return this->government->clone();
}

TransportManager* CityMemento::getTransportManager(float& b) const {
    return this->transportManager->copy(b);
}

float CityMemento::getBudget() const {
    return this->budget;
}

double CityMemento::getBuildCost() const{
    return totalBuildCost;
}

double CityMemento::getTax() const{
    return totalTax;
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
