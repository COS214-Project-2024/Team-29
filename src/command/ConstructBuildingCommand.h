#ifndef CONSTRUCTBUILDINGCOMMAND_H
#define CONSTRUCTBUILDINGCOMMAND_H

#include "Command.h"
#include "building/CompositeNeighbourhood.h"
#include "building/CommercialBuildingCreator.h"
#include "building/IndustrialBuildingCreator.h"
#include "building/ResidentialBuildingCreator.h"
#include "building/LandmarkBuildingCreator.h"


class ConstructBuildingCommand : public Command{
    private:
        CompositeNeighbourhood* neighbourhood;
        CommercialBuildingCreator* commercialCreator;
        IndustrialBuildingCreator* industrialCreator;
        ResidentialBuildingCreator* residentialCreator;
        LandmarkBuildingCreator* landmarkCreator;

    public:
        ConstructBuildingCommand(CompositeNeighbourhood* n, CommercialBuildingCreator* cC, IndustrialBuildingCreator* iC, ResidentialBuildingCreator* rC, LandmarkBuildingCreator* lC);
        void execute();
};
#endif