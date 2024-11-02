#include "CityMemento.h"

CityMemento::~CityMemento()
{
    delete this->satisfaction;
    delete this->buildings;
    //delete this->modesOfTransport;
}

void CityMemento::setSatisfaction(SatisfactionState *s)
{
    this->satisfaction = s;
}

void CityMemento::setBuildings(BuildingComponent *b)
{
    this->buildings = b;
}

void CityMemento::setModesOfTransport(vector<ModeOfTransport> m)
{
    this->modesOfTransport = m;
}

SatisfactionState *CityMemento::getSatisfaction()
{
    return this->satisfaction;
}

BuildingComponent *CityMemento::getBuildings()
{
    return this->buildings;
}

vector<ModeOfTransport *> CityMemento::getModesOfTransport()
{
    return modesOfTransport;
}
