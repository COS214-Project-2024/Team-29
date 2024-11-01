#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "../managers/City.h"

class City;

class Government {

private:
	static Government* uniqueinstance;
	City* city;
	double budget;

protected:
	Government();
	~Government();
public:
	static Government* instance();
};

#endif
