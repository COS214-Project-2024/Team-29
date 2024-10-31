#ifndef FACTORIES_H
#define FACTORIES_H

class Factories : Industrial {


public:
	Factories();

	void acceptVisitor(Visitor* visitor);
};

#endif
