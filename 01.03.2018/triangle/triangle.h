#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class triangle
{
	
	Point a;
	Point b;
	Point c;
	float distance(Point p1, Point p2);
public:
	triangle(Point a, Point b, Point c);
	
	float perimeter();
	float area();
	
};



#endif
