#ifndef PARK_H
#define PARK_H

class Park : Landmark {


public:
	Park();

	void acceptVisitor(Visitor* visitor);
};

#endif
