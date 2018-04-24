#ifndef RegularPrism_h
#define RegularPrism_h

#include "RegularPolyhedron.h"

class RegularPrism:public poly::RegularPolyhedron
{
public:
	RegularPrism(double, double, int);
	virtual float objetosc();
};

#endif