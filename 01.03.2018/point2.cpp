#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
	float x;
	float y;

public:
	point (float x, float y);
	float getX();
	float getY();
	void setX(float x);
	void setY(float y);
	void move(point p);
};

point::point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float point::getX()
{
	return x;
}

float point::getY()
{
	return y;
}

void point::setX(float x)
{
	this->x = x;
}

void point::setY(float y)
{
	this->y = y;
}

void point::move(point p)
{
	x = x + p.x;
	y = y + p.y;
	cout << x << endl << y<<endl;
}

float distance(point p1, point p2)
{
		return sqrt(pow(p2.getX() - p1.getX(),2) + pow(p2.getY() - p1.getY(),2));
}


int main()
{
	point p=point(2.5, 1.5);
	point p2 = point(1, 2);
	p.move(p2);
	cout << p.getX() << endl << p.getY() << endl;
	cout << distance(p, p2) << endl;


	cin.get();
	cin.get();

	return 0;
}
