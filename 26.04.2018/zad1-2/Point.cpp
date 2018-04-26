#include "stdafx.h"
#include "Point.h"

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

float Point::getx()
{
	return x;
}

float Point::gety()
{
	return y;
}
