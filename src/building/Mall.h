#ifndef MALL_H
#define MALL_H

class Mall : Commercial {


public:
	Mall();

	void acceptVisitor(Visitor* visitor);
};

#endif
