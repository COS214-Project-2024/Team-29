#ifndef PLANTS_H
#define PLANTS_H

class Plants : Industrial {


public:
	Plants();

	void acceptVisitor(Visitor* visitor);
};

#endif
