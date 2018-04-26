#include "Point.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(Point p1, Point p2)
{
	return (p1.getx() < p2.getx());
}

vector<Point> funkcja(const vector<Point> &p, Point p2, Point p3)
{
	vector<Point> vRes;
	for (int i = 0; i <= p.size(); i++)
	{
		if (p[i].getx >= p2.getx() && p[i].getx <= p3.getx())
		{
			if (p[i].gety<=p2.gety() && p[i].gety()>=p3.gety())
			{
				vRes.push_back(p[i]);
			}
		}
			
	}
	return vRes;
}

int main()
{
	vector<Point> p;
	p.push_back(Point(12,1));
	p.push_back(Point(13,12));
	p.push_back(Point(1,2));
	sort(p.begin(), p.end(), cmp);
	
	
	system("PAUSE");
    return 0;
}

