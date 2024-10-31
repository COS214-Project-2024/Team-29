#ifndef CULTURALCENTRE_H
#define CULTURALCENTRE_H

class CulturalCentre : Landmark {


public:
	CulturalCentre();

	void acceptVisitor(Visitor* visitor);
};

#endif
