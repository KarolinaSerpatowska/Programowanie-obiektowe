#include <iostream>
#include <cmath> // for distance
using namespace std;

#include "point.cpp" // definicje

float distance(point a, point b) { sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); }

class trojkat
{
    point a;
    point b;
    point c;
public:
    Triangle(point a, point b, point c) {
	    this->a = a;
	    this->b = b;
	    this->c = c;
    }
	
    float obw() { return distance(a, b) + distance(b, c) + distance(c, a); } 
    float area() { 
		float p = obw() / 2;
		return sqrt(p 
		* (p - distance(a, b)) 
		* (p - distance(b, c))
		* (p - distance(c, a)));
	}
};


int main()
{
	trojkat x (point(2,3), point(5,7), point(11,13));
	float obw;
	obw = x.obw();
	cout << obw;
	cin.get();
	cin.get();
    return 0;
}
