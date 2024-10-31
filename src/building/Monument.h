#ifndef MONUMENT_H
#define MONUMENT_H

class Monument : Landmark {


public:
	Monument();

	void acceptVisitor(Visitor* visitor);
};

#endif
