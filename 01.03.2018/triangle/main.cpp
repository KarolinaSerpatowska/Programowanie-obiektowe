#include <iostream>
#include <cmath>
#include "triangle.h"
using namespace std;

int main()
{
	triangle p(Point(2, 1), Point (1,2), Point (3,4));

	cout << p.perimeter() << endl << p.area() << endl;

	cin.get();
	cin.get();

	return 0;
}
