#include "managers/Interface.h"

int main()
{
    Interface* gameInterface = new Interface();

    //start simulation
    gameInterface->startSimulation();
    //startSimulation has its own game over conditions
    //game will be over after startSimulation is done running

    delete gameInterface;
    return 0;
}