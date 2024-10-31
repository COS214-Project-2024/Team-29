#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "City.h"
#include "ConstructBuildingCommand.h"
#include "SetPolicyCommand.h"
#include "AllocateResourcesCommand.h"

class City;
class ConstructBuildingCommand;
class SetPolicyCommand;
class AllocateResourcesCommand; 

class Government {

private:
	Government* uniqueinstance;
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
