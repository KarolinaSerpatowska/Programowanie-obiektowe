#include <iostream>

using namespace std;

struct Point
{
	float x;
	float y;

	friend istream &operator>>(istream&, Point&);
};

istream &operator>> (istream& wejscie, Point& ex)
{
	wejscie >> ex.x >> ex.y;
	return wejscie;
}

int main()
{
	Point p;
	p.x = 10;
	p.y = 11;
	cout << p.x << endl << p.y << endl;

	system("PAUSE");
    return 0;
}

