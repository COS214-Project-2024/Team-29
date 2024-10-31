#ifndef SHOP_H
#define SHOP_H

class Shop : Commercial {


public:
	Shop();

	void acceptVisitor(Visitor* visitor);
};

#endif
