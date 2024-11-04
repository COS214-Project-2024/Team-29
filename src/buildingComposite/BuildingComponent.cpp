#include "BuildingComponent.h"
#include <iostream>

void BuildingComponent::addBuilding(BuildingComponent* bc) {
    std::cout << "Cant add building on building component level" << std::endl;
}

void BuildingComponent::demolishBuilding(BuildingComponent* bc) {
    std::cout << "Cant demolish building on building component level" << std::endl;
}