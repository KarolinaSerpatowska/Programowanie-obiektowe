#include <iostream>
#include <cstdlib>

using namespace std;

class Polygon
{

public:
	struct Point
	{
		float x;
		float y;
	};

private:
	int rozmiar;
	Point *p = new Point[rozmiar];
	int ilosc;

public:
	Polygon()
	{
		p = new Point[4];
		rozmiar = 4;
		ilosc = 0;
	}

	Polygon(int x)
	{
		int iloczyn;
		int b = 4;
		iloczyn = x * 4;
		do
		{
			if (x > b)
			{
				x = x - b;
			}
			else
			{
				b = b - x;
			}
		} while (x != b);

		rozmiar = iloczyn / x;
		p = new Point[rozmiar];
		ilosc = 0;
	}

	Polygon(const Polygon &a)
	{
		rozmiar = a.rozmiar;
		ilosc = a.ilosc;

		Point *p2 = new Point[rozmiar];
		for (int i = 0; i < rozmiar; i++)
		{
			p2[i] = a.p[i];
		}
	}

	~Polygon()
	{
		delete[] p;
	}

	void addpoint(Point a)
	{
		if (ilosc == rozmiar)
		{
			rozmiar = rozmiar + 4;
			Point *z = new Point[rozmiar];
			for (int i = 0; i < rozmiar; i++)
			{
				z[i] = p[i];
			}
			delete[] p;
		}

	}

	Point &function(int a)
	{
		return p[a];
	}

};

class Image
{
	Polygon *polygons = new Polygon [10];
	int numberpolys;

	Image(const Image &im)
	{
		for (int i = 0; i < 10; i++)
		{
			polygons[i] = im.polygons[i];
		}
		numberpolys = im.numberpolys;
	}

};


int main()
{

	system("PAUSE");
	return 0;
}
