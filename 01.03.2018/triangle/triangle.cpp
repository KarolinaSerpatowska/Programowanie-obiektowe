#include "triangle.h"
#include <cmath>

triangle::triangle(Point a, Point b, Point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
	float triangle::distance(Point p1, Point p2)
	{
		return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
	}

	float triangle::perimeter()
	{
		return distance(a, b) + distance(a, c) + distance(b, c);
	}

	float triangle::area()
	{
		float p = perimeter() / 2;
		return sqrt(p*(p - distance(a, b))*(p - distance(a, c)) + (p - distance(b, c)));
	}
