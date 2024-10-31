#ifndef OFFICE_H
#define OFFICE_H

class Office : Commercial {


public:
	Office();

	void acceptVisitor(Visitor* visitor);
};

#endif
