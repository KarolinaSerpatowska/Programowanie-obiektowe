#include <iostream>
#include <cmath>

using namespace std;

class RegularPolyhedron
{
	float podstawa, wysokosc, polepodstawy;
	int iloscbokow;

public:
	RegularPolyhedron(float dl, int ilosc, float h)
	{
		podstawa = dl;
		iloscbokow = ilosc;
		wysokosc = h;
		polepodstawy = (iloscbokow / 4)*(1 / tan(3.14 / iloscbokow))*(podstawa*podstawa);
	} 

	virtual float volume() = 0;

protected:
	float getpole()
	{
		return polepodstawy;
	}

	float geth()
	{
		return wysokosc;
	}
};


int main()
{
	
	system("PAUSE");
    return 0;
}
