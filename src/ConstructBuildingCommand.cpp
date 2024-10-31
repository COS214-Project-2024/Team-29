#include "ConstructBuildingCommand.h"

ConstructBuildingCommand::ConstructBuildingCommand(Building* build, CommercialBuildingCreator* cC, IndustrialBuildingCreator* iC, ResidentialBuildingCreator* rC, LandmarkBuildingCreator* lC){
    this->building = build;
    this->commercialCreator = cC;
    this->industrialCreator = iC;
    this->residentialCreator = rC;
    this->landmarkCreator = lC;
}

void ConstructBuildingCommand::execute(){
    int buildingType = 0;
    int subType = 0;
    Building* newBuilding = nullptr;

    std::cout<<"What type of building would you like to build?"<<std::endl
             <<"1. Residential\n"
             <<"2. Commercial\n"
             <<"3. Industrial\n"
             <<"4. Landmark\n";
    
    std::cin>>buildingType;

    switch(buildingType){
        case 1:
            newBuilding = residentialCreator->createBuilding(); 
            std::cout<<"Residential building created\n";
        case 2:
            std::cout<<"Commercial building created\n";
            newBuilding = commercialCreator->createBuilding(); 
        case 3:
            std::cout<<"Industrial building created\n";
            newBuilding = industrialCreator->createBuilding(); 
        case 4:
            std::cout<<"Landmark building created\n";
            newBuilding = landmarkCreator->createBuilding(); 
    }

    building->addBuilding(newBuilding);

    /* switch(buildingType){
        case 1:
            std::cout<<"1. Townhouse\n"
            <<"2. Estate\n"
            <<"3. House\n"
            <<"4. Aparments\n";
            std::cin>>subType;
        case 2:
            std::cout<<"1. Shop\n"
            <<"2. Mall\n"
            <<"3. Office\n";
            std::cin>>subType;
        case 3:
            std::cout<<"1. Factory\n"
            <<"2. Warehouse\n"
            <<"3. Plant\n";
            std::cin>>subType;
        case 4:
            std::cout<<"1. Park\n"
            <<"2. CulturalCentre\n"
            <<"3. Monument\n";
            std::cin>>subType;
    } */

    //handle building constuctor

    //std::cout<<"What nighbourhood would you like to add it to?"<<std::endl;

    //handle input and neighbourhood addition
}