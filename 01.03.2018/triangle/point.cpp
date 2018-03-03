#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

void Point::move(Point p)
{
	x = x + p.x;
	y = y + p.y;
	cout << x << endl << y << endl;
}
