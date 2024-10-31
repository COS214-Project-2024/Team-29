#include "AllocateResourcesCommand.h"
#include "managers/City.h"

AllocateResourcesCommand::AllocateResourcesCommand(City* newCity){
    city = newCity;
}

void AllocateResourcesCommand::execute(){
    //city->allocateResources
}