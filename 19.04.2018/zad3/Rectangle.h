#ifndef Rectangle_h
#define Rectangle_h

#include "Polygon.h"

class Rectangle:public Polygon 
{
	float a, b, c, d;
public:
	Rectangle(float a, float b, float c, float d);
	virtual float circ();
};

#endif