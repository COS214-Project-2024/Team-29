#ifndef GOVERNMENT_H
#define GOVERNMENT_H

class Government {

private:
	Government* uniqueinstance;
	City* city;
	ConstructBuildingCommand* construct;
	SetPolicyCommand* policies;
	AllocateResourcesCommand* resources;
	double budget;

public:
	Government();

	Government* instance();
};

#endif
