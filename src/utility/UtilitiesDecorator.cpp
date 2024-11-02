#include "UtilitiesDecorator.h"
#include <iostream>
#include <cmath>

UtilitiesDecorator::UtilitiesDecorator(int capacity)
{
    currentCapacity = capacity;
    level = 0;
}

bool UtilitiesDecorator::upgradeLevel()
{
    if(level<3)
    {
        ++level;
        return true;
    }
    else
    {
        return false;
    }
}

int UtilitiesDecorator::getCapacity()
{   
    int out = currentCapacity;

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

bool UtilitiesDecorator::isEfficient(int demand)
{
    int currentProduction = getCapacity();

    if(currentProduction<demand)
    {
        return false;
    }
    else
    {
        return true;
    }
}