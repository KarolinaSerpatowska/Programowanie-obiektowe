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

class Points
{
	Point **tab;
	int n;
public:
	friend ostream& operator<<(ostream&, Points const&);
	
	Points(int size)
	{
		tab = new Point*[size];
		for (int i = 0; i < size; i++)
		{
			tab[i] = new Point;
			tab[i]->x = i;
			tab[i]->y = i;
			cout << tab[i]->x << " " << tab[i]->y << endl;
		}
	}
};

ostream& operator<<(ostream& wyjscie, Points const& ex)
{
	for (int i = 0; i < ex.n; i++)
	{
		wyjscie << ex.tab[i]->x << endl << ex.tab[i]->y << endl;
	}
		return wyjscie;
}

int main()
{
	Point p;
	p.x = 10;
	p.y = 11;
	cout << p.x << endl << p.y << endl;
	Points pp(5);
	cout << pp;

	system("PAUSE");
    return 0;
}

