#include <iostream>


using namespace std;

namespace pt
{
	class Point
	{
		int x, y;

	public:

		int getx()
		{
			return x;
		}

		int gety()
		{
			return y;
		}

		Point()
		{
			x = 0;
			y = 0;
		}

		Point(int a, int b)
		{
			x = a;
			y = b;
		}

	};
}

class Point3d:public pt::Point
{
	int z;

public:

	int getz()
	{
		return z;
	}

	Point3d(int x, int y, int z): pt::Point(x,y), z(z){	}

};

class Polygon:public pt::Point
{
	int rozmiar;
	Point *tab = new Point[rozmiar];
	int ilosc = 0;
public:
	Polygon() {};
	Polygon(Point p, int r)
	{
		rozmiar = r;
		tab[ilosc] = p;
		ilosc++;
	}

	static Polygon triangle(Point p1, Point p2, Point p3)
	{
		Polygon *poly = new Polygon;
		poly->rozmiar = 3;
		poly->ilosc = 3;
		poly->tab[0] = p1;
		poly->tab[1] = p2;
		poly->tab[2] = p3;
		
		return *poly;

	}
};


int main()
{
	pt::Point p(12, 10);
	Point3d p1(12,10,1);


	system("PAUSE");
    return 0;
}
