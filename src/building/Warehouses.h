#ifndef WAREHOUSES_H
#define WAREHOUSES_H

class Warehouses : Industrial, Industrial {


public:
	Warehouses();

	void acceptVisitor(Visitor* visitor);
};

#endif
