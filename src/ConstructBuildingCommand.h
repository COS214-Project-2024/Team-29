#ifndef CONSTRUCTBUILDINGCOMMAND_H
#define CONSTRUCTBUILDINGCOMMAND_H

#include "Command.h"
#include "building/Building.h"
#include "building/CommercialBuildingCreator.h"
#include "building/IndustrialBuildingCreator.h"
#include "building/ResidentialBuildingCreator.h"
#include "building/LandmarkBuildingCreator.h"


class ConstructBuildingCommand : public Command{
    private:
        Building* building;
        CommercialBuildingCreator* commercialCreator;
        IndustrialBuildingCreator* industrialCreator;
        ResidentialBuildingCreator* residentialCreator;
        LandmarkBuildingCreator* landmarkCreator;

    public:
        ConstructBuildingCommand(Building* building, CommercialBuildingCreator* cC, IndustrialBuildingCreator* iC, ResidentialBuildingCreator* rC, LandmarkBuildingCreator* lC);
        void execute();
};
#endif