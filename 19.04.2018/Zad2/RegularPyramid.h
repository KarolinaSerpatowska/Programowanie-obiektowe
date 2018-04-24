#ifndef RegularPyramid_h
#define RegularPyramid_h

#include "RegularPolyhedron.h"

class RegularPyramid :public poly::RegularPolyhedron
{
public:
	RegularPyramid(double length, double height, int number);
	virtual float objetosc();

};

#endif