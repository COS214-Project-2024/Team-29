#ifndef APARTMENTS_H
#define APARTMENTS_H

class Apartments : Residential {


public:
	Apartments();

	void acceptVisitor(Visitor* visitor);
};

#endif
