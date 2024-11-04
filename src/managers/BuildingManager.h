#ifndef BUILDING_MANAGER_H
#define BUILDING_MANAGER_H

#include "../buildingFactory/CommercialBuildingCreator.h"
#include "../buildingFactory/IndustrialBuildingCreator.h"
#include "../buildingFactory/LandmarkBuildingCreator.h"
#include "../buildingFactory/ResidentialBuildingCreator.h"
#include "../buildingComposite/CompositeNeighbourhood.h"

#include <list>
#include <string>

class BuildingManager
{
    private:
        CommercialBuildingCreator* cCreator; 
        IndustrialBuildingCreator* iCreator; 
        LandmarkBuildingCreator* lCreator; 
        ResidentialBuildingCreator* rCreator; 

        std::list<CompositeNeighbourhood*> nList;    // Neighbourhood list
    public:
        BuildingManager() {};
        std::string createNeighbourhood(std::string nName); 
        double buildBuilding(std::string nName, int bType, int bName, double balance); 
        std::string getTotalPerNeighbourhood();
        double getTotalBuildCost();
        double getTotalTaxIncome();
        int getTotalLivingCapacity();
        int getTotalEmployeeCapacity();
        int getTotalSatisfactionValue();
        bool neighbourhoodExists(std::string nName);    // Helper function        
        ~BuildingManager();
};

#endif // BUILDING_MANAGER_H