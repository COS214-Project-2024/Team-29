#include "UtilitiesDecorator.h"
#include <iostream>
#include <cmath>

UtilitiesDecorator::UtilitiesDecorator(int capacity,int cost)
{
    currentCapacity = capacity;
    level = 0;
    costOfUpgrade = cost;
}

void UtilitiesDecorator::upgradeLevel()
{
    level = level + 1;
}

int UtilitiesDecorator::getCapacity()
{   
    int out = currentCapacity;

    for(int i=1;i<=level;i++)
    {
        out = out*3;
    }

    return out;
}

int UtilitiesDecorator::getUpgradeCost()
{
    int out = costOfUpgrade;

    for(int i=1;i<=level;i++)
    {
        out = out*2;
    }

    return out;
}

int UtilitiesDecorator::getLevel()
{
    return level;
}

void UtilitiesDecorator::setCapacity(int c){
    this->currentCapacity = c;
}

void UtilitiesDecorator::setLevel(int l){
    this->level = l;
}
