#ifndef Triangle_h
#define Triangle_h

#include "Polygon.h"

class Triangle : public Polygon
{
	float a, b, c;
public:
	Triangle(float a, float b, float c);
	virtual float circ() override;
};

#endif