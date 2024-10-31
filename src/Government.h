#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "City.h"
#include "command/ConstructBuildingCommand.h"
#include "command/SetPolicyCommand.h"
#include "command/AllocateResourcesCommand.h"

class City;

class Government {

private:
	static Government* uniqueinstance;
	City* city;
	ConstructBuildingCommand* construct;
	SetPolicyCommand* policies;
	AllocateResourcesCommand* resources;
	double budget;

protected:
	Government();
	~Government();
public:
	ConstructBuildingCommand* getConstruct();
	SetPolicyCommand* getPolicies();
	AllocateResourcesCommand* getResources();
	static Government* instance();
};

#endif
