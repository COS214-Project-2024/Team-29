#ifndef TOWNHOUSES_H
#define TOWNHOUSES_H

class Townhouses : Residential {


public:
	Townhouses();

	void acceptVisitor(Visitor* visitor);
};

#endif
