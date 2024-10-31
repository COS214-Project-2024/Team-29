#ifndef ESTATES_H
#define ESTATES_H

class Estates : Residential {


public:
	Estates();

	void acceptVisitor(Visitor* visitor);
};

#endif
