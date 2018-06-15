#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
	float x;
	float y;
};


void Funkcja(vector<Point>& a)
{
	sort(a.begin(), a.end(), [](const Point& b,const Point& c)->bool {return b.x > c.x; });
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i].x << endl;// << a[i].y << endl;
	}
}

int main()
{
	Point p1, p2, p3;
	p1.x = 10;
	p1.y = 0;
	p2.x = 11;
	p2.y = 11;
	p3.x = 2;
	p3.y = 11;
	vector<Point> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].x << endl; //<< v[i].y << endl;
	}


		void(*pfnWskaznik)(vector<Point>& a);

		pfnWskaznik = &Funkcja;

		(*pfnWskaznik)(v);


	system("PAUSE");
	return 0;
}
