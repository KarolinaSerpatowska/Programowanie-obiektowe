#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

float distance(Point p1, Point p2)
{
		return sqrt(pow(p2.getX() - p1.getX(),2) + pow(p2.getY() - p1.getY(),2));
}


int main()
{
	Point p=Point(2.5, 1.5);
	Point p2 = Point(1, 2);
	p.move(p2);
	cout << p.getX() << endl << p.getY() << endl;
	cout << distance(p, p2) << endl;


	cin.get();
	cin.get();

	return 0;
}
